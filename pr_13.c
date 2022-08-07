//배열 연습 : 배열에서 특정한 값을 찾는 프로그램

#include<stdio.h>

void show(int arr[], int size);//배열 arr 보여주는 함수
int search(int arr[], int size, int key);//배열 arr에서 key 값을 찾는 함수

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
		printf("탐색할 값을 입력 : ");
		scanf("%d", &key);
		index = search(arr, size, key);

		if (index == -1)
			printf("존재하지 않음\n");
		else {
			printf("발견, %d번 인덱스\n", index);
			break;
		}
	}
	return 0;

}