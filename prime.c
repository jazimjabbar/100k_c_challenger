#include <stdio.h>

int main() {
int n,i,flag=0;
printf("Enter a value");
scanf("%d",&n);
for(i=2;i<n/2;i++){
    if(n%i==0){
        flag=1;
        break;
    }
}
if(flag==0){
    printf("that is prime number");
}else{
    printf("this is not a prime number");
}
    return 0;
}
