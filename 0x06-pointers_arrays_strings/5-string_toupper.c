#include "main.h"
#include <stdio.h>
/**
* string_toupper changes all lowercase letters to uppercase
@str: string to be changed
Return: address to the string
*/
char *string_toupper(char *str)
{
int i= 0;
while(str[i] != '\0')
{
if(str[i] >= && str[i] <= 'z')
str[i] 32;
i++;
}
return (str);
}
