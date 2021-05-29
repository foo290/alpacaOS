#include "print.h"

void print_seq(int spaces, char* seq)
{
    for (int i = 0; i < spaces; i++)
    {
        print_str(seq);
    }
}

void print_osinfo_text()
{
    print_seq(35, " ");
    print_str("Alpaca os\n");
    print_seq(80, "-");
    print_str("\n");
    print_str("\nWelcome to alpaca os.\n\n\n");
    print_seq(20, "-");
    print_str("\nBuild : apos01\nVersion : 1.0\n");
    print_seq(20, "-");
}
