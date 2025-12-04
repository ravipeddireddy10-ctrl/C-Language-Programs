//#include <stdio.h>
//#include <string.h>
//
//char highestFreq(char str[]){
//	int freq[256] = {0};
//	int max = 0;
//	char maxChar;
//	
//	for(int i=1;str[i] != '\0';i++){
//		if(str[i] != ' ' && str[i] != '\n'){
//			freq[(unsigned char)str[i]]++;
//		}
//		
//	}
//	
//	for(int i=0;i<256;i++){
//			if(freq[i] > max){
//				max = freq[i];
//				maxChar = i;
//			}
//		}
//		return maxChar;
//}
//
//int main()
//{
//	char str[100];
//	printf("Enter a string : ");
//	fgets(str,sizeof(str),stdin);
//	
//	char result = highestFreq(str);
//	printf("Character with highest frequency : %c\n",result);
//	return 0;
//}


//string after removing spaces
//#include <stdio.h>
// void removeSpa(char str[]){
// 	int i,j = 0;
// 	
// 	for(int i=0;str[i] != '\0';i++){
// 		if(str[i] != ' ')
// 			str[j++] = str[i];
//	 }
//	 str[j] = '\0';
// } 
// 
// int main()
// {
// 	char str[100];
// 	
// 	printf("Enter a string : ");
// 	fgets(str,sizeof(str),stdin);
// 	
// 	removeSpa(str);
// 	
// 	printf("String after removing spaces : %s",str);
// 	return 0;
// }

//reverse a whole string
#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

//Count vowels in a string using a function
#include <stdio.h>

int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int vowels = countVowels(str);
    printf("Number of vowels: %d\n", vowels);
    return 0;
}

//Convert lowercase letters to uppercase using a function
#include <stdio.h>

void toUpperCase(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toUpperCase(str);
    printf("Uppercase string: %s", str);
    return 0;
}

//no of words in a string
#include <stdio.h>

int countWords(char str[]) {
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && str[i] != '\n' &&
          (i == 0 || str[i-1] == ' ' || str[i-1] == '\n')) {
            count++;
        }
    }

    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int words = countWords(str);
    printf("Number of words: %d\n", words);
    return 0;
}
