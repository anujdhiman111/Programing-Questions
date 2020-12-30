#include <stdio.h>
int
subarray(int arr[], int n, int k)
{
  int result = 0, i, sum = 0,start = 0;
  for (i = 0; i < k; i++)
    {
      result = result + arr[i];
    }
    sum = result;
      for(i = k;i<n;i++){
            result = result +arr[i]-arr[start];
            start++;
            if(result>sum){
            sum = result;
            }
        }
      
   printf("%d",sum);
}

int
main ()
{
  int arr[] = {2,8,2,7,4,2};
  int k = 3;
  int n = sizeof(arr) / sizeof(int);
  subarray(arr, n, k);
  return 0;
}
