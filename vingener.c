#include <cs50.h> 
#include <stdio.h> 
#include <ctype.h> 
#include <string.h> 
    int main(int argc, string argv[]) 
{ 
       //number of arguments
  if (argc != 2)  
{ 
    printf("Try again."); 
    return 1; 
} 
       //reading a line of text
    string key = argv[1]; 
  
    unsigned long keyCount = strlen(key); 

    for(int k = 0; k < keyCount; k++) 
{ 
      //check whether the character is a letter
  if (!isalpha(key[k])) 
{ 
    printf("Try again."); 
    
    return 1; 
} 
} 
      //receiving a text string
    string text = GetString(); 
    
  if(text == NULL) 
{ 
    printf("Try again."); 
    
    return 1; 
} 
     //encryption and receiving line length
    for (int i = 0, n = 0; i < strlen(text); i++) 
{ 
     //check whether the character is a letter
  if (isalpha(text[i])) 
{ 
     //check whether the character is a big letter
  if (isupper(text[i])) 
  
    printf("%c", ((((text[i] - 'A') + ((toupper(key[n++%keyCount]))-'A')%26) % 26) + 'A')); 

     //check whether the character is a small letter
  if (islower(text[i])) 
   
    char small_letter = ((((text[i] - 'a') + ((tolower(key[n++%keyCount])) - 'a') % 26) % 26) + 'a');

    printf("%c", small_letter);
} else 
   
    printf("%c", text[i]); 
} 
    printf("\n"); 
  
    return 0; 
}