//1���� ����ڰ� �Է��� ���������� ���� ����ϴ� ���α׷�

#include<stdio.h>

int add_all(int num) {
	int sum = 0;

	for (int i = 1; i <= num; i++)
		sum += i;

	return sum;
}

int get_integer() {
	int input;
	printf("���� �Է� : ");
	scanf("%d", &input);

	return input;

}

int main(void) {
	int input = get_integer();
	printf("1���� �Է¹��� �������� ���� %d�Դϴ�. \n", add_all(input));

	return 0;

}