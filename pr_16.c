//�迭���� Ư���� ���� ã�� �Լ�

#include<stdio.h>


void show(int arr[], int size);
int search(int arr[], int size, int key);
int cnt; // ���������̹Ƿ� �ʱ�ȭ ���ص� 0���� �ʱⰪ �Ҵ�

void show(int arr[], int size) {
	printf("[ ");
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("]\n");
}
int search(int arr[], int size, int key) {
	int find;
	for (int i = 0; i < size; i++) {
		if (key == arr[i])
			return i;
	}
	return -1;
	
}
int main(void) {
	int scores[] = { 100, 88, 92, 98, 99, 85,87 };

	int size = sizeof(scores) / sizeof(int);

	show(scores, size);

	int result;

	while (1) {
		int input = 0;
		printf("���� �Է� : ");
		scanf("%d", &input);

		result = search(scores, size, input);
		cnt++;
		if (result != -1)
			break;
		printf("Ž������\n");

	}
	printf("Ž�� %dȸ���� ���� ! : %d��° �л��� ����\n", cnt, result + 1);
	

}