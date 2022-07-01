#include <stdio.h>

/**
 *main - starts the compilation
 *
 *Return: int 0
*/
int main(void)
{
  printf("%s : %d %s\n", "size of a char  is", sizeof(char), "byte(s)");
  printf("%s : %d %s\n", "size of a int is", sizeof(int), "byte(s)");
  printf("%s : %d %s\n", "size of a long int is", sizeof(long int), "byte(s)");
  printf("%s : %d %s\n", "size of a long long int is", sizeof(long long int), "byte(s)");
  printf("%s : %d %s\n", "size of a float is", sizeof(float), "byte(s)");

  return (0);
}
