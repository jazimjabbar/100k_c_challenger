#include <stdio.h>

int main() {
    int limit,i,values[100],SearchKey,flag=0,j;
    printf("Enter limit:");
    scanf("%d",&limit);

    printf("Enter values ");
    for(i=0;i<limit;i++){
        scanf("%d",&values[i]); 
    }
    printf("Please Enter Search Key");
    scanf("%d",&SearchKey);
    for(j=0;j<limit;j++){
        if(SearchKey==values[j]){
            flag=1;  
            break;
        }
    }

    if(flag==1){
        printf("Value are founded position %d", j+1);
    }else{
        printf("Value are not founded");
    }

    return 0;
}
