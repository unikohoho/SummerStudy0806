//�Լ� ���� : ��Ģ���� ���� �����
//��, ������ ����� �׻� ����� ��µǾ���Ѵ�.
//��, ������ ���꿡�� �ǿ������� �и�� 0�� �� �� ����.

#include<stdio.h>

int get_integer();
int add(int x, int y);
int sub(int x, int y);
int times(int x, int y);
double dev(int x, int y);

int get_integer() {
	int input;
	printf("���� �Է� : ");
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
		printf("0���� ���� �� �����ϴ�.\n");
		return;
	}
	else
		return (double)x / y;
}
int main(void) {
	int n1 = get_integer();
	int n2 = get_integer();

	printf("�� ���� �� : %d\n",add(n1,n2));
	printf("�� ���� �� : %d\n",sub(n1,n2));
	printf("�� ���� �� : %d\n",times(n1,n2));
	printf("�� ���� ������ : %.2lf\n",dev(n1,n2));

	return 0;


}