#include <stdio.h>

int main() {
    int a,b;
    printf("Enter a two number");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("greatest number is %d",a);
    }else{
        printf("greatest number is %d",b);
    }
    return 0;
}
