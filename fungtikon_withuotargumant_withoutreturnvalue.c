#include <stdio.h>

int main() {
sum();
printf("\n");
sum();
    return 0;
}

void sum() {
int a,b,sum;
printf("Enter any two value");
scanf("%d%d",&a,&b);
sum=a+b;
printf("%d",sum);


}