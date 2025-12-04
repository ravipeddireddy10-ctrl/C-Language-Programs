#include <stdio.h>

int main() {
    int num;
    char choice;

    printf("Enter day number (1-7): ");
    scanf("%d", &num);

    switch (num) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default:
            printf("Invalid day number!\n");
            printf("Do you want to continue to months? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y') {
                int month;
                printf("Enter month number (1-12): ");
                scanf("%d", &month);

                switch (month) {
                    case 1: printf("January\n"); break;
                    case 2: printf("February\n"); break;
                    case 3: printf("March\n"); break;
                    case 4: printf("April\n"); break;
                    case 5: printf("May\n"); break;
                    case 6: printf("June\n"); break;
                    case 7: printf("July\n"); break;
                    case 8: printf("August\n"); break;
                    case 9: printf("September\n"); break;
                    case 10: printf("October\n"); break;
                    case 11: printf("November\n"); break;
                    case 12: printf("December\n"); break;
                    default:
                        printf("Invalid month number!\n");
                        printf("Do you want to continue to year? (y/n): ");
                        scanf(" %c", &choice);

                        if (choice == 'y' || choice == 'Y') {
                            int year;
                            printf("Enter a year: ");
                            scanf("%d", &year);
                            printf("You entered year: %d\n", year);
                        } else {
                            printf("Program ended.\n");
                        }
                        return 0;
                }
            } else {
                printf("Program ended.\n");
                return 0;
            }
    }

    return 0;
}
