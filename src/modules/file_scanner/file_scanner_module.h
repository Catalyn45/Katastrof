#ifndef _K_FILE_SCANNER_H_
#define _K_FILE_SCANNER_H_

#include "../module.h"

namespace Katastrof {
    class FileScanner : public Module {
    public:
        FileScanner(Katastrof::Core* core);
        bool on_init();
        bool on_start();
        bool on_stop();
        bool on_close();
        bool on_event(Events::Event* event);
    };
}

#endif
