#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
	const char str_char[] = "Сбой матрицы";
	const wchar_t str_wchar[] = L"Сбой матрицы";
	printf("char -> sizeof: %zd bytes, strlen: %zd chars\n", sizeof(str_char), strlen(str_char));
	printf("wchar -> sizeof: %zd bytes, wcslen: %zd chars\n", sizeof(str_wchar), wcslen(str_wchar));
	return 0;
}
