# Arduino-IR-RC-Microlab-SOLO
IR remote control for Microlab SOLO series speaker systems: Microlab Solo 5C (4C\5C\6C\7C).

Original remote **RC071**

LSB first |  MSB first | Descr
--|--|--
Addr Comm |Addr Comm
807F 8077 | FE01 EE11 | VOL+
807F 08F7 | _____ EF10 | VOL-
807F 906F | _____ F609 | TREBLE+
807F B04F | _____ F20D | TREBLE-
807F 50AF | _____ F50A | BASS+
807F 708F | _____ F10E | BASS-
807F 10EF | _____ F708 | RESET
807F 20DF | _____ FB04 | INPUT
807F 40BF | _____ FD02 | MUTE
 | | 
_n_i___n_i| _i_n___i_n
```
Addr - address
Comm - command
d - direct byte
n - normal byte
```

Detail information in [Arduino-IRremote liblary Github](https://github.com/Arduino-IRremote/Arduino-IRremote)
