#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

struct dugMathContext {
    void *handle;
    double (*du_cos)(double);
    double (*du_sin)(double);
    double (*du_foo)(double);
};

void* getDLSymbol(void *handle, char *symbolName) { 
    void *sym;
    char *error;
    int success = 0;
    sym = dlsym(handle, symbolName);
    if ((error = dlerror()) != NULL)  {
        printf("%s\n", error);
    }
    return sym;
}

struct dugMathContext* dugMathInit() { 
    struct dugMathContext *ctx = malloc(sizeof(struct dugMathContext));

    if(!ctx)
        return NULL;

    ctx->handle = dlopen("libm.so", RTLD_LAZY);

    if (!ctx->handle) {
        printf("%s\n", dlerror());
        return NULL;
    } else { 
        if((*(void**) (&(ctx->du_cos)) = getDLSymbol(ctx->handle, "cos")) == NULL) { 
            dlclose(ctx->handle);
            return NULL;
        }
        if((*(void**) (&(ctx->du_sin)) = getDLSymbol(ctx->handle, "sin")) == NULL) {             
            dlclose(ctx->handle);
            return NULL;
        }
        #if 0
        if((*(void**) (&(ctx->du_foo)) = getDLSymbol(ctx->handle, "foo")) == NULL) {             
            dlclose(ctx->handle);
            return NULL;
        }
        #endif
    }
    return ctx;
}

void dugMathFini(struct dugMathContext* ctx) { 
    if(!ctx)
        return;
    
    if(ctx->handle)
        dlclose(ctx->handle);
    
    free(ctx);
}

int main() {
    printf("Acquiring ctx\n");

    struct dugMathContext* ctx = dugMathInit();

    if(!ctx) { 
        printf("Couldn't load MathContext\n");
    } else {
        printf("Loaded MathContext\n");
        printf("cos(2.0) = %f\n", (*(ctx->du_cos))(2.0));
        printf("sin(2.0) = %f\n", (*(ctx->du_sin))(2.0));
    }
    dugMathFini(ctx);

    return 0;
}