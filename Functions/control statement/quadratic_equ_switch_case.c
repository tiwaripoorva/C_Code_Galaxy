#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,r1,r2;
    printf("Enter values a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d = b*b-4*a*c;
    r1 = (-b-sqrt(d))/2*a;
    r2 = (-b+sqrt(d))/2*a;
    switch (d>0)
    {
    case 0:
       printf("Roots are imaginary");
       printf("%d\n",r1);
       printf("%d\n",r2);
        break;
     case 1:
       printf("Roots are virtual");
       printf("%d\n",r1);
       printf("%d\n",r2);    

        break;    
    
    default:
    printf("Roots are equal");
    printf("%d\n",r1);
    printf("%d\n",r2);


        break;
    }


}