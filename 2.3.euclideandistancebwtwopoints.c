//euclidean distance between between two points
#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x2,y1,y2,p,q,d,sq;
    printf("Enter the values :-\n");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    p = (x2-x1)*(x2-x1);
    q = (y2-y1)*(y2-y1);
    d = p+q;
    sq = sqrt(d);
    printf("Anwser is : %.2f ",sq);
    return 0;
}