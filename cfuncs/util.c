#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main(int argc, char **argv) {
    int rc;

    pid_t pid = getpid();

    printf("getpid(): %d\n", pid);

    char dir[] = "dir";

    printf("rmdir(%s)\n", dir);
    rc = rmdir(dir);
    if (rc != 0 && errno != ENOENT) {
        printf("Couldn't remove directory '%s': %s\n", dir, strerror(errno));
    }

    printf("mkdir(%s)\n", dir);
    rc = mkdir(dir, 0755);
    if (rc != 0 && errno != EEXIST) {
        printf("Couldn't create directory '%s': %s\n", dir, strerror(errno));
    }

    return 0;
}
