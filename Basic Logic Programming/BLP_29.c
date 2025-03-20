//29.Convert minutes into seconds and hours 

#include <stdio.h>

int main() {
    int minutes, hours, remaining_minutes, seconds;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;          
    remaining_minutes = minutes % 60; 
    seconds = minutes * 60;         

    printf("%d minutes is approximately %d hour(s) and %d minute(s).\n", minutes, hours, remaining_minutes);
    printf("Total seconds: %d\n", seconds);

    return 0;
}

