//�迭 ���� : �л����� ������ �Է� �޾� �հ�� ����� ����ϴ� ���α׷�

#include<stdio.h>
#define SIZE 5

int main(void) {
	int scores[SIZE];
	int sum = 0;
	double avg;

	for (int i = 0; i < SIZE; i++) {
		printf("���� �Է� : ");
		scanf("%d", &scores[i]);
	}
	for (int i = 0; i < SIZE; i++)
		sum += scores[i];

	avg = (double)sum / SIZE;

	printf("���� ��� = %.2lf\n", avg);

	return 0;

}