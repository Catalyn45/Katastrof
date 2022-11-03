#include <iostream>
#include "logging.h"
#include "core.h"

static auto logger = Katastrof::Logger::get_logger();

int main() {
    Katastrof::Logger::config(Katastrof::Level::DEBUG);

    Katastrof::Core core;

    logger->info("initializing core");
    core.init();

    logger->info("starting core");
    core.start();

    logger->info("closing core");
    core.close();

    return 0;
}
