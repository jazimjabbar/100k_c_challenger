#include <stdio.h>

int main() {
    int i,a[100],limit;
    printf("Enter array limt");
    scanf("%d",&limit);
    printf("Enter a values");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("Entered values are:");
    for(i=0;i<limit;i++){
        printf(" %d",a[i]);
    }
    return 0;
}
