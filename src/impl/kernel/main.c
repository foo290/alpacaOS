#include "print.h"

void kernel_main()
{
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);

    print_str(
        "Welcome to alpacaOS 64-bit kernel 1.0."
    );
}