#include <stdio.h>

int main() {
    int score = 0, choice;
    int total_questions = 10;
    int total_marks = total_questions * 2; // max posible marks

    printf("===== QUIZ PROGRAM =====\n");
    printf("Note: Each correct answer = 2 marks\n\n");

    // q1
    printf("Q1) Who is known as the Father of C language?\n");
    printf("1) James Gosling\n2) Dennis Ritchie\n3) Bjarne Stroustrup\n4) Guido van Rossum\n");
    scanf("%d", &choice);
    if(choice == 2) score += 2;

    // q2
    printf("\nQ2) Which is the largest planet in our solar system?\n");
    printf("1) Earth\n2) Mars\n3) Jupiter\n4) Saturn\n");
    scanf("%d", &choice);
    if(choice == 3) score += 2;

    // q3
    printf("\nQ3) Who wrote 'Discovery of India'?\n");
    printf("1) Mahatma Gandhi\n2) Jawaharlal Nehru\n3) Rabindranath Tagore\n4) B.R. Ambedkar\n");
    scanf("%d", &choice);
    if(choice == 2) score += 2;

    // q4
    printf("\nQ4) What is 15 * 3?\n");
    printf("1) 30\n2) 45\n3) 50\n4) 60\n");
    scanf("%d", &choice);
    if(choice == 2) score += 2;

    // q5
    printf("\nQ5) Who was the first President of India?\n");
    printf("1) Dr. Rajendra Prasad\n2) Dr. Radhakrishnan\n3) Jawaharlal Nehru\n4) Subhash Chandra Bose\n");
    scanf("%d", &choice);
    if(choice == 1) score += 2;

    // q6
    printf("\n6) Which of the following is not a programming language?\n");
    printf("1) Python\n2) Java\n3) HTML\n4) C++\n");
    scanf("%d", &choice);
    if(choice == 3) score += 2;

    // q7
    printf("\nQ7) Which is the national flower of India?\n");
    printf("1) Rose\n2) Lotus\n3) Lily\n4) Sunflower\n");
    scanf("%d", &choice);
    if(choice == 2) score += 2;

    // q8
    printf("\nQ8) What is the square root of 144?\n");
    printf("1) 10\n2) 11\n3) 12\n4) 13\n");
    scanf("%d", &choice);
    if(choice == 3) score += 2;

    // q9
    printf("\nQ9) Which continent is called the Dark Continent?\n");
    printf("1) Asia\n2) Africa\n3) Europe\n4) Australia\n");
    scanf("%d", &choice);
    if(choice == 2) score += 2;

    // q10
    printf("\nQ10) Who invented the light bulb?\n");
    printf("1) Thomas Edison\n2) Nikola Tesla\n3) Alexander Graham Bell\n4) Albert Einstein\n");
    scanf("%d", &choice);
    if(choice == 1) score += 2;

    // results
    printf("\n===== RESULT =====\n");
    printf("Your Score: %d / %d\n", score, total_marks);

    // percentage
    float percent = (score * 100.0) / total_marks;
    printf("Percentage: %.2f%%\n", percent);

    // grades
    if(score >= 18) {
        printf("Grade: A\nRemark: Excellent! Keep it up.\n");
    } else if(score >= 14) {
        printf("Grade: B\nRemark: Very Good.\n");
    } else if(score >= 10) {
        printf("Grade: C\nRemark: Average, you can do better.\n");
    } else if(score >= 6) {
        printf("Grade: D\nRemark: Needs Improvement.\n");
    } else {
        printf("Grade: F\nRemark: Poor Performance.\n");
    }

    return 0;
}
