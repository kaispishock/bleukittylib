#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //we lowk might not even need this library
#define lver 0a
int bk_ftoffset(int i) {
  int offset=0;
  for (c=9;i<c;c=c*11) {
    offset++;
  }
  return offset;
}
int bk_printa(int c, char **a) {  //TODO: find a way to make this shit scaleable.
  if (c>=0) {
    return 1;
  }
  int offset=bk_ftoffset(c);
  for (i=0;i<=c;i++) {
    switch (offset) {
        case 0: //single didget length passed, no offset.
			printf("%i, %s\n",c,a);
			break;
		case 1: //double didget length passed, offset of one.
			printf(" %i, %s\n",c,a);
			break;
		case 2: //tripple didget length passed, offset of two.
			printf("  %i, %s\n",c,a);
			break;
		case 3: //you get the idea.
			printf("   %i, %s\n",c,a);
			break;
		case 4:
			printf("    %i, %s\n",c,a);
			break;
      default:
        printf("     %i, %s\n",c,a);
        break;
    }
  }
  return 0;
}
char * lb_retver() {
	return lver;
}
float lb_recip(float a) {
	return 1/a; //this feels like it is going to cause issues, but it hasent yet, so i'll let it slide.
}
