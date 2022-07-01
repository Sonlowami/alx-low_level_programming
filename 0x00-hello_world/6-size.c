#include <stdio.h>

/**
 *main - starts the compilation
 *
 *Return: int 0
*/
int main(void)
{
  printf("%s: %d %s\n", "size of a char", sizeof(char), "byte(s)");
  printf("%s: %d %s\n", "size of an int", sizeof(int), "byte(s)");
  printf("%s: %d %s\n", "size of a long int", sizeof(long int), "byte(s)");
  printf("%s: %d %s\n", "size of a long long int", sizeof(long long int), "byte(s)");
  printf("%s: %d %s\n", "size of a float", sizeof(float), "byte(s)");

  return (0);
}
