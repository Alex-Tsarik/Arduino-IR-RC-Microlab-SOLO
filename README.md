# Arduino-IR-RC-Microlab-SOLO
IR remote controll for Microlab SOLO (RC071)
Speakers Microlab Solo 5C (5C\6C\7C)
```
LSB first    MSB first
Addr Comm    Addr Comm
d i  d i     i d  i d
807F 8077 => FE01 EE11
807F 08F7 =>      EF10
807F 906F =>      F609
807F B04F =>      F20D
807F 50AF =>      F50A
807F 708F =>      F18E
807F 10EF =>      F7E8
807F 20DF =>      FB04
807F 40BF =>      FD02

Addr - address
Comm - command
d - direct byte
i - inverse byte
```
