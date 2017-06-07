#include <stdio.h>

#define LEN 5 //배열 크기 지정
int main() {
        int tmp;
        int arr[LEN] = { 6,4,7,9,1 };
        for (int i = 1; i < LEN; i++) {
                tmp = arr[i]; //임시 변수에 비교할 대상 저장
                for(int j=i;j>0;j--){//비교할 대상 부터 내려가면서 비교할것.
                        if(tmp < arr[j-1]){ //임시 변수에 저장한 값이 이미 정렬된 앞의 값들과 비교했일떄 더 작으면
                                arr[j] = arr[j-1]; // 비교한 값을 한칸 옆으로 복사한다.
                                if(j==1)
                                        arr[0] = tmp; //여기서 비교할 대상이 0 번까지 도달하였고, 그 값이 0 번 값보다 작다면 이제 임시
 변수를 삽입해주어야한다. 따라서 0번에 임시변수를 삽입한다.
                        }else{
                                arr[j] = tmp; //임시 변수가 더 클때는 그 자리에 임시변수를 삽입하고 반복문을 종료한다.
                                break;
                        }
                }
        }

        for(int i=0;i<5;i++){
                printf("%d ", arr[i]);
        }
        return 0;
}
