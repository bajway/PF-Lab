/*Create a program with a constant that defines the maximum allowable temperature (in
Celsius). Write a function to compare input temperatures and use a static variable to
count how many times temperatures exceeded the limit.*/
#include<stdio.h>
const int maxTemp = 40; //Defining max tempearature limit
void tempCompare(float t){
    static int count = 0;
    if (t> maxTemp)
    {
        count++;
        printf("%.2f exceeds the max temperature limit i.e %d\n", t, maxTemp);
    }
    else
        printf("%.2f does not exceeds the max temperature limit i.e %d\n", t, maxTemp);

    printf("temperature exceeds the limit %d times so far\n", count);
} //End function tempCompare
int main(){
    int n;
    float temp;
    printf("Enter the numer of readings: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the temperature %d reading:", i+1);
        scanf("%f", &temp);
        tempCompare(temp); //For comparison in each iteration
    }
    return 0;
}//End main
