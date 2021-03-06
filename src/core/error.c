#include <melon/core/error.h>

////////////////////////////////////////////////////////////////////////////////
// Default logging callbacks
////////////////////////////////////////////////////////////////////////////////

#include <stdarg.h>

static void default_logger(const char* message, ...)
{
    va_list arg_list;
    va_start(arg_list, message);
    vfprintf(stderr, message, arg_list);
    va_end(arg_list);
}

melon_logger_callback_fp melon_logger_callback = default_logger;