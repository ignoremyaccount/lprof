#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

/*
hope this code works, considering the C LSP for github is limited 
i have no way of knowing the function declarations without looking
at the header online
*/

/*
implement: 
half censorship 
full censorship 
first letter only

*/

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
  int _s_len = strlen(word); 
}
