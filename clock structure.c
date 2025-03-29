#include <stdio.h>
#include <windows.h>
#include <time.h>

typedef struct data {
    int val;
    time_t tm;
} A;

int main() {
    A x, y;

    // Input for x
    printf("Enter value for x: ");
    scanf("%d", &x.val);
    time(&x.tm);  // Record current time

    // Input for y
    printf("Enter value for y: ");
    scanf("%d", &y.val);
    time(&y.tm);  // Record current time

    // Convert time to local time and print for x
    struct tm* local_x = localtime(&x.tm);
    char time_str_x[20];
    strftime(time_str_x, sizeof(time_str_x), "%a %I:%M %p", local_x);
    printf("x: value = %d, time = %s\n", x.val, time_str_x);

    // Convert time to local time and print for y
    struct tm* local_y = localtime(&y.tm);
    char time_str_y[20];
    strftime(time_str_y, sizeof(time_str_y), "%a %I:%M %p", local_y);
    printf("y: value = %d, time = %s\n", y.val, time_str_y);

    return 0;
}
