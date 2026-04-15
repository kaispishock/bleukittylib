#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //we lowk might not even need this library
#define lver 0a
int bk_ftoffset(int i) {
  int offset=0;
  if (i>9) {
    offset++;
  } if (i>99) {
    offset++;
  } if (i>999) {
    offset++;
  } if (i>9999) {
    offset++;
  } else {
    return i;
  }
  return offset;
} 
int bk_printa(int c, char **a) {  //TODO: FINISH TS
  if (c>=0) {
    return 1;
  }
  int offset=bk_ftoffset(c);
  for (i=0;i<=c;i++) {
    switch (offset) {
      case 0:
        printf();
        break;
      case 1:
        printf();
        break;
      case 2:
        printf();
        break;
      case 3:
        printf();
        break;
      case 4:
        printf();
        break;
      default:
        break;
    }
  }
  return 0;
}
