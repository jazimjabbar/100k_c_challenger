#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    printf("1 for Porotta\n2 for Biriyani\n3 for Fried Rice\n4 for Mandhi\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("You have selected Porotta");
            break;
        case 2:
            printf("You have selected Biriyani");
            break;
        case 3:
            printf("You have selected Fried Rice");
            break;
        case 4:
            printf("You have selected Mandhi");
            break;
        default:
            printf("YOU ARE FOOLISH");
    }
    return 0;
}
