double PIEZO_0_PIN = A0; // Piezo output
double PIEZO_1_PIN = A1;
double PIEZO_2_PIN = A2;

#define TEMBOO_ACCOUNT "megmehta99"  // Your Temboo account name 
#define TEMBOO_APP_KEY_NAME "myFirstApp"  // Your Temboo app key name
//#define TEMBOO_APP_KEY not writing this down haha

#include <Bridge.h>
#include <Temboo.h>
#include <Keypad.h>

const byte ROWS = 4; // Four rows
const byte COLS = 3; // Three columns
// Define the Keymap
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'#','0','*'}
};
// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
//byte rowPins[ROWS] = { 10, 9, 8, 7};
byte rowPins[ROWS] = { 5, 4, 3, 2};
// Connect keypad COL0, COL1 and COL2 to these Arduino pins.
byte colPins[COLS] = { 13, 6, 1 }; 

// Create the Keypad
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


#include <LiquidCrystal.h>

//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

int x1;
int x2;
int x3; 
int x4; 
int x5;
int x6;
int x7;
int x8;
int x9;
int x10;
int x11;
int x12;
int x13;
int x14;
int x15;
int x16;
int x17;
int x18;
int x19;
int x20;

int y1;
int y2;
int y3; 
int y4; 
int y5;
int y6;
int y7;
int y8;
int y9;
int y10;
int y11;
int y12;
int y13;
int y14;
int y15;
int y16;
int y17;
int y18;
int y19;
int y20;

int z1;
int z2;
int z3; 
int z4; 
int z5;
int z6;
int z7;
int z8;
int z9;
int z10;
int z11;
int z12;
int z13;
int z14;
int z15;
int z16;
int z17;
int z18;
int z19;
int z20;
char key; 
String phoneNumber = "+1";

void setup()
{
 
  //Serial.begin(9600);
  //pinMode(ledPin, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

lcd.begin(16, 2);
  // Print a message to the LCD.
lcd.print("Enter phone #");
lcd.setCursor(0, 1); // bottom left
lcd.print("+1");
 // delay(2000);
 
}

