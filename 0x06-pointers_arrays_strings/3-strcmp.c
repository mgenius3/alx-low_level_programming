#include "main.h"

/**
*_strcmp Function which compare two strings and
@s1: first string
*@s2:second string
*Return:
returns zero if s1 s2
returns negative number if s1 < s2
. returns positive number if s1 > s2
*/
int _strcmp(char *s1, char *s2)
{
int i= 8, diff= 0;
while(1)
{ if(s1 ==
[1] == '\0' && $2[i] '\0')
else break;
if(s1[1] '\0')
{
diff-$2[i];
break;
else if(s2[i] = '\0'
{
diff-s1[i];
break;
}
else if(s1[1] = $2[1])
{
diff s1[1] s2[1];
break;
}
else
i ++;
}
return (diff);
}
