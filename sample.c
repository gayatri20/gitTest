#include<stdio.h>
void value();
int main()
{
  printf("I'm in main");
  value();
  printf("I'm back to main");
  return 0;
}
void value()
{
    printf("I'm in value funtion");
}
