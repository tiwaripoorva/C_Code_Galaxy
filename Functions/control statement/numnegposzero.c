#include<stdio.h>
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    if (num == 0) {
        printf("%d is equal to zero",num);

}
    else if (num>=0){
        printf("%d is positive",num);
    }
    else if (num<0) {
        printf("%d is negative",num);
    }
   
return 0;
}