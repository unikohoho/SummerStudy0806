//�Ա�,��ȸ,���,���� ����� ������ ATM�� ���α׷�
//���ѹݺ��� ���, ���α׷� ���� ������ ����ڰ� -1�� �Է������� ����

#include<stdio.h>

void deposit(int amount);//�Ա�
void withdraw(int amount);//���
void inquiry();//��ȸ
int input_money();//�Է�

int balance;//�ܾ�

int input_money() {
	int input;
	printf("�ݾ� : ");
	scanf("%d", &input);

	return input;
}

void deposit(int amount) {
	
	balance += amount;
}
void withdraw(int amount) {
	
	if (amount > balance)
		printf("�ܾ� ����\n");
	else
		balance -= amount;
}
void inquiry() {
	printf("���� �ܾ� : %d\n", balance);
}
int main(void) {
	
	while (1) {
		int choice;
		int money;

		printf("�޴� ���� : 1) ��ȸ 2) ��� 3) �Ա� -1)���� >>> ");
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
			printf("���α׷��� ����˴ϴ�.\n");
			break;
		}
		else
			printf("�������� �ʴ� �޴��Դϴ�.\n");


	}

}