#include <cs50.h> 
#include <stdio.h> 
#include <ctype.h> 
#include <string.h> 
    int main(int argc, string argv[]) 
{ 
       //Кількість аргументів
  if (argc != 2)  
{ 
    printf("Try again."); 
    return 1; 
} 
       //Зчитування рядка тексту 
    string key = argv[1]; 
  
    unsigned long keyCount = strlen(key); 

    for(int k = 0; k < keyCount; k++) 
{ 
      //Перевірка, чи символ є буквою 
  if (!isalpha(key[k])) 
{ 
    printf("Try again."); 
    
    return 1; 
} 
} 
      //Отримання текстового рядка
    string text = GetString(); 
    
  if(text == NULL) 
{ 
    printf("Try again."); 
    
    return 1; 
} 
     //Шифрування та отримання довжини рядка
    for (int i = 0, n = 0; i < strlen(text); i++) 
{ 
     //Перевірка, чи символ є літерою
  if (isalpha(text[i])) 
{ 
     //Перевірка, чи символ є великою літерою
  if (isupper(text[i])) 
  
    printf("%c", ((((text[i] - 'A') + ((toupper(key[n++%keyCount]))-'A')%26) % 26) + 'A')); 
     //Перевірка, чи символ є малою літерою
  if (islower(text[i])) 
   
    char small_letter = ((((text[i] - 'a') + ((tolower(key[n++%keyCount])) - 'a') % 26) % 26) + 'a');

    printf("%c", small_letter);
} else 
   
    printf("%c", text[i]); 
} 
    printf("\n"); 
  
    return 0; 
}