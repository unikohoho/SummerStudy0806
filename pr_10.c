//�迭 �ʱ�ȭ ���� 

#include<stdio.h>

int main(void) {
	int scores[] = { 31,63,62,87,14 };
	//�ʱ�ȭ �����Ƿ� �迭 ũ�� ���� ���� : �ڵ����� 5�� ����
	//�߰�ȣ �̿��ؼ� �迭�� ���� �����ϴ� ���� ����� �Բ� �ϴ� �ʱ�ȭ���� ����

	for (int i = 0; i < 5; i++)
		printf("scores[%d] = %d\n", i, scores[i]);

	return 0;


}