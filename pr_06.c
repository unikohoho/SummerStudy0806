//함수 연습 : 사칙연산 계산기 만들기
//단, 뺄셈의 결과는 항상 양수만 출력되어야한다.
//단, 나눗셈 연산에서 피연산자인 분모는 0이 될 수 없다.

#include<stdio.h>

int get_integer();
int add(int x, int y);
int sub(int x, int y);
int times(int x, int y);
double dev(int x, int y);

int get_integer() {
	int input;
	printf("정수 입력 : ");
	scanf("%d", &input);

	return input;
}
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	if (x > y)
		return x - y;
	else
		return y - x;
}
int times(int x, int y) {
	return x * y;
}
double dev(int x, int y) {
	if (y == 0) {
		printf("0으로 나눌 수 없습니다.\n");
		return;
	}
	else
		return (double)x / y;
}
int main(void) {
	int n1 = get_integer();
	int n2 = get_integer();

	printf("두 수의 합 : %d\n",add(n1,n2));
	printf("두 수의 차 : %d\n",sub(n1,n2));
	printf("두 수의 곱 : %d\n",times(n1,n2));
	printf("두 수의 나누기 : %.2lf\n",dev(n1,n2));

	return 0;


}