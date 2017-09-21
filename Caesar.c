#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
  
  int pin;
  int record;
  
  if (argc != 2)
  {
  
  
    printf("You did not enter a key, Rerun and enter key.\n");
    return 1;
  
  }
  printf("Enter the text you would like to encrypt:\n");
  string s = GetString();
  
  pin = atoi(argv[1]);
  
  if (pin >= 26)
{
   pin = (pin %26);
}

  for(int i = 0, length = strlen(s); i < length; i++)
  {
    record = (s[i] + pin);
   
   if (isupper(s[i]) && (record > 'Z'))
   {
     record = (record - 26);
   }
   
    else if(islower(s[i]) && (record > 'z'))
   {
     record = (record - 26);
   }
   
   else if (isalpha(s[i]))
   {
     printf("%c", record);
   }
   else
   {
     printf("%c", s[i]);
   }
   printf("\n");
   return 0;
    
  }
  
}
