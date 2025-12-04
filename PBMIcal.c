#include <stdio.h>

float numConversion(float value,int choice);
float bmiCal(float weight,float height);
void cato(float bmi);

int main()
{
	printf("===== BMI CALCULATOR =====\n");
	float weight,height,bmi;
	int choice;
	printf("Enter weight in kg: ");
	scanf("%f",&weight);
	
	printf("\nEnter your choice(1-4): \n");
	printf("1.Meters\n2.Centimeters\n3.Inches\n4.Feet\n");
	scanf("%d",&choice);
	
	printf("Enter your height: ");
	scanf("%f",&height);
	
	height = numConversion(height,choice);
	
	if(height <=0 || weight <=0) {
		printf("\nError: Height and weight must be positive values.\n");
        return 1;
    }
        
    bmi = bmiCal(weight,height);
    printf("\nYour BMI is: %.2f\n",bmi);
    cato(bmi);
	
	return 0;
}

float numConversion(float value,int choice){
	switch (choice){
		case 1: return value;
		case 2: return value/100.0;
		case 3: return value*0.0254;
		case 4: return value*0.3048;
		default: printf("\nInvalid choice! Assuming meters as default\n"); return value;
	}
}

float bmiCal(float weight,float height){
	return weight/(height*height);
}

void cato(float bmi){
	printf("Category: ");
    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi >= 18.5 && bmi < 24.9)
        printf("Normal Weight\n");
    else if (bmi >= 25 && bmi < 29.9)
        printf("Overweight\n");
    else
        printf("Obese\n");
}