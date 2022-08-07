//함수 연습 : print_stars()함수를 2번 호출하여 출력하는 프로그램
//함수 연습 : 표시할 문자를 입력 받아 출력하는 프로그램
#include<stdio.h>

void print_stars(void) {
	for (int i = 0; i < 30; i++)
		printf("*");
}

void print_whatever(char s) {
	for (int i = 0; i < 30; i++)
		printf("%c", s);

}

int main(void) {
	char input;
	printf("표시할 문자열 : ");
	scanf("%c", &input);

	print_whatever(input);
	printf("\nmaking functions\n");
	print_whatever(input);
	printf("\n");

	return 0;



}