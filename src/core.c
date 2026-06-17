#include "core.h"
#include <stdio.h>
#include <string.h>
static int ready = 0;
void embedded_rtos_init(void){ ready=1; printf("embedded-rtos init\n"); }
void embedded_rtos_shutdown(void){ ready=0; }
int embedded_rtos_process(const void *d, size_t l){ if(!ready)return -1; printf("Processing %zu bytes\n",l); return 0; }
