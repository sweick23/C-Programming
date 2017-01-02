#include <cs50.h>
#include <stdio.h>
#include <math.h>

#define QUARTER 25;
#define DIME 10;
#define NICKEL 5;


int main(void) {
    
    float given_amount = 0;
    int cent_amount = 0;
    int quarter_amount = 0;
    int dime_amount = 0;
    int nickel_amount = 0;
    int leftover = 0;
    int coin_count = 0;
    
    do 
    {
        printf("You gave me: ");
        given_amount = GetFloat();
        
        if (given_amount == 0 || given_amount <= 0)
        printf("Number should be greater than zero example: 25\n");
    }
    while (given_amount <= 0);
    
    cent_amount = (int)round(given_amount*100);
    
    quarter_amount = cent_amount/QUARTER;
    leftover = cent_amount % QUARTER;
    
    dime_amount = leftover/DIME;
    leftover = leftover % DIME;
    
    nickel_amount = leftover/NICKEL;
    leftover = leftover % NICKEL;
    
    coin_count = quarter_amount + dime_amount + nickel_amount + leftover;
    
    printf("%d\n", coin_count);
    
    return 0;
}
