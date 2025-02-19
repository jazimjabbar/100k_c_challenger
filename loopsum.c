#include <stdio.h>

int main() {
    int i,number,sum=0;
    printf("Enter a number");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        sum=sum+i;
    }
    printf("Your digit continus sum is:%d",sum);
    return 0;
}
