//�Լ� ���� : �� ������ ���� ���� �Լ��� �����Ͽ� ȣ���ϴ� ���α׷�

#include<stdio.h>

int main(void) {

	int n1, n2, sum;
	printf("�� ������ �Է����ּ��� : ");
	scanf("%d%d", &n1, &n2);

	sum = add(n1, n2);
	printf("�� ���� ���� %d�Դϴ�.\n", sum);

	return 0;

}

int add(int x, int y) {
	int result;
	result = x + y;

	return result;
}