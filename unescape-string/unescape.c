#include <stdio.h>
#include <stdlib.h>
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

// returns a pointer to null terminated string with all problematic Bash characters escaped
// point that is returned must be freed
char *escape_bash(char *input) {
    // Static hash set for special characters in Bash (ASCII values 0 to 255)
    static uint8_t special_char[256] = {
        [' '] = 1,
        ['\\'] = 1,
        ['$'] = 1,
        ['`'] = 1,
        ['"'] = 1,
        ['\''] = 1,
        ['!'] = 1,
        ['&'] = 1,
        ['*'] = 1,
        ['('] = 1,
        [')'] = 1,
        ['|'] = 1,
        [';'] = 1,
        ['<'] = 1,
        ['>'] = 1,
        ['{'] = 1,
        ['}'] = 1,
        ['['] = 1,
        [']'] = 1,
        ['~'] = 1,
        ['#'] = 1,
    };

    int input_len = strlen(input);

    // worst case, sacrifice a bit of memory so we don't have to iterate once for size and again to escape chars
    int output_len = input_len * 2;

    // Allocate memory for escaped string
    char *output = (char *)malloc(output_len + 1);
    if (output == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }

    // Escape characters and copy to output string
    int j = 0;
    for (int i = 0; i < input_len; i++) {
        char ch = input[i];

        if (special_char[ch]) {
            output[j++] = '\\';
        }
        output[j++] = ch;
    }
    output[j] = '\0'; // Null-terminate the output string

    return output;
}

// returns a pointer to null terminated string with all problematic Bash characters escaped
// pointer that is returned must be freed
void escape2(char *src, char *dest, unsigned int size) { 
    // static hash set for special characters in Bash (ASCII values 0 to 255)
    static uint8_t special_char[256] = {
        [' '] = 1,
        ['\\'] = 1,
        ['$'] = 1,
        ['`'] = 1,
        ['"'] = 1,
        ['\''] = 1,
        ['!'] = 1,
        ['&'] = 1,
        ['*'] = 1,
        ['('] = 1,
        [')'] = 1,
        ['|'] = 1,
        [';'] = 1,
        ['<'] = 1,
        ['>'] = 1,
        ['{'] = 1,
        ['}'] = 1,
        ['['] = 1,
        [']'] = 1,
        ['~'] = 1,
        ['#'] = 1,
    };

    int input_len = strlen(src);

    // escape characters and copy to output string
    int i = 0;
	int j = 0;
    char ch = 'a';
    while (ch != '\0' && i < size) {
        char ch = src[i];

        if (special_char[ch]) {
            dest[j++] = '\\';
        }
        dest[j++] = ch;
		i++;
    }
    dest[j] = '\0';
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
    src[out_idx] = '\0';
}

int main(int argc, char **argv) { 
    char path[] = "/p8/dug/geodev/liamr/002_Land_TrainingProject_Depth-4-OMV/imaging/030_Special_Chars/040tomorays_Tomography_Ray_Tracing_\\(Test\\)/000scratch/hors/land_horizon.ilclz";
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

    printf("--------------------------------------------------\n");

    char inv[8] = "12345678";
    char lon[8] = "ABCDEFGHIJKL";
    char god[8] = "1234567";

    printf("%8s: %s\n", "path", path);
    printf("%8s: %s\n", "inv", inv);
    printf("%8s: %s\n", "lon", lon);
    printf("%8s: %s\n", "god", god);

    print_str(path, strlen(path) + 1);
    print_str(inv, 8);
    print_str(lon, 8);
    print_str(god, 8);

    unescape_inplace(path, strlen(path) + 1);
    unescape_inplace(inv, 8);
    unescape_inplace(lon, 8);
    unescape_inplace(god, 8);

    printf("%8s: %s\n", "path", path);
    printf("%8s: %s\n", "inv", inv);
    printf("%8s: %s\n", "lon", lon);
    printf("%8s: %s\n", "god", god);

    print_str(path, 8);
    print_str(inv, 8);
    print_str(lon, 8);
    print_str(god, 8);

    printf("--------------------------------------------------\n");
    char *escaped = escape_bash(str2);
    printf("%8s: %s\n", "target", str);
    printf("%8s: %s\n", "escaped", escaped);
    free(escaped);

    printf("--------------------------------------------------\n");
    char escaped2[LEN];

    escape2(str2, escaped2, LEN);
    printf("%8s: %s\n", "target", str);
    printf("%8s: %s\n", "escaped2", escaped2);

    return 0;
}