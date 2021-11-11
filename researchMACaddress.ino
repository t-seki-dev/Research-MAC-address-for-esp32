//他のincludeファイルは不要
#include "esp_system.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  // Get MAC address for WiFi station
  uint8_t baseMac[6];
  esp_read_mac(baseMac, ESP_MAC_WIFI_STA);
  char baseMacChr[18] = {0};
  sprintf(baseMacChr, "%02X:%02X:%02X:%02X:%02X:%02X", baseMac[0], baseMac[1], baseMac[2], baseMac[3], baseMac[4], baseMac[5]);

  Serial.print("MAC: ");
  Serial.println(baseMacChr);
}

void loop() {
  // put your main code here, to run repeatedly:

}
