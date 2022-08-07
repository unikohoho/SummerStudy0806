//배열 연습 :  배열에 들어있는 정수 중에서 최대값을 찾는 프로그램

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
	printf("최대값은 %d입니다.\n", max);

	return 0;

}