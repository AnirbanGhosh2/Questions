#include <stdio.h>

int main(){
    int n = 5, i, sum;
    int origMarks[n], newMarks[n], birthMonth[n];
    float origAvg, newAvg;

    printf("Enter maths marks and birth month of all 25 students:\n");
    for(i=0; i<n; i++){
        scanf("%d %d", &origMarks[i], &birthMonth[i]);
    }

    sum = 0;
    for(i=0; i<n; i++){
        sum += origMarks[i];
    }
    origAvg = (float)sum/n;

    printf("Class average for original marks is: %f\n", origAvg);

    for(i=0; i<n; i++){
        newMarks[i] = origMarks[i] + birthMonth[i];
    }

    sum = 0;
    for(i=0; i<n; i++){
        sum += newMarks[i];
    }
    newAvg = (float)sum/n;

    printf("Class average for revised marks is: %f\n", newAvg);

    if(newAvg - origAvg >= 5){
        printf("Can implement - Significant increase in class average");
    }
    else{
        printf("Need not implement - No significant increase in class average");
    }

    return 0;
}
