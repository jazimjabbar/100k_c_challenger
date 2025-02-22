#include <stdio.h>

int main() {
    int temp,i,j,n=5,a[100];
    printf("Enter the 5 values");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
        for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("you have entered numbers order is:");
    for(i=0;i<5;i++){
        printf("%d  ",a[i]);
    }
    return 0;
}
