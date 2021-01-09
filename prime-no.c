#include <stdio.h>

int main(){
    int n,i,j,count,count1 = 0;
    printf("Enter a no.");
    scanf("%d",&n);
    for(i = 2; i<=n; i++){
        count = 0;
        for(j = 2;j<=i/2;j++){
            if(i%j == 0){
                count++;
                break;
            }
        }
        if(count == 0){
            count1++;
            if(count1%3 !=0){
            printf("Prime no. are %d\n",i);
            }
        }
    }
    return 0;
}