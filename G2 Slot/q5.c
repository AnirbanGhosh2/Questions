#include <stdio.h>
#include <stdlib.h>

int x = 7;
float power(int x, int n){
    if(n==0){
        return 1;
    }

    return x*power(x, abs(n)-1);
}


int main(){
    int n;
    scanf("%d", &n);

    if(n>=0&&n<=5){
        printf("%f", power(x, n));
    }
    else if(n<5)
    {
        printf("%f", 1/power(x, n));
    }
    else{
        printf("Enter the value less than or equal to 5");
    }

    return 0;
}

