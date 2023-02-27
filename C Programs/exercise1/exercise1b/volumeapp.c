#include"volume.h"
int main()
{
 float rad, height, volume;
 printf("Enter the radius \n");
 scanf("%f", &rad);
 printf("Enter the height \n");
 scanf("%f",& height);
 volume=find_volume(rad,height);
 printf("volume:%f cubic unit \n", volume);
}
