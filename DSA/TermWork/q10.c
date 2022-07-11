#include <stdio.h>
#include <string.h>

int main()
{   char input[100];
  printf("Enter the string : ");
  fgets(input, 100, stdin);
  void ascendingOrderString()
{
  int i, j;
  char temp;
  int stringLength = strlen(input);
  for (i = 0; i < stringLength - 1; i++)
   {
    for (j = i + 1; j < stringLength; j++)
     {
      if (input[i] > input[j])
       {
        temp = input[i];
        input[i] = input[j];
        input[j] = temp;
       }
     }
   }
}
  ascendingOrderString();
  puts(input);
  return 0;
}