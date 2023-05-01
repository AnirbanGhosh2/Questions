#include <stdio.h>

int main(){
    int chn[7], del[7], hav[7], gtk[7], i;

    for(i=0; i<7; i++){
        scanf("%d", &chn[i]);
    }

    for(i=0; i<7; i++){
        del[i] = chn[i] - 8;
        hav[i] = chn[i] + 5;
        gtk[i] = hav[i] - del[i];
        printf("%d\n", gtk[i]);
    }

    return 0;
}
