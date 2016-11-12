#include "types.h"

#include "user.h"

int main(int argc, char *argv[]) {
  int wait = 0, run = 0;
  if (argc >= 2) {
    if (fork() == 0) {
      exec(argv[1], argv + 1);
    }
  }
  waitx(&wait, &run);
  printf(2, "waittime  :%d\nruntime   :%d\n", wait, run);
  exit();
  return 0;
}
