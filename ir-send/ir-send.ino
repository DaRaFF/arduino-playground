#include <ir_Lego_PF_BitStreamEncoder.h>
#include <boarddefs.h>
#include <IRremoteInt.h>
#include <IRremote.h>

IRsend irsend;

const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup(){
  Serial.begin(9600);

  irrecv.enableIRIn();
  irrecv.blink13(true);
 }

void loop(){
  for (int i = 0; i < 3; i++) {
    irsend.sendSony(0x84c, 12);
    Serial.println("send 0x84c");
    delay(40);
  }
  delay(1000); //3 second delay between each signal burst
  for (int i = 0; i < 3; i++) {
    irsend.sendSony(0x04c, 12);
    Serial.println("send 0x04c");
    delay(40);
  }


  delay(1000); //3 second delay between each signal burst
}


//4C
//84C

//RC5


