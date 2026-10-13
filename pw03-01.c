#include <stdio.h>
#include <string.h>
int main() {
	char m_eng[20] = "SubSUTIS";
	char m_rus[20] = "СибГУТИ";

	printf("SIZEOF: %zd\n" , sizeof m_eng);
	printf("STRLEN: %zd\n", strlen(m_eng));
	printf("FREE_BYTES: %zd\n\n", sizeof m_eng - (strlen(m_eng) + 1));

	printf("SIZEOF: %zd\n", sizeof m_rus);
	printf("STRLEN: %zd\n", strlen(m_rus));
	printf("FREE_BYTES: %zd\n", sizeof m_rus - (strlen(m_rus) + 1));

	return 0;
}

