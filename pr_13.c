//�迭 ���� : �迭���� Ư���� ���� ã�� ���α׷�

#include<stdio.h>

void show(int arr[], int size);//�迭 arr �����ִ� �Լ�
int search(int arr[], int size, int key);//�迭 arr���� key ���� ã�� �Լ�

int search(int arr[], int size, int key) {
	for (int i = 0; i < size; i++) {
		if (key == arr[i])
			return i;
	}
	return -1;
}

void show(int arr[], int size) {
	printf("[ ");
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("]\n");
}
int main(void) {
	int key, index, size;
	int arr[] = { 50,10,20,40,15 };

	size = sizeof(arr) / sizeof(int);
	show(arr, size);

	while (1) {
		printf("Ž���� ���� �Է� : ");
		scanf("%d", &key);
		index = search(arr, size, key);

		if (index == -1)
			printf("�������� ����\n");
		else {
			printf("�߰�, %d�� �ε���\n", index);
			break;
		}
	}
	return 0;

}