/*
20210403/https://patentimages.storage.googleapis.com/52/04/e8/f5a5f0a7214a9c/US4910670.pdf
20210403/https://github.com/mamedev/mame/blob/master/src/mame/drivers/mac128.cpp#L486
20210403/https://en.wikipedia.org/wiki/Linear-feedback_shift_register
*/

#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
  unsigned int k = 1;
  /* if (argc != 2)
    return 1;
  if (sreg == 0)
    return 1; */

  fputs(" 0, ", stdout);
  while (k < 64) {
    unsigned char sreg;
    unsigned char preg;
    unsigned char j;
    unsigned int i = 0;
    /* sreg = (char)atoi(argv[1]); */
    sreg = k;
    sreg &= 64 - 1;
    /* N.B.: Careful, we do not check the exit condition at the start.
       We must have a special hardware condition check to allow
       shifting once before triggering the exit condition.  As we also
       do for the zero condition.  */
    do {
      sreg = (sreg >> 1) |
	((((sreg >> 0) ^ (sreg >> 1)) & 1) << 5);
      sreg &= 64 - 1;

      preg = sreg;
      /* j = 6;
      while (j > 0) {
	j--;
	putchar((preg & (1 << 5)) ? '1' : '0');
	preg <<= 1;
      }
      putchar('\n'); */
      i++;
    } while (sreg != 0x20);
    printf("%2d, ", i);
    k++;
    if ((k & (8 - 1)) == 0)
      putchar('\n');
  }
  putchar('\n');
  
  return 0;
}
