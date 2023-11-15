#include <stdio.h>

// formats an amount of bytes into a string eg: "32.456 PB", "898.124 MB"
// only goes up to petabytes and down to bytes
void format_prefix(char* str, float bytes) {
	float k = bytes / 1024.0;
	float m = k / 1024.0;
	float g = m / 1024.0;
	float t = g / 1024.0;
	float p = t / 1024.0;
	if(p > 1) { 
		snprintf(str, 64, "%.5g PB", p);
	} else if(t > 1) { 
		snprintf(str, 64, "%.5g TB", t);
	} else if(g > 1) { 
		snprintf(str, 64, "%.5g GB", g);
	} else if(m > 1) { 
		snprintf(str, 64, "%.5g MB", m);
	} else if(k > 1) { 
		snprintf(str, 64, "%.5g KB", k);
	} else { 
		snprintf(str, 64, "%.5g  B", bytes);
	}
}

int main() {
	char str[64];
    format_prefix(str, 1.94853);
    printf("%s/s\n",str);
    format_prefix(str, 2.75689*1024);
    printf("%s/s\n",str);
    format_prefix(str, 4.12348*1024*1024);
    printf("%s/s\n",str);
    format_prefix(str, 6.94825*1024*1024*1024);
    printf("%s/s\n",str);
    format_prefix(str, 84.1234*1024*1024*1024*1024);
    printf("%s/s\n",str);
    format_prefix(str, 4.12348*1024*1024*1024*1024*1024);
    printf("%s/s\n",str);
}