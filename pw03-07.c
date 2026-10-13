#include <stdio.h>
#include <string.h>
#define DISTRO  "LinuxDistro"

int main() {
	const char RDATE[] = "2026";
	printf("DISRO: %s\n", DISTRO);
	printf("RDATE: %s\n", RDATE);
	printf("STRLEN: %zd\n", strlen(DISTRO));
	printf("SIZEOF: %zd\n", sizeof(DISTRO));
	return 0;
}
