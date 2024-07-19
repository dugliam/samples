#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define LEN 32

void print_str(char *str, uint32_t size) {
    int i = 0;
    char c;
    do { 
        c = str[i];
        printf("%d ", c);
        i++;
    } while (c != '\0' && i < size);
    printf("\n");
}

// out of place
void unescape_str(char *src, char *dest, uint32_t size) { 
    int in_idx = 0;
    int out_idx = 0;
    
    char c = 'a';
    while (c != '\0' && in_idx < size) { 
        c = src[in_idx];
        in_idx++;

        if (c == '\\')
            continue;

        dest[out_idx] = c;
        out_idx++;        
    }
}

// in place removal of '\' characteres in a given string
// resultant string length guaranteed to be <= input
// adds null terminator to last byte for safety if invalid string provided
void unescape_inplace(char *src, uint32_t size) { 
    int in_idx = 0;
    int out_idx = 0;
    
    char c = 'a';
    while (c != '\0' && in_idx < size - 1) {
        c = src[in_idx];
        in_idx++;

        if (c == '\\')
            continue;

        src[out_idx] = c;
        out_idx++;
    }
    printf("out_idx:%d\n", out_idx);
    src[out_idx] = '\0';
}

int main(int argc, char **argv) { 
    char str[LEN] = "abc\\!\\$\\&\\ def";
    char tar[LEN] = "abc!$& def";
    char res[LEN];

    // copy of the input string for the in place method
    char str2[LEN];
    strncpy(str2, str, LEN);

    unescape_str(str, res, LEN);
    unescape_inplace(str2, LEN);

    printf("%8s: %s\n", "input", str);
    printf("%8s: %s\n", "target", tar);
    printf("%8s: %s\n", "result 1", res);
    printf("%8s: %s\n", "result 2", res);

    print_str(str, LEN);
    print_str(tar, LEN);
    print_str(res, LEN);
    print_str(str2, LEN);

    printf("----------------------------------------\n");

    char inv[8] = "12345678";
    char lon[8] = "ABCDEFGHIJKL";
    char god[8] = "1234567";

    printf("%8s: %s\n", "inv", inv);
    printf("%8s: %s\n", "lon", lon);
    printf("%8s: %s\n", "god", god);

    print_str(inv, 8);
    print_str(lon, 8);
    print_str(god, 8);

    unescape_inplace(inv, 8);
    unescape_inplace(lon, 8);
    unescape_inplace(god, 8);

    printf("%8s: %s\n", "inv", inv);
    printf("%8s: %s\n", "lon", lon);
    printf("%8s: %s\n", "god", god);

    print_str(inv, 8);
    print_str(lon, 8);
    print_str(god, 8);


    return 0;
}