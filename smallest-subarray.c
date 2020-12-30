#include <stdio.h>

int smallestsubarray(int arr[],int n,int s){
    int i,j,sum,min_length = n,length;
    for(i = 0;i < n;i++){
        sum = 0;
        for(j = i;j < n;j++){
            sum = sum + arr[j];
            
            if(sum >= s){
                length = (j-i)+1;  
                if(min_length>length){
                 min_length = length;
                 break;
                }
                
            }
            
        }
    }
    printf("%d",(sum>=s)?min_length:0);
}

int main(){
    int arr[] = {4,2,3};
    int s = 8;
    int n = sizeof(arr)/sizeof(int);
    smallestsubarray(arr,n,s);
    return 0;
}
