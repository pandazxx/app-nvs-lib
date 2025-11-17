
#include <app_nvs_lib/app_nvs_lib.h>
#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(app_nvs_lib, LOG_LEVEL_INF);

int app_nvs_lib_init(void) {
  LOG_INF("app_nvs_lib init");
  return 0;
}

int app_nvs_lib_do_something(int value) {
  LOG_INF("Doing something with %d", value);
  return value * 2;
}
