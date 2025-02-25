#include <stdio.h>

int main() {
    int   a[3][3],j,i;
    printf("Enter any 9 number for a Example");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("you have Entered");
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
    return 0;
}
