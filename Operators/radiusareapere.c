/*Accept the radius of the crcle and then calculate area and parameter of that circle*/
#include <stdio.h>
int main() {
    float r,area,parameter;
    printf("Enter radius of circle ");
    scanf("%f",&r);

    area = 3.14*r*r;
    parameter = 2*3.14*r;// pi=3.14

    printf("Enter area of circle = %f",area);
    printf("Enter parameter of circle = %f",parameter);

return 0;
}
