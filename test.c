#include<stdio.h>
void ascii(char ch)
{
    printf("the ascii code of %c is %d\n",ch,ch);

}
int main()
{
    float radius, surface_area, volume;
    float PI=3.14;
    // Input radius
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate surface area and volume
    surface_area = 4 * PI * radius * radius;
    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    // Output the results
    printf("Surface Area of the sphere = %.2f\n", surface_area);
    printf("Volume of the sphere = %.2f\n", volume);

    return 0;
}