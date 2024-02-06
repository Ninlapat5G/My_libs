#include "espnow_tools.h"

void led::begin(){

}
void led::begin(String c) {
  c.toCharArray(mac, 18);
  mac_convert();
}
void led::mac_convert(char mac_addr[]){
	if (mac_addr[0] <= '9' && mac_addr[1] <= '9') {
    mactoint[0] = ((mac_addr[0] - '0') * pow(16, 1)) + ((mac_addr[1] - '0') * pow(16, 0));
  } else if (mac_addr[0] <= '9' && mac_addr[1] > '9') {
    mactoint[0] = ((mac_addr[0] - '0') * pow(16, 1)) + (((mac_addr[1] - 'A' + 10)) * pow(16, 0));
  } else if (mac_addr[0] > '9' && mac_addr[1] <= '9') {
    mactoint[0] = ((mac_addr[0] - 'A' + 10) * pow(16, 1)) + ((mac_addr[1] - '0') * pow(16, 0));
  } else {
    mactoint[0] = ((mac_addr[0] - 'A' + 10) * pow(16, 1)) + (((mac_addr[1] - 'A' + 10)) * pow(16, 0));
  }
  
  	if (mac_addr[3] <= '9' && mac_addr[4] <= '9') {
    mactoint[1] = ((mac_addr[3] - '0') * pow(16, 1)) + ((mac_addr[4] - '0') * pow(16, 0));
  } else if (mac_addr[3] <= '9' && mac_addr[4] > '9') {
    mactoint[1] = ((mac_addr[3] - '0') * pow(16, 1)) + (((mac_addr[4] - 'A' + 10)) * pow(16, 0));
  } else if (mac_addr[3] > '9' && mac_addr[4] <= '9') {
    mactoint[1] = ((mac_addr[3] - 'A' + 10) * pow(16, 1)) + ((mac_addr[4] - '0') * pow(16, 0));
  } else {
    mactoint[1] = ((mac_addr[3] - 'A' + 10) * pow(16, 1)) + (((mac_addr[4] - 'A' + 10)) * pow(16, 0));
  }

  	if (mac_addr[6] <= '9' && mac_addr[7] <= '9') {
    mactoint[2] = ((mac_addr[6] - '0') * pow(16, 1)) + ((mac_addr[7] - '0') * pow(16, 0));
  } else if (mac_addr[6] <= '9' && mac_addr[7] > '9') {
    mactoint[2] = ((mac_addr[6] - '0') * pow(16, 1)) + (((mac_addr[7] - 'A' + 10)) * pow(16, 0));
  } else if (mac_addr[6] > '9' && mac_addr[7] <= '9') {
    mactoint[2] = ((mac_addr[6] - 'A' + 10) * pow(16, 1)) + ((mac_addr[7] - '0') * pow(16, 0));
  } else {
    mactoint[2] = ((mac_addr[6] - 'A' + 10) * pow(16, 1)) + (((mac_addr[7] - 'A' + 10)) * pow(16, 0));
  }
  
  	if (mac_addr[9] <= '9' && mac_addr[10] <= '9') {
    mactoint[3] = ((mac_addr[9] - '0') * pow(16, 1)) + ((mac_addr[10] - '0') * pow(16, 0));
  } else if (mac_addr[9] <= '9' && mac_addr[10] > '9') {
    mactoint[3] = ((mac_addr[9] - '0') * pow(16, 1)) + (((mac_addr[10] - 'A' + 10)) * pow(16, 0));
  } else if (mac_addr[9] > '9' && mac_addr[10] <= '9') {
    mactoint[3] = ((mac_addr[9] - 'A' + 10) * pow(16, 1)) + ((mac_addr[10] - '0') * pow(16, 0));
  } else {
    mactoint[3] = ((mac_addr[9] - 'A' + 10) * pow(16, 1)) + (((mac_addr[10] - 'A' + 10)) * pow(16, 0));
  }

  	if (mac_addr[12] <= '9' && mac_addr[13] <= '9') {
    mactoint[4] = ((mac_addr[12] - '0') * pow(16, 1)) + ((mac_addr[13] - '0') * pow(16, 0));
  } else if (mac_addr[12] <= '9' && mac_addr[13] > '9') {
    mactoint[4] = ((mac_addr[12] - '0') * pow(16, 1)) + (((mac_addr[13] - 'A' + 10)) * pow(16, 0));
  } else if (mac_addr[12] > '9' && mac_addr[13] <= '9') {
    mactoint[4] = ((mac_addr[12] - 'A' + 10) * pow(16, 1)) + ((mac_addr[13] - '0') * pow(16, 0));
  } else {
    mactoint[4] = ((mac_addr[12] - 'A' + 10) * pow(16, 1)) + (((mac_addr[13] - 'A' + 10)) * pow(16, 0));
  }

  	if (mac_addr[15] <= '9' && mac_addr[16] <= '9') {
    mactoint[5] = ((mac_addr[15] - '0') * pow(16, 1)) + ((mac_addr[16] - '0') * pow(16, 0));
  } else if (mac_addr[15] <= '9' && mac_addr[16] > '9') {
    mactoint[5] = ((mac_addr[15] - '0') * pow(16, 1)) + (((mac_addr[16] - 'A' + 10)) * pow(16, 0));
  } else if (mac_addr[15] > '9' && mac_addr[16] <= '9') {
    mactoint[5] = ((mac_addr[15] - 'A' + 10) * pow(16, 1)) + ((mac_addr[16] - '0') * pow(16, 0));
  } else {
    mactoint[5] = ((mac_addr[15] - 'A' + 10) * pow(16, 1)) + (((mac_addr[16] - 'A' + 10)) * pow(16, 0));
  }
}
void led::mac_convert(){
	if (mac[0] <= '9' && mac[1] <= '9') {
    mactoint[0] = ((mac[0] - '0') * pow(16, 1)) + ((mac[1] - '0') * pow(16, 0));
  } else if (mac[0] <= '9' && mac[1] > '9') {
    mactoint[0] = ((mac[0] - '0') * pow(16, 1)) + (((mac[1] - 'A' + 10)) * pow(16, 0));
  } else if (mac[0] > '9' && mac[1] <= '9') {
    mactoint[0] = ((mac[0] - 'A' + 10) * pow(16, 1)) + ((mac[1] - '0') * pow(16, 0));
  } else {
    mactoint[0] = ((mac[0] - 'A' + 10) * pow(16, 1)) + (((mac[1] - 'A' + 10)) * pow(16, 0));
  }
  
  	if (mac[3] <= '9' && mac[4] <= '9') {
    mactoint[1] = ((mac[3] - '0') * pow(16, 1)) + ((mac[4] - '0') * pow(16, 0));
  } else if (mac[3] <= '9' && mac[4] > '9') {
    mactoint[1] = ((mac[3] - '0') * pow(16, 1)) + (((mac[4] - 'A' + 10)) * pow(16, 0));
  } else if (mac[3] > '9' && mac[4] <= '9') {
    mactoint[1] = ((mac[3] - 'A' + 10) * pow(16, 1)) + ((mac[4] - '0') * pow(16, 0));
  } else {
    mactoint[1] = ((mac[3] - 'A' + 10) * pow(16, 1)) + (((mac[4] - 'A' + 10)) * pow(16, 0));
  }

  	if (mac[6] <= '9' && mac[7] <= '9') {
    mactoint[2] = ((mac[6] - '0') * pow(16, 1)) + ((mac[7] - '0') * pow(16, 0));
  } else if (mac[6] <= '9' && mac[7] > '9') {
    mactoint[2] = ((mac[6] - '0') * pow(16, 1)) + (((mac[7] - 'A' + 10)) * pow(16, 0));
  } else if (mac[6] > '9' && mac[7] <= '9') {
    mactoint[2] = ((mac[6] - 'A' + 10) * pow(16, 1)) + ((mac[7] - '0') * pow(16, 0));
  } else {
    mactoint[2] = ((mac[6] - 'A' + 10) * pow(16, 1)) + (((mac[7] - 'A' + 10)) * pow(16, 0));
  }
  
  	if (mac[9] <= '9' && mac[10] <= '9') {
    mactoint[3] = ((mac[9] - '0') * pow(16, 1)) + ((mac[10] - '0') * pow(16, 0));
  } else if (mac[9] <= '9' && mac[10] > '9') {
    mactoint[3] = ((mac[9] - '0') * pow(16, 1)) + (((mac[10] - 'A' + 10)) * pow(16, 0));
  } else if (mac[9] > '9' && mac[10] <= '9') {
    mactoint[3] = ((mac[9] - 'A' + 10) * pow(16, 1)) + ((mac[10] - '0') * pow(16, 0));
  } else {
    mactoint[3] = ((mac[9] - 'A' + 10) * pow(16, 1)) + (((mac[10] - 'A' + 10)) * pow(16, 0));
  }

  	if (mac[12] <= '9' && mac[13] <= '9') {
    mactoint[4] = ((mac[12] - '0') * pow(16, 1)) + ((mac[13] - '0') * pow(16, 0));
  } else if (mac[12] <= '9' && mac[13] > '9') {
    mactoint[4] = ((mac[12] - '0') * pow(16, 1)) + (((mac[13] - 'A' + 10)) * pow(16, 0));
  } else if (mac[12] > '9' && mac[13] <= '9') {
    mactoint[4] = ((mac[12] - 'A' + 10) * pow(16, 1)) + ((mac[13] - '0') * pow(16, 0));
  } else {
    mactoint[4] = ((mac[12] - 'A' + 10) * pow(16, 1)) + (((mac[13] - 'A' + 10)) * pow(16, 0));
  }

  	if (mac[15] <= '9' && mac[16] <= '9') {
    mactoint[5] = ((mac[15] - '0') * pow(16, 1)) + ((mac[16] - '0') * pow(16, 0));
  } else if (mac[15] <= '9' && mac[16] > '9') {
    mactoint[5] = ((mac[15] - '0') * pow(16, 1)) + (((mac[16] - 'A' + 10)) * pow(16, 0));
  } else if (mac[15] > '9' && mac[16] <= '9') {
    mactoint[5] = ((mac[15] - 'A' + 10) * pow(16, 1)) + ((mac[16] - '0') * pow(16, 0));
  } else {
    mactoint[5] = ((mac[15] - 'A' + 10) * pow(16, 1)) + (((mac[16] - 'A' + 10)) * pow(16, 0));
  }
}
void led::mac_convert_v1() {
  char c[2];
  for (int i = 0; i <= 17; i++) {
    static int index = 0, index2 = 0;
    if (mac[i] != ':' && index < 2) {
      c[index] = mac[i];
      index++;
    } else {
      index = 0;
      mactoint[index2] = convert(c);
      index2++;
    }
  }
}
void led::mac_convert_v1(char mac[]) {
  char c[2];
  for (int i = 0; i <= 17; i++) {
    static int index = 0, index2 = 0;
    if (mac[i] != ':' && index < 2) {
      c[index] = mac[i];
      index++;
    } else {
      index = 0;
      mactoint[index2] = convert(c);
      index2++;
    }
  }
}
uint8_t led::convert(char mac[]) {
  uint8_t sum;
  if (mac[0] <= '9' && mac[1] <= '9') {
    sum = ((mac[0] - '0') * pow(16, 1)) + ((mac[1] - '0') * pow(16, 0));
  } else if (mac[0] <= '9' && mac[1] > '9') {
    sum = ((mac[0] - '0') * pow(16, 1)) + (((mac[1] - 'A' + 10)) * pow(16, 0));
  } else if (mac[0] > '9' && mac[1] <= '9') {
    sum = ((mac[0] - 'A' + 10) * pow(16, 1)) + ((mac[1] - '0') * pow(16, 0));
  } else {
    sum = ((mac[0] - 'A' + 10) * pow(16, 1)) + (((mac[1] - 'A' + 10)) * pow(16, 0));
  }
  return sum;
}
