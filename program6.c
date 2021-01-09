#include <stdio.h>

int main()
 {
    int limit,n,r,i,temp;
    long long fact,sum;

    printf("Enter the limit");
    scanf("%d",&limit);

    for(n = 1;n<=limit;n++){
        sum = 0;

        temp = n;

        while (temp>0)
        {
            fact = 1;
            r = temp%10;

            for(i = 1;i<=r;i++){
                fact = fact*i;
            }

            sum = sum + fact;

            temp = temp/10;
        }

        if(n == sum){
            printf("strong no. is %d\n",n);
        }
    }

    return 0;
}