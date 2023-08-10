#include<stdio.h>
int main () {
    int num;
    printf("Enter month");
    scanf("%d",&num);
    if (num==1){
        printf("Month is january and have 31 days");
    }
    else if (num==2){
        printf("Month is february and have 28 days");
    }
    else if (num==3){
        printf("Month is march and have 31 days");
    }
    else if (num==4){
        printf("Month is April and have 30 days");
    }
    else if (num==5){
        printf("Month is May and have 31 days");
    }
    else if (num==6){
        printf("Month is June and have 30 days");
    }
    else if (num==7){
        printf("Month is july and have 31 days");
    }
    else if (num==8){
        printf("Month is August and have 31 days");
    }
    else if (num==9){
        printf("Month is september and have 30 days");
    }
    else if (num==10){
        printf("Month is october and have 31 days");
    }
    else if (num==11){
        printf("Month is november and have 30 days");
    }
    else if (num==12){
        printf("Month is december and have 31 days");
    }
    else {
        printf("Not any month exist");
    }

    return 0;
} 