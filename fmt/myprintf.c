#include <stdarg.h>
#include <stdio.h>

int my_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int i = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
                case 'd':
                {
                    int x = va_arg(args, int);
                    printf("%d", x);
                    break;
                }
                case 'f':
                {
                    double x = va_arg(args, double);
                    printf("%f", x);
                    break;
                }
                case 'h':
                {
                    double bytes = va_arg(args, double);
	                double k = bytes / 1024.0;
	                double m = k / 1024.0;
                	double g = m / 1024.0;
	                double t = g / 1024.0;
	                double p = t / 1024.0;
                    double e = p / 1024.0;
                    if(e > 1) { 
                        printf("%.5g E", e);
                    } else if(p > 1) { 
                        printf("%.5g P", p);
                    } else if(t > 1) { 
                        printf("%.5g T", t);
                    } else if(g > 1) { 
                        printf("%.5g G", g);
                    } else if(m > 1) { 
                        printf("%.5g M", m);
                    } else if(k > 1) { 
                        printf("%.5g k", k);
                    } else {
                        printf("%.5g  ", bytes);
                    }
                    break;
                }
                case 'c':
                {
                    int x = va_arg(args, int);
                    printf("%c", x);
                    break;
                }
                case 's':
                {
                    char *x = va_arg(args, char*);
                    printf("%s", x);
                    break;
                }
                case 'x':
                case 'X':
                {
                    int x = va_arg(args, int);
                    printf("%x", x);
                    break;
                }
                case 'p':
                {
                    void *x = va_arg(args, void*);
                    printf("%p", x);
                    break;
                }
                case '%':
                    putchar('%');
                    break;
                default:
                    putchar(format[i]);
                    break;
            }
        }
        else
        {
            putchar(format[i]);
        }
        i++;
    }

    va_end(args);
    return 0;
}

const char* prefix_format(double bytes) { 
	char suffix[] = {' ', 'k', 'M', 'G', 'T', 'P', 'E'};
	char length = sizeof(suffix) / sizeof(suffix[0]);

	int i = 0;

	if (bytes > 1024) {
		for (i = 0; bytes / 1024 > 1 && i<length-1; i++)
			bytes /= 1024.0;
	}

	static char output[200];
	sprintf(output, "%.5g %c", bytes, suffix[i]);
	return output;
}

const char* format_prefix(char* str, float bytes) {
	float k = bytes / 1024.0;
	float m = k / 1024.0;
	float g = m / 1024.0;
	float t = g / 1024.0;
	float p = t / 1024.0;
    float e = p / 1024.0;
    if(e > 1) { 
		snprintf(str, 64, "%.5g E", e);
    } else if(p > 1) { 
		snprintf(str, 64, "%.5g P", p);
	} else if(t > 1) { 
		snprintf(str, 64, "%.5g T", t);
	} else if(g > 1) { 
		snprintf(str, 64, "%.5g G", g);
	} else if(m > 1) { 
		snprintf(str, 64, "%.5g M", m);
	} else if(k > 1) { 
		snprintf(str, 64, "%.5g k", k);
	} else { 
		snprintf(str, 64, "%.5g  ", bytes);
	}
    return str;
}

const char* format_prefix2(char* str, size_t N, float bytes) {
    char suffix[] = {' ', 'k', 'M', 'G', 'T', 'P', 'E'};
	char length = sizeof(suffix) / sizeof(suffix[0]);
    int i = 0;
	if (bytes > 1024) {
		for (i = 0; bytes / 1024 > 1 && i<length-1; i++)
			bytes /= 1024.0;
	}
	snprintf(str, N, "%.5g %c", bytes, suffix[i]);
    return str;
}

int main() { 
    printf("\nImplementation 1: %h specifier as wrapper for printf\n");
    my_printf("%hB\n", 1.94853);
    my_printf("%hB\n", 2.75689*1024);
    my_printf("%hB\n", 4.12348*1024*1024);
    my_printf("%hB\n", 6.94825*1024*1024*1024);
    my_printf("%hB\n", 84.1234*1024*1024*1024*1024);
    my_printf("%hB\n", 4.12348*1024*1024*1024*1024*1024);
    my_printf("%hB\n", 023.41*1024*1024*1024*1024*1024*1024);

    printf("\nImplementation 2: export static char[] to print as %s in printf\n");
    printf("%sB/s\n", prefix_format(1.94853));
    printf("%sB/s\n", prefix_format(2.75689*1024));
    printf("%sB/s\n", prefix_format(4.12348*1024*1024));
    printf("%sB/s\n", prefix_format(6.94825*1024*1024*1024));
    printf("%sB/s\n", prefix_format(84.1234*1024*1024*1024*1024));
    printf("%sB/s\n", prefix_format(4.12348*1024*1024*1024*1024*1024));
    printf("%sB/s\n", prefix_format(1023.41*1024*1024*1024*1024*1024*1024));


    printf("\nImplementation 3: caller creates buffer and result copied into char[]\n");
    char str[64];
    printf("%sFLOP/s\n", format_prefix(str, 1.94853));
    printf("%sFLOP/s\n", format_prefix(str, 4.12348*1024*1024));
    printf("%sFLOP/s\n", format_prefix(str, 6.94825*1024*1024*1024));
    printf("%sFLOP/s\n", format_prefix(str, 84.1234*1024*1024*1024*1024));
    printf("%sFLOP/s\n", format_prefix(str, 489.12348*1024*1024*1024*1024*1024));
    printf("%sFLOP/s\n", format_prefix(str, 1023.41*1024*1024*1024*1024*1024*1024));

    printf("\nImplementation 4 : smarter version of (3)\n");
    printf("%sFLOP/s\n", format_prefix(str, 1.94853));
    printf("%sFLOP/s\n", format_prefix(str, 4.12348*1024*1024));
    printf("%sFLOP/s\n", format_prefix(str, 6.94825*1024*1024*1024));
    printf("%sFLOP/s\n", format_prefix(str, 84.1234*1024*1024*1024*1024));
    printf("%sFLOP/s\n", format_prefix(str, 489.12348*1024*1024*1024*1024*1024));
    printf("%sFLOP/s\n", format_prefix(str, 1023.41*1024*1024*1024*1024*1024*1024));


    return 0;
}