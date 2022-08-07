//함수 연습 : 두 정수에 대한 덧셈 함수를 정의하여 호출하는 프로그램

#include<stdio.h>

int main(void) {

	int n1, n2, sum;
	printf("두 정수를 입력해주세요 : ");
	scanf("%d%d", &n1, &n2);

	sum = add(n1, n2);
	printf("두 수의 합은 %d입니다.\n", sum);

	return 0;

}

int add(int x, int y) {
	int result;
	result = x + y;

	return result;
}