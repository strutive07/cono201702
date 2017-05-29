#include <stdio.h>
int main()
{
      int arr[5]={5, 3, 8, 9, 2}; // 정렬되기 전의 5개의 값을 지정

      int i, j, tmp;

      printf("********버블 정렬 전********\n");
      for(i=0; i<5; i++)
      {
        printf("%d ", arr[i]);
      }

      printf("\n"); // 버블 정렬 전의 값

      printf("********버블 정렬 과정********\n");
      for(i=0; i<4; i++)
      {
        for(j=0; j<4; j++)
        {
          if(arr[j]>arr[j+1]) // arr[j] > arr[j+1] 일 때 다음 조건을 수행.
          {
            tmp=arr[j]; // tmp 값에 미리 저장
            arr[j]=arr[j+1]; // arr[j]를 arr[j+1]로 바꾸고
            arr[j+1]=tmp; // arr[j+1]을 arr[j]의 값으로 바꾼다.

            for(int k=0; k<5; k++)
                printf("%d ", arr[k]);
            printf("\n"); // 버블 정렬되는 과정을 출력.
          }
        }
      }

      printf("********버블정렬 후********\n");
      for(i=0; i<5; i++)
        printf("%d ", arr[i]);
      printf("\n");
      // 버블 정렬 후의 값

      return 0;
}
