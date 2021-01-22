#include <stdio.h>

int getStringLength(const char * text) {
  int length = 0;
  while (text[length] != '\0') {
    ++length;
  }
  return length;
}