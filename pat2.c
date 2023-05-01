// Write a c program to find the number of  words,vowels, consonants, space and special characters in a string

// INPUT:

// *Nothing is impossible in this world.

// OUTPUT:

// Words = 6
// Vowels = 10
// Consonants = 20
// Space = 5
// Special Characters = 2

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i, vowels, cons, space, words, special;
    vowels = cons = space = words = special = 0;
    char s[100];
    fgets(s, 100, stdin);

    for(i=0; i < strlen(s)-1; i++){

        if(isalpha(s[i])){
            if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                vowels++;
            }
            else{
                cons++;
            }
        }
        else if(isspace(s[i])){
            space++;
        }
        else{
            special++;
        }
    }
    words = space + 1;

    printf("Words = %d\n", words);
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", cons);
    printf("Space = %d\n", space);
    printf("Special Characters = %d", special);

    return 0;
}
