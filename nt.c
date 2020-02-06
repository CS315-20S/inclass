#include <stdio.h>

typedef struct {
    unsigned int val; // Suggest using an unsigned int rather than a string
    int width;
    int range_start;
    int range_end;
} nt_rep;

int nt_parse_params(char ** argv, nt_rep *nt) {
    // analyze arguments
    // check for failure

    // readable error checking style
    if (something bad hapened) {
        printf(something helpful)
        return -1;
    }
    happy path

    // Less readable error checking
    if (everything is ok) {
        do good stuff;
        if (still good) {
            happy path
        }
        else {
            printf(helpful error)
            return -1;
        }
    else {
        printf(helpful error)
        return -1;
    return 0;
}

// Main should be short, with just an outline
// A 500 line main function is hard to read
// Separation of concern
int main(int argc, char **argv) {
    nt_rep nt;
    nt_parse_params(argv, &nt);    
    nt_print_conversions(&nt);
}

