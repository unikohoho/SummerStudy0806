//�Լ� ���� :  ����ڰ� �Է��� ���� �߿��� ū ���� ã�� ����ϴ� ���α׷�

#include<stdio.h>

int get_integer() {
	int num;
	printf("���� �Է� : ");
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

	printf("ū �� = %d\n", result);

	return 0;


}