void loop()
{
  
  
  RESTART:
  key = '#';
  while (key != '*'){

  key = keypad.getKey();
  
  if(key)  // Check for a valid key.
  {
    switch (key)
    {
      case '#':
        goto NEXTSECTION;
      case '*':
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Enter phone #");
        lcd.setCursor(0,1);
        lcd.print("+1");
        phoneNumber = "+1";
        goto RESTART;
      default:
        //Serial.println(key);
        lcd.print(key);
        phoneNumber += key;
        }
     }
  }
  
NEXTSECTION: 

//Serial.println(phoneNumber);

//while(!Serial);
  Bridge.begin();


 while(1){
 //lcd.noDisplay();
  //lcd.print("ON");
  x1 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x1);
  //Serial.print(" ]");

 y1 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y1);
  //Serial.print(" ]");
  

  z1 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z1);
  //Serial.println(" ]");
  delay(200);


    x2 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x2);
  //Serial.print(" ]");
  

 y2 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y2);
  //Serial.print(" ]");
  

 z2 = analogRead(PIEZO_2_PIN);
 // Serial.print("[ ");
 // Serial.print(z2);
 // Serial.println(" ]");
  delay(200);

  x3 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x3);
  //Serial.print(" ]");
  

 y3 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y3);
  //Serial.print(" ]");
  

  z3 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z3);
  //Serial.println(" ]");
  delay(200);

  x4 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x4);
  //Serial.print(" ]");
  

 y4 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y4);
  //Serial.print(" ]");
  

  z4 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z4);
  //Serial.println(" ]");
  delay(200);

  x5 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x5);
  //Serial.print(" ]");
  

 y5 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y5);
  //Serial.print(" ]");
  

  z5 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z5);
  //Serial.println(" ]");
  delay(200);

  x6 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x6);
  //Serial.print(" ]");
  

 y6 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y6);
  //Serial.print(" ]");
  

  z6 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z6);
  //Serial.println(" ]");
  delay(200);

  x7 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x7);
  //Serial.print(" ]");
  

 y7 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y7);
  //Serial.print(" ]");
  

  z7 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z7);
  //Serial.println(" ]");
  delay(200);

  x8 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x8);
  //Serial.print(" ]");
  

 y8 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y8);
  //Serial.print(" ]");

  z8 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z8);
  //Serial.println(" ]");
  delay(200);

  x9 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x9);
  //Serial.print(" ]");
  

 y9 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y9);
  //Serial.print(" ]");
  

  z9 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z9);
  //Serial.println(" ]");
  delay(200);

  x10 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x10);
  //Serial.print(" ]");
  

 y10 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y10);
  //Serial.print(" ]");
  

  z10 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z10);
  //Serial.println(" ]");
  delay(200);
  

 x11 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x11);
  //Serial.print(" ]");
  

 y11 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y11);
  //Serial.print(" ]");
  

  z11 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z11);
  //Serial.println(" ]");
  delay(200);
  
  x12 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x12);
  //Serial.print(" ]");
  

 y12 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y12);
  //Serial.print(" ]");
  

  z12 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z12);
  //Serial.println(" ]");
  delay(200);

  x13 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x13);
  //Serial.print(" ]");
  

 y13 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y13);
  //Serial.print(" ]");
  

  z13 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z13);
  //Serial.println(" ]");
  delay(200);
  
  x14 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x14);
  //Serial.print(" ]");
  

 y14 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y14);
  //Serial.print(" ]");
  

  z14 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z14);
  //Serial.println(" ]");
  delay(200);
  
  x15 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x15);
  //Serial.print(" ]");
  

 y15 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y15);
  //Serial.print(" ]");
  

  z15 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z15);
  //Serial.println(" ]");
  delay(200);

  x16 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x16);
  //Serial.print(" ]");
  

 y16 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y16);
  //Serial.print(" ]");
  

  z16 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z16);
  //Serial.println(" ]");
  delay(200);

  x17 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x17);
  //Serial.print(" ]");
  

 y17 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y17);
  //Serial.print(" ]");
  

  z17 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z17);
  //Serial.println(" ]");
  delay(200);

  x18 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x18);
  //Serial.print(" ]");
  

 y18 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y18);
  //Serial.print(" ]");
  

  z18 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z18);
  //Serial.println(" ]");
  delay(200);

  x19 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x19);
  //Serial.print(" ]");
  

 y19 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y19);
  //Serial.print(" ]");
  

  z19 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z19);
  //Serial.println(" ]");
  delay(200);

  x20 = analogRead(PIEZO_0_PIN);
  //Serial.print("[ ");
  //Serial.print(x20);
  //Serial.print(" ]");
  

 y20 = analogRead(PIEZO_1_PIN);
  //Serial.print("[ ");
  //Serial.print(y20);
  //Serial.print(" ]");
  

  z20 = analogRead(PIEZO_2_PIN);
  //Serial.print("[ ");
  //Serial.print(z20);
  //Serial.println(" ]");
  delay(200);

  digitalWrite(LED_BUILTIN, LOW);

  if ((x1 == 0) && (x2 == 0) && (x3 == 0) && (x4 == 0) && (x5 == 0) && (x6 == 0) && (x7 == 0) && (x8 == 0) && (x9 == 0) && (x10 == 0) && (x11 == 0) && (x12 == 0) && (x13 == 0) && (x14 == 0) && (x15 == 0) && (x16 == 0) && (x17 == 0) && (x18 == 0) && (x19 == 0) && (x20 == 0) && (y1 == 0) && (y2 == 0) && (y3 == 0) && (y4 == 0) && (y5 == 0) && (y6 == 0) && (y7 == 0) && (y8 == 0) && (y9 == 0) && (y10 == 0) && (y11 == 0) && (y12 == 0) && (y13 == 0) && (y14 == 0) && (y15 == 0) && (y16 == 0) && (y17 == 0) && (y18 == 0) && (y19 == 0) && (y20 == 0)) 
  {
  //&& (z1 == 0) && (z2 == 0) && (z3 == 0) && (z4 == 0) && (z5 == 0) && (z6 == 0) && (z7 == 0) && (z8 == 0) && (z9 == 0) && (z10 == 0) && (z11 == 0) && (z12 == 0) && (z13 == 0) && (z14 == 0) && (z15 == 0) && (z16 == 0) && (z17 == 0) && (z18 == 0) && (z19 == 0) && (z20 == 0)){
      digitalWrite(LED_BUILTIN, HIGH);

     //Serial.println("Running SendSMS - Run");
    
  //  TembooChoreo SendSMSChoreo;

   //TembooChoreo SendSMSChoreo;

   TembooChoreo SendSMSChoreo;

    // Invoke the Temboo client
    SendSMSChoreo.begin();

    // Set Temboo account credentials
    SendSMSChoreo.setAccountName(TEMBOO_ACCOUNT);
    SendSMSChoreo.setAppKeyName(TEMBOO_APP_KEY_NAME);
    SendSMSChoreo.setAppKey(TEMBOO_APP_KEY);
    
    // Set Choreo inputs
    //SendSMSChoreo.addInput("AuthToken", "not writing this down either");
    SendSMSChoreo.addInput("To", phoneNumber);
    //SendSMSChoreo.addInput("From", "twilio generated phone number");
    SendSMSChoreo.addInput("Body", "The laundry is done");
    //SendSMSChoreo.addInput("AccountSID", "twilio SID");
    
    // Identify the Choreo to run
    SendSMSChoreo.setChoreo("/Library/Twilio/SMSMessages/SendSMS");
    
    // Run the Choreo; when results are available, print them to serial
    SendSMSChoreo.run();
    
    while(SendSMSChoreo.available()) {
      char c = SendSMSChoreo.read();
      //Serial.print(c);
    }
    SendSMSChoreo.close();
    phoneNumber = "+1";
   
  lcd.clear();
  lcd.print("Enter phone #");
  lcd.setCursor(0, 1); // bottom left
  lcd.print("+1");

 goto LEAVE;
  }
    
 }
 LEAVE:

 ;
}
