//함수연습 : 간단한 atm기 만들기

#include<stdio.h>

void deposit(int amount);//입금 기능
void inquiry();//조회 기능

int balance;//전역 변수 : 초기화 안해도 기본값 0을 값으로 가짐

void deposit(int amount) {
	balance += amount;
}
void inquiry() {
	printf("현재 잔액 : %d\n",balance);
}
int main(void) {
	int money;

	inquiry();
	printf("입금 할 금액 : ");
	scanf("%d", &money);
	deposit(money);
	inquiry();

	return 0;

}

