#include <stdio.h>

int main() {
    int values[100], limit, i, sum = 0; 
    printf("Enter the limit of your values: ");
    scanf("%d", &limit);
    
    printf("Enter your values:\n");
    for(i = 0; i < limit; i++) {
        scanf("%d", &values[i]);
    }

    for(i = 0; i < limit; i++) {
        sum += values[i]; 
    }
    printf("The sum is: %d\n", sum);
    return 0;
}
