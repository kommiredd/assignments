#include <stdio.h>

int main(void) {
  unsigned char A=0x00, B=0x00, C=0x01;
  unsigned char F;
  unsigned char one=0x01;

  F= ((~A) | (~B)) & (~C);

  printf("A=%x B=%x C=%x F=%x",A,B,C,(F & one));
  return 0;
}
