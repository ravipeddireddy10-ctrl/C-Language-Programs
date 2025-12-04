#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char fname[30], lname[30];
    char username[50];
    int randomNum;

    // For random number generation
    srand(time(0));

    printf("Enter your First Name: ");
    scanf("%s", fname);

    printf("Enter your Last Name: ");
    scanf("%s", lname);

    // Generate random number between 100 and 999
    randomNum = (rand() % 900);

    // Create username: first 3 letters of fname + last 2 letters of lname + random number
    // Example: Ahmed + Khan ? Ahman123
    strncpy(username, fname, 3);                // Copy first 3 letters of first name
    username[3] = '\0';                         // Null terminate
    strncat(username, lname + strlen(lname) - 2, 2);  // Add last 2 letters of last name

    char numStr[10];
    sprintf(numStr, "%d", randomNum);           // Convert number to string
    strcat(username, numStr);                   // Append to username

    printf("\nGenerated Username: %s\n", username);

    // OPTIONAL: Save to file
    FILE *fp = fopen("usernames.txt", "a");
    if (fp != NULL) {
        fprintf(fp, "%s\n", username);
        fclose(fp);
        printf("Username saved to 'usernames.txt'.\n");
    } else {
        printf("Error saving username to file.\n");
    }

    return 0;
}
