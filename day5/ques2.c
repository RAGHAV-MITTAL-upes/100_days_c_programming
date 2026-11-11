/* Write a program to input time in seconds and convert it to hours:minutes:seconds format. */
#include <stdio.h>

int main() {
    int total_sec;
    scanf("%d", &total_sec);
    int h = total_sec / 3600;
    int m = (total_sec % 3600) / 60;
    int s = total_sec % 60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
