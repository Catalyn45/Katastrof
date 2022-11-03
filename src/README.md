# Katastroff

the project structure is as it follows:
```
.
├── core.cpp
├── core.h
├── events.h
├── logging.cpp
├── logging.h
├── main.cpp
├── dispatchers
│   ├── dispatcher.cpp
│   ├── dispatcher.h
│   ├── json_dispatcher.cpp
│   ├── json_dispatcher.h
├── modules
│   ├── file_scanner
│   │   ├── file_scanner_module.cpp
│   │   ├── file_scanner_module.h
│   ├── interfaces.h
│   ├── module.cpp
│   ├── module.h
├── scripts_engine
│   ├── interpreter.cpp
│   ├── interpreter.h
│   ├── lua_interpreter.cpp
│   ├── lua_interpreter.h
└── util
    ├── cloud.cpp
    ├── cloud.h
    ├── threadpool.cpp
    ├── threadpool.h
    ├── utils.cpp
    └── utils.h
```

Every directory should have a README file that will summarize the purpose of it.
in some cases the documentation should be present to explain how the module or helper
could and need to be used.

The architecture is an `event-driven` one. Every action should be made in a response of an
event. To define a new event see the `event.h` file. Use the alreaedy existing events and modules
as a guide for the new ones. Every module and event should be documented.
