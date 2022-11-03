#include "core.h"
#include "modules/module.h"
#include "util/utils.h"
#include "logging.h"

namespace Katastrof {
    static auto logger = Logger::get_logger();

    Core::Core() {}

    bool Core::init() {
        auto mod = Module::create_module(this, Modules::FILE_SCANNER);
        this->register_module(mod);

        for (auto mod : this->modules) {
            CHECK(mod->on_init(), false, "Error initializing module");
        }

        return true;
    }

    bool Core::close() {
        for (auto mod : this->modules) {
            if (!mod->on_close())
                return false;
        }

        return true;
    }

    bool Core::start() {
        Events::ScanFile event;
        event.type = Events::Type::SCAN_FILE;
        event.path = "./test.txt";
        for (auto mod : this->modules) {
            if (!mod->on_event(&event))
                return false;
        }

        return true;
    }

    bool Core::register_module(Module* mod) { 
        this->modules.push_back(mod);
        return true;
    }
}
