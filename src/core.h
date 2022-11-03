#ifndef _K_CORE_H_
#define _K_CORE_H_

#include <vector>
#include "modules/module.h"

class Module;

namespace Katastrof {
    class Core {
    private:
        std::vector<Module*> modules;
    public:
        Core();
        bool init();
        bool close();
        bool start();
        bool register_module(Module* mod);
    };
}

#endif
