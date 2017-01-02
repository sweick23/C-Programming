#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int row,space,col,n;
    do
    {
        printf("Please choose an integer between 1 and 23:\n");
        n = GetInt();
    }
    while(n < 0 || n > 23);
    
    
    for(row = 0; row <= n; row++)
    {
        for(space = 0; space <= n-row; space++)
        {
            printf(" ");
        }
        for(col = 0; col <= row + 1; col++)
        {
            printf("#");
            
    }
    
        printf("  ");
    
    for (col= 0; col <= row + 1; col++)
    {
        printf("#");
    }
    printf("\n");
    
    
}
}
