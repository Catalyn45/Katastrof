#include "module.h"
#include "../core.h"
#include "file_scanner/file_scanner_module.h"

namespace Katastrof {
    Module::Module(Core* core)
        : core(core) {}

    Module* Module::create_module(Katastrof::Core* core, Modules module_type) {
        switch (module_type) {
        case Modules::FILE_SCANNER:
            return new FileScanner(core);
        }

        return nullptr;
    }
}
