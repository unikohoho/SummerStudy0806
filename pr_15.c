//����ڷκ��� �Է� ���� ������ �迭�� ������ �� �ִ밪, �ּҰ�, ����� ���

#include<stdio.h>
#define SIZE 5

int biggest(int arr[]) {
	int max = arr[0];
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

int smallest(int arr[]) {
	int min = arr[0];
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}


int main(void) {
	int scores[SIZE];
	int sum = 0;
	double avg;

	for (int i = 0; i < SIZE; i++) {
		printf("����%d �Է� : ",i+1);
		scanf("%d", &scores[i]);
	}

	printf("-----------------\n");

	for (int i = 0; i < SIZE; i++) {
		sum += scores[i];
	}
	avg = (double)sum / SIZE;

	printf("�ִ� ���� : %d\n",biggest(scores));
	printf("�ּ� ���� : %d\n",smallest(scores));
	printf("��� ���� : %.2lf\n", avg);

}