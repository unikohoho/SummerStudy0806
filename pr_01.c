//�Լ� ���� : print_stars()�Լ��� 2�� ȣ���Ͽ� ����ϴ� ���α׷�
//�Լ� ���� : ǥ���� ���ڸ� �Է� �޾� ����ϴ� ���α׷�
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
	printf("ǥ���� ���ڿ� : ");
	scanf("%c", &input);

	print_whatever(input);
	printf("\nmaking functions\n");
	print_whatever(input);
	printf("\n");

	return 0;



}