#include <stdio.h>
#include <string.h>

int myFunc(char s[]){
    int second_word = 0, i, len;
    s[0] -= 32;

    for (i = 0; s[i]!='\0'; i++){
        if (s[i]==' '){
            second_word = 1;
            continue;
        }
        if (second_word){
            s[i] -= 32;  
        }
    }

    len = strlen(s);

    printf("%s\n", s);
    if (len<20){
        return len;
    }
    else{
        return sizeof(*s)*(len+1);  // size of string is one more than its length as it includes null character
    }
}

int main(){
    char s[100];
    gets(s);
    myFunc(s);

    return 0;
}

