//6. Write a program which takes a character as an input and displays its ASCII code.

#include <stdio.h>
  int main() {
  char ch;

  printf("Enter the character to get the ASCII value: ");
  scanf("%c", &ch);

  int ascii = ch;

  printf("ASCII value of %c = %d", ch, ascii);
  return 0;
}
