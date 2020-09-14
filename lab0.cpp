#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	printf("Enter an integer a\n");
	scanf_s("%d", &a);
	printf("Enter an integer b\n");
	scanf_s("%d", &b);
	printf("Enter an integer c\n");
	scanf_s("%d", &c);
	b = c - a;
	printf("%d",b);
	return 0;
}