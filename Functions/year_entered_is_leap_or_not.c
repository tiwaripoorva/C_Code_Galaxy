  #include<stdio.h>
int year(int n);
int main(){
    int n;
    printf("Enter year");
    scanf("%d",&n);
    year(n);
}
int year(int n){
    if (n%4==0){
        printf("Entered year is a leap year");
    }
    else{
        printf("Entered year is not a leap year");
    }
    return 0;
}