#include <stdio.h>
int main()
{
    int choice;
    float radius,length,breadth,side;
    float area,perimeter;
    printf("select any one choice from the following");
    printf("\n1.circle");
    printf("\n2.square");
    printf("\n3.rectangle");
    printf("\nenter your choice: ");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("enter the radius of the circle");
        scanf("%f",&radius);
        area=3.14*radius*radius;
        perimeter=2*3.14*radius;
        printf("area is: %2f",area);
        printf("\nperimeter is: %2f",perimeter);
    }
    else if (choice==2)
    {
        printf("enter the side of the square:");
        scanf("%f",&side);
        area=side*side;
        perimeter=4*side;
        printf("area is: %2f",area);
        printf("\nperimeter is: %2f",perimeter);
    }
    else if(choice==3)
    {
        printf("enter the length and breadth of the rectangle: ");
        scanf("%f",&length);
        scanf("%f",&breadth);
        area=length*breadth;
        perimeter=2*length+breadth;
        printf("area is: %2f",area);
        printf("\nperimeter is: %2f",perimeter);
    }
    else
    {
        printf("invalid number");
    }
    return 0;
}