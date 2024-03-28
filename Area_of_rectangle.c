//calculation of area of rectangle:
#include <stdio.h>
int rectangle (int length, int width);

void main()
{
    int a,b,area;
    printf("Enter the length and width:\n");
    scanf("%d%d",&a,&b);

    area = rectangle(a,b);
    printf("The Area of the rectangle is %d", area);
}
int rectangle(int length,int width)
{
    int area;
    area=length*width;
    return area;
}
