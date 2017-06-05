#include<stdio.h>
int main()
{
  int arr[10] = { 50, 20, 70, 54, 98, 63, 82, 69, 12, 51 };//데이터 설정
  int i, j , tmp; //변수 설정

  printf("정렬 전 : ");
  for(i = 0; i < 10; i++){
    printf("%d ", arr[i]);
  }
    printf("\n");
    //for 문을 이용한 정렬 전 데이터 출력
  for(i = 0; i < 9; i++)//버블 정렬 알고리즘
  {
    for (j = 9; j > i; j--)
    //자기 자신과 비교를 하지 않기 때문에 n-1을 해준다(n=데이터 개수)
    {
       if (arr[j - 1] > arr[j])//인접한 두 항 비교
      {
      tmp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = tmp;
      //인접한 데이터 값을 비교하여 큰 값을 오른쪽으로 이동함(스왑을 통하여)
    }
  }
  }
  printf("정렬 후 : ");
  for(i = 0; i < 10; i++)
    {
      printf("%d ", arr[i]);
    }
    //for 문을 이용한 정렬 후 데이터 출력
 return 0;//프로그램 정상종료
 }
