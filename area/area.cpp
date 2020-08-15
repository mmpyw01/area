#include<stdio.h>
int main()
{
	float w, h, area;
	printf("Enter width = ");
	scanf("%f", &w);
	printf("Enter height = ");
	scanf("%f", &h);

	area = w * h;

	printf("Rectangle area is %.2f", area);

	return 0;
}