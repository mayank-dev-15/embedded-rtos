#include "core.h"
#include <stdio.h>
int main(){
printf("embedded-rtos v1.0.0\n");
printf("Preemptive RTOS kernel for ARM Cortex-M with priority inheritance\n");
embedded_rtos_init();
embedded_rtos_process(NULL,0);
embedded_rtos_shutdown();
return 0;
}
