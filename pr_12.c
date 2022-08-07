//배열과 문자열 연습 : 사용자로부터 이름과 학과를 입력 받은 후 배열에 저장한 후 출력하는 프로그램

#include<stdio.h>

int main(void) {
	char name[50];
	char dept[50];

	printf("이름 : ");
	scanf("%s", name);//&name아님!!!! 배열은 예외
	printf("학과 : ");
	scanf("%s", dept);
	printf("안녕하세요, %s학과 %s입니다.\n", dept, name);

	return 0;

}