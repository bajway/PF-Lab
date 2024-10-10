/*A weather station records temperature in an array over the course of a week (7 days). Write a program
that calculates the average temperature of the week and identifies if any days had extreme temperatures
(above 40°C or below 0°C).*/

#include <stdio.h>
int main() {
    int temperatures[] = {25, 30, -2, 35, 42, 28, 10};
    int n = sizeof(temperatures) / sizeof(temperatures[0]);  // Number of days i.e 7
    float sum = 0.0;
    int extreme_days[7], extreme_count = 0;  // To store extreme temperature days

    // Calculating sum of temperatures and identifying extreme temperature days
    for (int i = 0; i < n; i++) {
        sum += temperatures[i];  
        // Checking if the temperature is extreme
        if (temperatures[i] > 40 || temperatures[i] < 0) {
            extreme_days[extreme_count++] = i + 1; 
        }
    }
    // Calculating average temperature
    float average = sum / n;
    printf("Average temperature: %.1f°C\n", average);

    // Printing the days with extreme temperatures
    if (extreme_count > 0) {
        printf("Extreme temperatures on day");
        if (extreme_count == 1) {
            printf(" %d.\n", extreme_days[0]); 
        } else {
            for (int i = 0; i < extreme_count; i++) {
                if (i == extreme_count - 1) {
                    printf(" and %d.\n", extreme_days[i]);  // Final day with 'and'
                } 
                else if (i == extreme_count - 2) {
                    printf(" %d", extreme_days[i]);  
                }
                else {
                    printf(" %d,", extreme_days[i]);  
                }
            }
        }
    } else {
        printf("No extreme temperatures recorded.\n");
    }

    return 0;
} //End main
