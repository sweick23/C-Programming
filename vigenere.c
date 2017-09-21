#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    int shiftUp;
    int KeyWord;
    
    if (argc != 2)
    
    {
        printf("Wrong key. Rerun the program and enter a one word key.\n");
        return 1;
    }
    
    string key = argv[1];
    
    for (int m = 0, n = strlen(argv[1]); m < n; m++)
    {
        if ((key[m] >= '0') && (key[m] <= '9'))
        {
            printf("Sorry! you entered a number not a key word.\n");
            return 1;
        }
    }
    
    printf("Type in the text you would like to encrypt: ");
    string YourText = GetString();
    
    for(int l = 0, t = 0, k = strlen(YourText); l < k; l++, t++)
    {
        if(t >= strlen(key))
        {
            t = 0;
        }
        
        KeyWord = key[t];
        
       if(!isalpha(YourText[l]))
       {
          t = (t - 1); 
       }
       
       if ((KeyWord >= 'A') && (KeyWord <= 'Z'))
       {
           KeyWord = (KeyWord - 'A');
       }
       
       if ((KeyWord >= 'a') && (KeyWord <= 'z'))
       {
           KeyWord = (KeyWord - 'a');
       }
       
       shiftUp = (YourText[l] + KeyWord);
       
       if (isupper(YourText[l]) && (shiftUp > 'Z'))
       {
           shiftUp = (shiftUp - 26);
       }
       
       if (islower(YourText[l]) && (shiftUp > 'z'))
       {
           shiftUp = (shiftUp - 26);
       }
       
       
       if(isalpha(YourText[l]))
       {
           
           printf("%c", shiftUp);
       }
       else
       {
           printf("%c", YourText[l]);
       }
    }
    printf("\n");
    return 0;
}
