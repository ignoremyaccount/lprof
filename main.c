#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

/* the blacklist */
#define __lprof_num_strings_dev 12 
char **lprof_init_bl(int fd) {
  char **ret = malloc(__lprof_num_strings_dev * sizeof(char *));

  int i = 0;
  while (i < __lprof_num_strings_dev) {
    
    i++;
  }
  
  return ret;
}

/* l profane - c style strings (null charred) */
void lprof_cs(char *word, char **bl) {
  
}
