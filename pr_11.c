//�迭 ���� :  �迭�� ����ִ� ���� �߿��� �ִ밪�� ã�� ���α׷�

#include<stdio.h>
#define SIZE 5

int main(void) {
	int scores[SIZE] = { 55,85,100,99,86 };
	int max;
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", scores[i]);
	}
	printf("\n");
	max = scores[0];
	for (int i = 1; i < SIZE; i++) {
		if (scores[i] > max)
			max = scores[i];
	}
	printf("�ִ밪�� %d�Դϴ�.\n", max);

	return 0;

}