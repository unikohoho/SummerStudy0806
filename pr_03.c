//함수 연습 : 두 정수 입력받아서 사칙연산하는 프로그램

#include<stdio.h>

//정수 입력받는 함수
int get_integer() {
	int num;
	printf("정수 입력 : ");
	scanf("%d", &num);

	return num;
}
//더하기 함수
int add(int x, int y) {
	return x + y;
}
//빼기 함수
int subt(int x, int y) {
	return x - y;
}
//곱하기 함수
int times(int x, int y) {
	return x * y;
}
//나누기 함수
double dev(int x, int y) {

	return (double)x / y;
}
int main(void) {
	int n1 = get_integer();
	int n2 = get_integer();

	printf("두 수의 합 : %d\n",add(n1, n2));
	printf("두 수의 차 : %d\n", subt(n1, n2));
	printf("두 수의 곱 : %d\n", times(n1, n2));
	printf("두 수의 나누기 : %.2lf\n", dev(n1, n2));

	return 0;
}