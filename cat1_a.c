// Write a C program that accepts a string as input, print the length of the string and display the word fequency, then use pointers to find the first repeated and non-repeated character in the string, and print the output:

// POSSIBLE TEST CASES:

// INPUT:

// SUJITHRA

// OUTPUT:

// Length of the string is: 8
// Word frequency is: 8
// No repeated characters found in the string.
// First non-repeated character is: S

// #2 INPUT:

// ASSDFG

// OUTPUT:

// Length of the string is: 6
// Word frequency is: 5
// First repeated character is: S
// First non-repeated character is: A

 

// #3 INPUT:

// RUDRESH

// OUTPUT:

// Length of the string is: 7
// Word frequency is: 6
// First repeated character is: R
// First non-repeated character is: U


#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void findFrequency(char str[]) {
    int n = strlen(str);
    int fre[n], word_fre = n;
    int i=0;
    for(i=0; i<n; i++){
        fre[i] = 1;
    }
    int j=0;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(str[i] == str[j] && fre[i]!=0){
                fre[i] += 1;
                fre[j] = 0;
                word_fre -= 1;
            }
        }
    }
    printf("Word frequency is: %d\n", word_fre);
}

void findRepeated(char str[]) {
    int len = strlen(str);
    int charCount[256] = {0};
    char *nonRepChar = NULL;
    char *repChar = NULL;

    for (int i = 0; i < len; i++) {
        charCount[str[i]]++;
    }

    for (int i = 0; i < len; i++) {
        if (charCount[str[i]] == 1) {
            nonRepChar = &str[i];
            break;
        }
    }

    for (int i = 0; i < len; i++) {
        if (charCount[str[i]] > 1) {
            repChar = &str[i];
            break;
        }
    }

    if (nonRepChar == NULL) {
        printf("No non-repeated characters found in the string.\n");
    } else {
        printf("First non-repeated character is: %c\n", *nonRepChar);
    }

    if (repChar == NULL) {
        printf("No repeated characters found in the string.\n");
    } else {
        printf("First repeated character is: %c\n", *repChar);
    }
}

int main() {
    char str[MAX_LEN];

    printf("Enter a string: ");
    fgets(str, MAX_LEN, stdin);

    int len = strlen(str);

    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("Length of the string is: %d\n", strlen(str));
    findFrequency(str);
    findRepeated(str);

    return 0;
}
