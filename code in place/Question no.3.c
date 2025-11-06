#include <stdio.h>
#include <string.h>

int main() {
    char firstName[30] = "Aimen ";
    char lastName[] = "Aslam";

    strcat(firstName, lastName);

    printf("Full name after concatenation: %s\n", firstName);
    return 0;
}
