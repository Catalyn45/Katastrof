#ifndef _K_UTILS_H_
#define _K_UTILS_H_

#define CHECK(condition, return_value, message, ...) \
    if (!(condition)) {                              \
        logger->error(message __VA_OPT__(,) __VA_ARGS__);         \
        return return_value;                         \
    }

#endif
