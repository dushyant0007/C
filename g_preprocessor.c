#include <stdio.h>
#define PI 3.1415
#define circleArea(r) (3.1415*(r)*(r))
#define circleArea_1(r) (PI*(r)*(r))

int main() {
    float radius, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = circleArea(radius);
    printf("Area = %.2f", area);
    printf("Current time: %d",__TIME__);   
    return 0;
}

// Predefined Macros

// Macro	Value
// __DATE__	A string containing the current date.
// __FILE__	A string containing the file name.
// __LINE__	An integer representing the current line number.
// __STDC__	If follows ANSI standard C, then the value is a nonzero integer.
// __TIME__	A string containing the current time.
