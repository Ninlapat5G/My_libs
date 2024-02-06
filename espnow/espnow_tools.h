#include <Arduino.h>

struct led {
    void begin();
    void begin(String c);
    void mac_convert(char mac_addr[]);
    void mac_convert_v1(char mac[]);
    bool state = 0;
    uint8_t mactoint[6];
  private:
    char name[32] = "LED";
    char mac[17];
  private:
  	void mac_convert();
    void mac_convert_v1();
    uint8_t convert(char mac[]);
};
