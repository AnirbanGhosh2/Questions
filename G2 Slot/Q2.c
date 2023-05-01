#include <stdio.h>
#include <math.h>

int SumDigits(int *x, int n){
    int a = 0, i;

    for (i = 0; i < n; i++){
        a += (*x / (int)(pow(10, i)+1e-9)) % 10;
    }

    *x = a;

    return a;
}

int main(){

    int sum = 0, temp, n, i, x = 0;

    for (i = 1000; i < 9999; i++){
        if (i % 2 == 0){
            x += i;
        }
    }


    while (x / 10 != 0){
        temp = x;

        for (n = 0; temp != 0; n++){
            temp /= 10;
        }

        SumDigits(&x, n);
    }

    printf("%d\n", x);

    if (x % 2 == 0){
        printf("Even Found");
    }
    else{
        printf("Odd Found");
    }

    return 0;
}

