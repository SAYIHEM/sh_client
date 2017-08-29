//
// Created by tomg on 29.08.17.
//

#ifndef SH_CLIENT_INCLUDE_H
#define SH_CLIENT_INCLUDE_H

#include "Arduino.h"
#include <WiFi.h>
#include <esp_log.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
//#include <sockets.h>
#include <string>
#include <vector>
#include <netinet/in.h>
#include <sstream>
#include "sdkconfig.h"


#include "../esp/main/Main.h"
#include "../esp/wifi/WifiController.h"
//#include "../esp/Config.h"
#include "../tools/DataConverter.h"

using namespace std;

#endif //SH_CLIENT_INCLUDE_H
