#include <stdio.h>
#include <math.h>  // for ceil() function

int main() {
    int pages_per_report = 140;
    int people = 25;
    int extra_copies = 5;
    int total_people = people + extra_copies;
    int pages_per_ream = 500;

    // Total pages required
    int total_pages = pages_per_report * total_people;

    // Calculate required reams (rounding up)
    int reams_needed = ceil((double)total_pages / pages_per_ream);

    printf("Total pages needed: %d\n", total_pages);
    printf("Reams of paper required: %d\n", reams_needed);

    return 0;
}
