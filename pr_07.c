//�Լ����� : ������ atm�� �����

#include<stdio.h>

void deposit(int amount);//�Ա� ���
void inquiry();//��ȸ ���

int balance;//���� ���� : �ʱ�ȭ ���ص� �⺻�� 0�� ������ ����

void deposit(int amount) {
	balance += amount;
}
void inquiry() {
	printf("���� �ܾ� : %d\n",balance);
}
int main(void) {
	int money;

	inquiry();
	printf("�Ա� �� �ݾ� : ");
	scanf("%d", &money);
	deposit(money);
	inquiry();

	return 0;

}

