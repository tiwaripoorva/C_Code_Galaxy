#include<stdio.h>
#include<math.h>
int fun();
int main(){
   fun();
}
int fun(void){
    int s;
    int n1,n2,n3,n4,n5;
    printf("Enter five numbers");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    int sum = n1+n2+n3+n4+n5;
    int avg = (n1+n2+n3+n4+n5)/5;
    int std_dev = pow(n1-avg,2) + pow(n2-avg,2) + pow(n3-avg,2) + pow(n4-avg,2) + pow(n5-avg,2);
    printf("sum of number = %d\n",sum);
    printf("average of number = %d\n",avg);
    printf("standard deviation of number = %d\n",std_dev);
}