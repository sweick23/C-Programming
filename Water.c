#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    printf("To find out how many bottles of water\n");
    printf("you use in the duration of your shower\n");
    printf("type the duration of your shower in minutes (i.e 10):\n");
     n = GetInt();
    
    float c = 1.5 * 128 / 16 * n;
    printf("%1.0f", c);
    printf(" Bottles of water used!\n");
    

}
