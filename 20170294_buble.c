#include <stdio.h>

#define LEN 5 //배열 크기 지정
int main() {
        int arr[LEN] = { 6,4,7,9,1 };
        int i, j, tmp;

        for (i = 0; i<LEN-1; i++) { //바깥쪽 for 문은 배열의 최대 길이보다 1보다 작게 돌아도 된다. LEN 번쨰 반복에서는 이미 모두 정렬된 상태이기 떄문이다.
                for (j = 0; j<LEN -1; j++) {//j 와 j+1 을 비교하므로 LEN-1 만큼만 반복해주면 된다.
                        if (arr[j]>arr[j + 1]){//처음부터 인접한 두 수를 비교한다. 큰 수를 오른쪽으로 가도록 교환한다.
                                tmp = arr[j]; // 임시변수를 만들어서 교환해준다.
                                arr[j] = arr[j + 1];
                                arr[j + 1] = tmp;
                        }
                }
        }

        for (i = 0; i<5; i++) {
                printf("%d ", arr[i]);
        }
        return 0;
}