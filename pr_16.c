//배열에서 특정한 값을 찾는 함수

#include<stdio.h>


void show(int arr[], int size);
int search(int arr[], int size, int key);
int cnt; // 전역변수이므로 초기화 안해도 0으로 초기값 할당

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
		printf("점수 입력 : ");
		scanf("%d", &input);

		result = search(scores, size, input);
		cnt++;
		if (result != -1)
			break;
		printf("탐색실패\n");

	}
	printf("탐색 %d회만의 성공 ! : %d번째 학생의 점수\n", cnt, result + 1);
	

}