//배열 연습 : 학생들의 성적을 입력 받아 합계와 평균을 출력하는 프로그램

#include<stdio.h>
#define SIZE 5

int main(void) {
	int scores[SIZE];
	int sum = 0;
	double avg;

	for (int i = 0; i < SIZE; i++) {
		printf("성적 입력 : ");
		scanf("%d", &scores[i]);
	}
	for (int i = 0; i < SIZE; i++)
		sum += scores[i];

	avg = (double)sum / SIZE;

	printf("성적 평균 = %.2lf\n", avg);

	return 0;

}