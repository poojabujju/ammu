#include <stdio.h> /* printf */
#include <string.h> /* strrchr */

ext = strrchr(filename, '.');
if (!ext) {
  
} else {
    printf("extension is %s\n", ext + 1);
}
