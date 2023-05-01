// Get the three angles of a triangle as input.
// find the count of the type of the triangle.
// Continue the process for 5 times.

// If the sum of the three angles is greater than 180 then prompt for correct values. (the sum of all internal angles of a triangle is always equal to 180°). Keep the count of the wrong entries also.
// Acute Angled Triangle (all three angles less than 90°)
// Right-Angled Triangle (one angle that measures exactly 90°)
// Obtuse Angled Triangle (one angle that measures more than 90°)

// Sample i/p:
// 60
// 70
// 50
// 40
// 50
// 90
// 40
// 40
// 100
// 30
// 30
// 120
// 90
// 60
// 30
// Sample o/p:
// Acute Angled Triangle: 1
// Right Angled Triangle: 2
// Obtuse Angled Triangle: 2
// Wrong Entries: 0
 
//  Second Sample i/p:
// 60
// 70
// 50
// 40
// 50
// 90
// 40
// 40
// 100
// 30
// 30
// 120
// 90
// 90
// 30
// Wrong Entry try again
// 90
// 30
// 60
// Sample o/p:
// Wrong Entry try again
// Acute Angled Triangle: 1
// Right Angled Triangle: 2
// Obtuse Angled Triangle: 2
// Wrong Entries: 1



#include <stdio.h>

int main(){
    int i, j, angles[3], sum, wrong_entries = 0, acute=0, right=0, obtuse=0, found;

    for(i=0; i<5; i++){
        sum = 0;
        found = 0;
        for(j=0; j<3; j++){
            scanf("%d", &angles[j]);
            sum += angles[j];
        }
        
        if(sum>180){
            --i;
            ++wrong_entries;
            printf("Wrong Entry try again\n");
            continue;
        }

        for(j=0; j<3; j++){
            if(angles[j]>90){
                ++obtuse;
                found = 1;
                break;
            }
        }
        if(!found){
            for(j=0; j<3; j++){
                if(angles[j]==90){
                    ++right;
                    found = 1;
                    break;
                }
            }
        }
        if(!found){
            ++acute;
        }
    }

    printf("Acute Angled Triangle: %d\n", acute);
    printf("Right Angled Triangle: %d\n", right);
    printf("Obtuse Angled Triangle: %d\n", obtuse);
    printf("Wrong Entries: %d\n", wrong_entries);

    return 0;
}
