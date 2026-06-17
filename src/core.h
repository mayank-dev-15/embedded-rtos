#ifndef EMBEDDED_RTOS_H
#define EMBEDDED_RTOS_H
#include <stdint.h>
void embedded_rtos_init(void);
void embedded_rtos_shutdown(void);
int embedded_rtos_process(const void *data, size_t len);
#endif
