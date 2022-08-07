//사용자로부터 입력 받은 점수를 배열에 저장한 후 최대값, 최소값, 평균을 출력

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
		printf("점수%d 입력 : ",i+1);
		scanf("%d", &scores[i]);
	}

	printf("-----------------\n");

	for (int i = 0; i < SIZE; i++) {
		sum += scores[i];
	}
	avg = (double)sum / SIZE;

	printf("최대 점수 : %d\n",biggest(scores));
	printf("최소 점수 : %d\n",smallest(scores));
	printf("평균 점수 : %.2lf\n", avg);

}