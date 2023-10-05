#include<stdio.h>



void main()
{
	float radius, length, breadth,area,peri;
	int choice;
	
	printf("Enter\n");
	printf("1. To find area and perimeter of Square 2. To find area and perimeter of circle 3. To find area and perimeter of rectangle\n");
	
	scanf("%d",&choice);
	switch(choice)
	{
		
		
		case 1:
			printf("Enter length of a Square\n");
			scanf("%f", &length);
			
			area = length * length;
			peri= 4*length;
			printf("Area of Square:\t%f\n", area);
			printf("the perimeter of square is:\t%f\n",peri);
			break;
		case 2:
			printf("Enter the radius of a Circle\n");
			scanf("%f", &radius);
			
			area = 3.14* radius * radius, peri=2*3.14*radius;
			
			printf("Area of Circle:\t%f\n", area);
			printf("The perimeter of circle is:\t%f\n",peri);
			break;
			
		case 3:
			printf("Enter the length and breadth of a Rectangle\n");
			scanf("%f %f", &length, &breadth);
			
			area = length * breadth;
            peri= 2*(length+breadth);
			
			printf("Area of Rectangle:\t%f\n", area);
            printf("Perimeter of rectangle is:\t%f\n",peri);
			
			break;
		
		default:
			printf("Invalid Choice\n");
	}
}

