# Always safe to include this
zephyr_include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)

# Create the library
zephyr_library_named(app_nvs_lib)

zephyr_library_sources(
  ${CMAKE_CURRENT_SOURCE_DIR}/../src/app_nvs_lib.c
)

# Optionally only build/link if config is enabled
if(CONFIG_APP_NVS_LIB)
  target_link_libraries(app PRIVATE app_nvs_lib)
endif()

