void loopKeys(byte key, int times) {
  loopKeys(key, 0, times);
}

void loopKeys(byte key1, byte key2, int times) {
  for(int i=0;i<times;i++) {
    DigiKeyboard.sendKeyStroke(key1, key2);
    DigiKeyboard.delay(250);
  }

  DigiKeyboard.delay(500);
}

// Example to press tab key 10 times:
// loopKeys(KEY_TAB, 10);
//
// Or example to press tab and shift keys 10 times:
// loopKeys(KEY_TAB, MOD_SHIFT_LEFT, 10);
