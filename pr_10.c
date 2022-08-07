//배열 초기화 연습 

#include<stdio.h>

int main(void) {
	int scores[] = { 31,63,62,87,14 };
	//초기화 했으므로 배열 크기 생략 가능 : 자동으로 5로 잡힘
	//중괄호 이용해서 배열에 값을 저장하는 것은 선언과 함께 하는 초기화에만 가능

	for (int i = 0; i < 5; i++)
		printf("scores[%d] = %d\n", i, scores[i]);

	return 0;


}