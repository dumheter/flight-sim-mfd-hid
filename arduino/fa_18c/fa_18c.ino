#include <Joystick.h>

using Pin = unsigned int;
constexpr Pin cathode_size = 4;
constexpr Pin cathode_pins[cathode_size] = {2, 3, 4, 5};
constexpr Pin anode_size = 5;
constexpr Pin anode_pins[anode_size] = {6, 7, 8, 9, 10};

Joystick_ joystick;

void setup() {
  for (Pin i = 0; i < cathode_size; ++i) {
    pinMode(cathode_pins[i], INPUT);
  }

  for (Pin i = 0; i < anode_size; ++i) {
    pinMode(anode_pins[i], OUTPUT);
  }

  joystick.begin(false /*autosend*/);
}

void loop() {
  for (Pin i = 0; i < anode_size; ++i) {
    digitalWrite(anode_pins[i], HIGH);
    delayMicroseconds(200); // debounce

    for (Pin j = 0; j < cathode_size; ++j) {
      const auto state = digitalRead(cathode_pins[j]);
      joystick.setButton((i) + (j) * anode_size, state);
    }

    digitalWrite(anode_pins[i], LOW);
  }

  joystick.sendState();
  delay(4); // 0,2*5 + 4 -> 200/s
}
