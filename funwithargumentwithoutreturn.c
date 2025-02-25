#include <stdio.h>

int main(){
   int a,b;
   scanf("%d%d",&a,&b);
   sum(a,b);
   sum(a,b);
    return 0;
}
void sum(int  num1,int num2) {   
    int sum;
    sum=num1+num2;
    printf("result is :%d",sum);
}