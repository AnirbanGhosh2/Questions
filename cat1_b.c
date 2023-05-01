
// WAP which takes number of employees, then details of each employee - name, age, position, date of joining. Then sort the employees list in order of name and in order of date of joining.

// Example

// INPUT:
// 3

// Jain
// 51
// HR
// 13/02/2008

// Ami
// 45
// Technician
// 05/12/2005

// Balu
// 37
// Analyst
// 26/02/2012

#include <stdio.h>
#include <string.h>

struct date{
    int day;
    int month;
    int year;
};

struct emp{
    char name[50];
    int age;
    char pos[50];
    struct date dob;
};

int main() {
    int n, i, j;
    
    scanf("%d", &n);
    
    struct emp emps[n], temp;
    
    // Taking all employees data input
    for(i=0; i<n; i++){
        scanf("%s", emps[i].name);
        scanf("%d", &emps[i].age);
        scanf("%s", emps[i].pos);
        scanf("%d/%d/%d", &emps[i].dob.day, &emps[i].dob.month, &emps[i].dob.year);
    }
    
    // Sorting in order of name
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(strcmp(emps[j].name, emps[j+1].name) > 0){
                temp = emps[j];
                emps[j] = emps[j+1];
                emps[j+1] = temp;
            }
        }
    }
    
    printf("Employee list sorted in order of names is:\n");
    for(i=0; i<n; i++){
        printf("%s\n", emps[i].name);
        printf("%d\n", emps[i].age);
        printf("%s\n", emps[i].pos);
        printf("%d/%d/%d\n", emps[i].dob.day, emps[i].dob.month, emps[i].dob.year);
    }
    
    // Sorting in order of date of joining
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if((emps[j].dob.year > emps[j+1].dob.year) || (emps[j].dob.year == emps[j+1].dob.year && emps[j].dob.month > emps[j+1].dob.month) || (emps[j].dob.year == emps[j+1].dob.year && emps[j].dob.month == emps[j+1].dob.month && emps[j].dob.day > emps[j+1].dob.day)){
                temp = emps[j];
                emps[j] = emps[j+1];
                emps[j+1] = temp;
            }
        }
    }
    
    printf("Employee list sorted in order of date of joining is:\n");
    for(i=0; i<n; i++){
        printf("%s\n", emps[i].name);
        printf("%d\n", emps[i].age);
        printf("%s\n", emps[i].pos);
        printf("%d/%d/%d\n", emps[i].dob.day, emps[i].dob.month, emps[i].dob.year);
    }

    return 0;
}
