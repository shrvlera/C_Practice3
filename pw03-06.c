#include <stdio.h>

int main() {
	char text[20];
	int width;
	scanf("%s %d", text, &width);
	printf("%*s\n", width, text);
	printf("%-*s\n", width + 5, text);
	return 0;
}
