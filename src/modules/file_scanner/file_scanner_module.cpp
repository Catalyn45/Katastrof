#include "file_scanner_module.h"
#include "../../logging.h"
#include <iostream>


namespace Katastrof {
    static auto logger = Logger::get_logger();

    FileScanner::FileScanner(Katastrof::Core* core):
            Module(core) {}

    bool FileScanner::on_init() {
        return true;
    }

    bool FileScanner::on_start() {
        return true;
    }

    bool FileScanner::on_stop() {
        return true;
    }

    bool FileScanner::on_close() {
        return true;
    }

    bool FileScanner::on_event(Events::Event* event) {
        switch (event->type) {
            case Events::Type::SCAN_FILE:
            {
                Events::ScanFile* scan_file = (Events::ScanFile*)(void*)event;
                logger->debug("event scan file with path: %s", scan_file->path);
                break;
            }
        }

        return true;
    }
}
