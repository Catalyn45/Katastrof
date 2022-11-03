#ifndef _K_EVENTS_H_
#define _K_EVENTS_H_

// event types
namespace Katastrof {
    namespace Events {
        enum class Type {
            SCAN_FILE
        };
    }
}

// generic event
namespace Katastrof {
    namespace Events {
        struct Event {
            Type type;
        };
    }
}

// specific events
namespace Katastrof {
    namespace Events {
        struct ScanFile : public Event {
            const char* path;
        };
    }
}

#endif
