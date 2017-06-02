#include <stdio.h>

// 이진 탐색 알고리즘 반복문 구현
// 찾는 숫자가 있으면 찾는 숫자의 인덱스 리턴 없으면 -1 리턴
int BSearch(int ar[], int len, int target) {
	int first = 0;
	int last = len - 1;
	int mid = 0;

	// first와 last가 같은 경우까지 반복하는 이유
	// while(first < last)이면 마지막 하나가 남았을때
	// 검사하지 않고 종료되기 때문이다.
	while (first <= last) {
	mid = (first + last) / 2;
	if (ar[mid] == target) {
	return mid;
	}
	else {
	if (ar[mid] > target)
	last = mid - 1;
	else
	first = mid + 1;
	}
	}
	return -1;
}

// 이진 탐색 알고리즘 재귀 구현
int BSearchRecur(int ar[], int first, int last, int target) {
	int mid = (first + last) / 2;
	if (first > last)
	return -1;
	else {
	if (ar[mid] == target)
	return mid;
	else {
	if (ar[mid] > target) {
	last = mid - 1;
	BSearchRecur(ar, first, last, target);
	}
	else {
	first = mid + 1;
	BSearchRecur(ar, first, last, target);
	}
	}
	}
}

int main(int arc, char** argv) {
	int arr[] = { 1, 2, 3, 7, 9, 12, 21, 23, 27 };
	int idx = 0, inputNum = 0;

	scanf_s("%d", &inputNum);

	idx = BSearch(arr, sizeof(arr) / sizeof(int), inputNum);
	if (idx == -1) {
	printf("Fail\n");
	}
	else {
	printf("Target Index : %d\n", idx);
	}

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, inputNum);
	if (idx == -1) {
	printf("Fail\n");
	}
	else {
	printf("Target Index : %d\n", idx);
	}
}
