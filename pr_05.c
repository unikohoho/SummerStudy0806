//1부터 사용자가 입력한 정수까지의 합을 출력하는 프로그램

#include<stdio.h>

int add_all(int num) {
	int sum = 0;

	for (int i = 1; i <= num; i++)
		sum += i;

	return sum;
}

int get_integer() {
	int input;
	printf("정수 입력 : ");
	scanf("%d", &input);

	return input;

}

int main(void) {
	int input = get_integer();
	printf("1부터 입력받은 수까지의 합은 %d입니다. \n", add_all(input));

	return 0;

}