#include <stdio.h>
#include <math.h>

int fact(int);
double value(int,int);

int main() {
    int n,x,i;
    float s = 0.000;
    int p =1;
    scanf("%d%d",&x,&n);
    for(i = 1,p = 1;i<=n;i++,p = p+2){
        if(i%2 == 0){
            s = (s+(-1)*(value(x,p)/fact(p)));
        }
        else{
            s = s+(value(x,p)/fact(p));
        }
    }
    printf("%f",s);
    return 0; 
}
int fact(int m){
    int f =1,i;
    for(i =m;i>=1;i--){
        f= f*i;
    }
    return(f);
}
    double value(int x,int m){
        double y;
        y= pow(x,m);     
        return(y);
    }
