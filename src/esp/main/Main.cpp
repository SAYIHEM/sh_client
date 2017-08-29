#include "../../include/Include.h"

static char tag[] = "socketClient";


void setup() {

    // Initial Delay
    delay(2000);

    Serial.begin(115200);
    WifiController::connectToWiFi("MKFM-Network", "&htdjgherkg65416&grihb)654");
    pinMode(2, OUTPUT);
}

void loop() {

    Serial.println("Test");
    delay(3000);
}



