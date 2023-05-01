#include <stdio.h>

int main(){
    int max_len = 50, i;
    char s[max_len];
    gets(s);
    int count[5] = {0, 0, 0, 0, 0}; 

    for(i=0; s[i]!='\0'; i++){
        if (s[i]>='A' && s[i]<='Z'){
            printf("Uppercase alphabet\n");
            count[0] += 1;
        }
        else if (s[i]>='a' && s[i]<='z'){
            printf("Lowercase alphabet\n");
            count[1] += 1;
        }
        else if (s[i]>='0' && s[i]<='9'){
            printf("Lowercase alphabet\n");
            count[2] += 1;
        }
        else if (s[i]==' '){
            printf("Whitespace\n");
            count[3] += 1;
        }
        else {
            printf("Special symbol\n");
            count[4] += 1;
        }
    }

    printf("Counts of uppercase alphabets, lowercase alphabets, digits, whitespaces & special symbols respectively are:\n");
    for (i=0; i<5; i++){
        printf("%d\n", count[i]);
    }
    
    return 0;
}
