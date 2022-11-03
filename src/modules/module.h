#ifndef _K_MODULE_H_
#define _K_MODULE_H_

#include "../core.h"
#include "../events.h"

// all modules
namespace Katastrof {
    enum class Modules {
        FILE_SCANNER
    };
}

namespace Katastrof {
    class Core;

    class Module {
    protected:
        Core* core;
    public:
        Module(Core* core);
        virtual bool on_init() = 0;
        virtual bool on_start() = 0;
        virtual bool on_stop() = 0;
        virtual bool on_close() = 0;
        virtual bool on_event(Events::Event* event) = 0;

        static Module* create_module(Katastrof::Core* core, Modules module_type);
    };
}

#endif
