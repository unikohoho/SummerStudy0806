//�Լ� ���� : �� ���� �Է¹޾Ƽ� ��Ģ�����ϴ� ���α׷�

#include<stdio.h>

//���� �Է¹޴� �Լ�
int get_integer() {
	int num;
	printf("���� �Է� : ");
	scanf("%d", &num);

	return num;
}
//���ϱ� �Լ�
int add(int x, int y) {
	return x + y;
}
//���� �Լ�
int subt(int x, int y) {
	return x - y;
}
//���ϱ� �Լ�
int times(int x, int y) {
	return x * y;
}
//������ �Լ�
double dev(int x, int y) {

	return (double)x / y;
}
int main(void) {
	int n1 = get_integer();
	int n2 = get_integer();

	printf("�� ���� �� : %d\n",add(n1, n2));
	printf("�� ���� �� : %d\n", subt(n1, n2));
	printf("�� ���� �� : %d\n", times(n1, n2));
	printf("�� ���� ������ : %.2lf\n", dev(n1, n2));

	return 0;
}