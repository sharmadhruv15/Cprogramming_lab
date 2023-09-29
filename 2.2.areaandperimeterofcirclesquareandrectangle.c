//program to find area and perimeter of circle,rectangle and square
#include<stdio.h>
#include<math.h>
int main()
{
    int radius;
    int length;
    float area;
    float perim;
    int breadth;
// area and perimeter of circle
    printf("\nEnter the  radius of circle : \n ");
    scanf("%d", &radius);
    area= 3.14*radius*radius;
    perim=2*3.14*radius;
  printf("Area of circle is: %.2f\n" , area);
  printf("perimeter of circle is: %.2f\n" , perim);
 
 //area and perimeter of rectangle
printf("\nEnter the length and breadth of a  rectangle");
scanf("%d%d" ,&length ,&breadth);
area= length*breadth;
perim=2*(length+breadth);
printf("area of rectangle is: %.2f\n",area);
printf("perimeter of rectangle is: %.2f\n ", perim);

//area and perimeter of square
printf("\nenter the length of a side of square");
scanf("%d",&length );
area=length*length;
perim= 4*length;
printf("area of square is: %.2f\n", area);
printf("perimeter of square is: %.2f" , perim);

  return 0;
}