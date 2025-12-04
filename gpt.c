#include <stdio.h>

void writeLetter();
void letterMenu();
void leaveLetter();
void informalLetter();
void formalLetter();
void showTips();
void showMotivation();
void showExitMessage();

int main() {
    int choice;

    while (1) {
        printf("\n=====================================\n");
        printf("         MULTI HELPER TOOL            \n");
        printf("=====================================\n");
        printf("1. Write a Letter\n");
        printf("2. Study Tips\n");
        printf("3. Motivation Quote\n");
        printf("4. Exit\n");
        printf("-------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                writeLetter();
                break;
            case 2:
                showTips();
                break;
            case 3:
                showMotivation();
                break;
            case 4:
                showExitMessage();
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

void writeLetter() {
    int letterChoice;
    while (1) {
        printf("\n---------- Letter Types Menu ----------\n");
        printf("1. Leave Letter\n");
        printf("2. Informal Letter\n");
        printf("3. Formal Letter\n");
        printf("4. Go Back\n");
        printf("--------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &letterChoice);

        switch (letterChoice) {
            case 1:
                leaveLetter();
                break;
            case 2:
                informalLetter();
                break;
            case 3:
                formalLetter();
                break;
            case 4:
                return;
            default:
                printf("Invalid option, please try again.\n");
        }
    }
}

void leaveLetter() {
    printf("\n--------------------------------------\n");
    printf("          LEAVE LETTER                 \n");
    printf("--------------------------------------\n");
    printf("To,\nThe Principal,\nABC College,\nHyderabad.\n\n");
    printf("Subject: Request for leave.\n\n");
    printf("Respected Sir/Madam,\n");
    printf("I am unable to attend college from 20th Oct to 22nd Oct due to personal reasons.\n");
    printf("Kindly grant me leave for the mentioned days.\n\n");
    printf("Thanking you,\nYours obediently,\nShaik Zaid\nClass: CSE - B\n");
    printf("--------------------------------------\n");
}

void informalLetter() {
    printf("\n--------------------------------------\n");
    printf("          INFORMAL LETTER              \n");
    printf("--------------------------------------\n");
    printf("Dear Friend,\n");
    printf("Hey! It’s been a long time since we met. How have you been?\n");
    printf("I really miss our old school days and all the fun we had together.\n");
    printf("Hope we can plan a meetup soon!\n\n");
    printf("Yours truly,\nZaid\n");
    printf("--------------------------------------\n");
}

void formalLetter() {
    printf("\n--------------------------------------\n");
    printf("          FORMAL LETTER                \n");
    printf("--------------------------------------\n");
    printf("To,\nThe Manager,\nUnion Bank of India,\nHyderabad.\n\n");
    printf("Subject: Request to change single account to joint account.\n\n");
    printf("Sir/Madam,\n");
    printf("I request you to kindly convert my single account into a joint account with my mother for fee reimbursement purposes.\n");
    printf("Kindly do the needful.\n\n");
    printf("Thanking you,\nYours sincerely,\nShaik Zaid\nAccount No: XXXX3971\n");
    printf("--------------------------------------\n");
}

void showTips() {
    printf("\n--------------------------------------\n");
    printf("           STUDY TIPS                  \n");
    printf("--------------------------------------\n");
    printf("1. Make a daily routine.\n");
    printf("2. Study in short focused sessions.\n");
    printf("3. Revise every weekend.\n");
    printf("4. Don’t just read – write and practice!\n");
    printf("5. Take short breaks and sleep well.\n");
    printf("--------------------------------------\n");
}

void showMotivation() {
    printf("\n--------------------------------------\n");
    printf("           MOTIVATION                  \n");
    printf("--------------------------------------\n");
    printf("“Success is not final, failure is not fatal:\n");
    printf("It is the courage to continue that counts.” – Winston Churchill\n");
    printf("--------------------------------------\n");
}

void showExitMessage() {
    printf("\n--------------------------------------\n");
    printf("Thank you for using Multi Helper Tool\n");
    printf("Keep learning, keep shining\n");
    printf("--------------------------------------\n");
}
