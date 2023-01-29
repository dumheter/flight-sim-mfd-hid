#include <Joystick.h>

using Pin = unsigned int;

/// Sink pins will do the digitalRead.
constexpr Pin sink_size = 4;
constexpr Pin sink_pins[sink_size] = {2, 3, 4, 5};

/// Source pins will do the digitalWrite.
constexpr Pin source_size = 5;
constexpr Pin source_pins[source_size] = {6, 7, 8, 9, 10};

Joystick_ joystick;

void setup() {
  for (Pin i = 0; i < sink_size; ++i) {
    pinMode(sink_pins[i], INPUT_PULLUP);
  }

  for (Pin i = 0; i < source_size; ++i) {
    pinMode(source_pins[i], OUTPUT);
  }

  joystick.begin(false /*autosend*/);
}

void loop() {
  for (Pin i = 0; i < source_size; ++i) {
    digitalWrite(source_pins[i], LOW);

    // Debounce the input by reading once, then a bit later, read again.
    // Only if the result is LOW both times should we turn on the button.
    bool states[sink_size];
    for (Pin j = 0; j < sink_size; ++j) {
      states[j] = digitalRead(sink_pins[j]);
    }

    delayMicroseconds(200);

    for (Pin j = 0; j < sink_size; ++j) {
      const auto state = states[j] || digitalRead(sink_pins[j]);

      // We invert the state since we use a pullup, which natrual state is TRUE.
      joystick.setButton((i) + (j) * source_size, !state);
    }

    digitalWrite(source_pins[i], HIGH);
  }

  joystick.sendState();
  delay(4); // 0,2*5 + 4 -> 200/s
}
