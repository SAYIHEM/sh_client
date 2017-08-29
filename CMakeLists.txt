cmake_minimum_required(VERSION 3.8)
project(sh_client)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/tools/DataConverter.cpp src/tools/DataConverter.h src/esp/wifi/WifiController.cpp src/esp/wifi/WifiController.h src/esp/main/Main.cpp src/esp/main/Main.h src/esp/Config.h src/include/Include.h)
add_executable(sh_client ${SOURCE_FILES})

include_directories(/home/tomg/programms/arduino-ide/libraries)
include_directories(/home/tomg/programms/arduino-ide/hardware/espressif/esp32/libraries)
include_directories(/home/tomg/Arduino/libraries)
include_directories(/home/tomg/programms/arduino-ide/hardware/espressif/esp32/tools/sdk/include)
include_directories(/home/tomg/programms/arduino-ide/hardware/espressif/esp32/tools/sdk/include/lwip/lwip)
include_directories(/home/tomg/programms/arduino-ide/hardware/espressif/esp32/cores/esp32)
include_directories(/home/tomg/programms/arduino-ide/libraries/Wifi/src)
include_directories(/home/tomg/programms/arduino-ide/hardware/espressif/esp32/tools/sdk/include/log)
include_directories(/home/tomg/programms/arduino-ide/hardware/espressif/esp32/tools/sdk/include/freertos)
include_directories(/home/tomg/programms/arduino-ide/hardware/espressif/esp32/tools/sdk/include/config)