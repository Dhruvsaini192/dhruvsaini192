#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a,i;
  printf("TYPE THE NUMBER THAT MANY TIMES YOU WANTS TO PRINT:\n");
  scanf("%d", &a );
  for (i = 0; i < a; i++) {
    hello();    //FUNCTION CALLS
  }
  getch();
  return 0;
}

hello()
{                        //
  printf("hello\n");     //   FUNCTION DEFINATION
}                        //
