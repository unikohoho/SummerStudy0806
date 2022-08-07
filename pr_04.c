//함수 연습 :  사용자가 입력한 정수 중에서 큰 수를 찾아 출력하는 프로그램

#include<stdio.h>

int get_integer() {
	int num;
	printf("정수 입력 : ");
	scanf("%d", &num);
	return num;
}

int big_num(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int main(void) {
	int n1 = get_integer();
	int n2 = get_integer();

	int result = big_num(n1, n2);

	printf("큰 값 = %d\n", result);

	return 0;


}