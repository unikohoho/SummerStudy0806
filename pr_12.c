//�迭�� ���ڿ� ���� : ����ڷκ��� �̸��� �а��� �Է� ���� �� �迭�� ������ �� ����ϴ� ���α׷�

#include<stdio.h>

int main(void) {
	char name[50];
	char dept[50];

	printf("�̸� : ");
	scanf("%s", name);//&name�ƴ�!!!! �迭�� ����
	printf("�а� : ");
	scanf("%s", dept);
	printf("�ȳ��ϼ���, %s�а� %s�Դϴ�.\n", dept, name);

	return 0;

}