#include <stdio.h>
#include <string.h>

int main(){
    int car_price, extra_fitting_price, valid = 1;
    char type[50];
    float total, discount, gst, net, disc_per;

    printf("Enter type of car:");
    scanf("%s", type);

    if (strcmp(type, "Hatchback")==0){
        disc_per = 3;
    }
    else if (strcmp(type, "Sedan")==0){
        disc_per = 5;
    }
    else if (strcmp(type, "SUV")==0){
        disc_per = 10;
    }
    else if (strcmp(type, "MUV")==0){
        disc_per = 15;
    }
    else{
        printf("Invalid type");
        valid = 0;
    }

    printf("Enter price of car:");
    scanf("%d", &car_price);
    printf("Enter fitting price:");
    scanf("%d", &extra_fitting_price);
    total = car_price + extra_fitting_price;
    discount = total*disc_per*0.01;
    gst = (total-discount)*0.12;
    net = total-discount+gst;
    printf("Net amount: %f", net);

    return 0;
}
