#include <stdio.h>

int main() {
    float height, width;
    float total_inches, total_feet;

    // Each bookcase has:
    // - Top and bottom boards = 2
    // - 3 shelves = 3 boards
    // Total = 5 horizontal boards (width each)
    // Plus 2 vertical side boards (height each)

    printf("Enter the height of the bookcase (in inches): ");
    scanf("%f", &height);

    printf("Enter the width of the bookcase (in inches): ");
    scanf("%f", &width);

    // Total board length in inches
    total_inches = (5 * width) + (2 * height);

    // Convert to feet (12 inches = 1 foot)
    total_feet = total_inches / 12;

    printf("\nTotal board length required: %.2f feet\n", total_feet);

    return 0;
}
