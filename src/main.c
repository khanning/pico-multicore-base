#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/multicore.h"

void core1_entry() {
  while (1) {
    sleep_ms(1000);
    printf("\n-----\n");
  }
}

int main() {
  stdio_init_all();
  printf("Starting multicore\n");

  multicore_launch_core1(core1_entry);

  while (true) {
    sleep_ms(100);
    printf("1");
  }
}
