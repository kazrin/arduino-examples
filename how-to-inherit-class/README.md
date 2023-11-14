# How to inherit class

```
.
├── README.md
├── include
│   └── README
├── lib
│   ├── README
│   ├── WiFConnection
│   │   ├── WiFiConnection.cpp
│   │   └── WiFiConnection.h
│   └── config
│       └── config.h
├── platformio.ini
├── src
│   └── main.cpp
└── test
    └── README
```

`main.cpp` loads `WiFiConnection` class and make it connect, check the connection and re-connect.
Before building, please replace `ssid` and `password` in `./include/config.h`
