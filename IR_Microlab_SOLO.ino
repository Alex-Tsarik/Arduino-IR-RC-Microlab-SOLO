//IR controlling for Microlab Solo 6C (RC071)
//Connect IR led's "+" to pin 3 on Arduino (it can not be reassigned)
//
#define IR_SEND_PIN 3
#include <IRremote.hpp> // https://github.com/Arduino-IRremote/

int inByte;

void setup()
{
  Serial.begin(115200);
  IrSender.begin(); // Start with IR_SEND_PIN as send pin and enable feedback LED at default feedback LED pin
}

void loop() {
  if (Serial.available() > 0) {
    inByte = Serial.read() - 48;
    switch (inByte) {
      case 1: IrSender.sendNEC(0x807F8877, 32); break;  // VOL+
      case 2: IrSender.sendNEC(0x807F08F7, 32); break;  // VOL-
      case 3: IrSender.sendNEC(0x807F906F, 32); break;  // TREBLE+
      case 4: IrSender.sendNEC(0x807FB04F, 32); break;  // TREBLE-
      case 5: IrSender.sendNEC(0x807F50AF, 32); break;  // BASS+
      case 6: IrSender.sendNEC(0x807F708F, 32); break;  // BASS-
      case 7: IrSender.sendNEC(0x807F10EF, 32); break;  // RESET
      case 8: IrSender.sendNEC(0x807F20DF, 32); break;  // INPUT
      case 9: IrSender.sendNEC(0x807F40BF, 32); break;  // MUTE
      default:
        Serial.println("1 VOL+ \t 2 VOL-");
        Serial.println("3 TREBLE+ \t 4 TREBLE-");
        Serial.println("5 BASS+ \t 6 BASS-");
        Serial.println("7 RESET");
        Serial.println("8 INPUT");
        Serial.println("9 MUTE");
    }
    Serial.println("OK");
  }
}
