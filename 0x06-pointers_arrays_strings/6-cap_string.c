#include "main.h"



char *cap_string(char *str)
{
int i = 0;
int capitalize = 1;
while (str[i] != '\0')
{
if (capitalize && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}
capitalize = (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}');
i++;

}
return (str);

}
