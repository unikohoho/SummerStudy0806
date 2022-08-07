//입금,조회,출금,종료 기능을 포함한 ATM기 프로그램
//무한반복문 사용, 프로그램 종료 조건은 사용자가 -1을 입력했을때 종료

#include<stdio.h>

void deposit(int amount);//입금
void withdraw(int amount);//출금
void inquiry();//조회
int input_money();//입력

int balance;//잔액

int input_money() {
	int input;
	printf("금액 : ");
	scanf("%d", &input);

	return input;
}

void deposit(int amount) {
	
	balance += amount;
}
void withdraw(int amount) {
	
	if (amount > balance)
		printf("잔액 부족\n");
	else
		balance -= amount;
}
void inquiry() {
	printf("현재 잔액 : %d\n", balance);
}
int main(void) {
	
	while (1) {
		int choice;
		int money;

		printf("메뉴 선택 : 1) 조회 2) 출금 3) 입금 -1)종료 >>> ");
		scanf("%d", &choice);
		if (choice == 1)
			inquiry();
		else if (choice == 2) {
			money = input_money();
			withdraw(money);
		}
		else if (choice == 3) {
			money = input_money();
			deposit(money);
		}
		else if (choice == -1) {
			printf("프로그램이 종료됩니다.\n");
			break;
		}
		else
			printf("존재하지 않는 메뉴입니다.\n");


	}

}