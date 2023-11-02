//write a program to calculate the energy bill.
//read starting and ending meter readings the charges are as follows:
//no. of units                  consumed rate in rs
//200-500                              3.50
//100-200                              2.50
//less than 100                        1.50
#include <stdio.h>
int main() 
{
    int start_reading, end_reading, units;
    double charge = 0.0;
    // Input the starting and ending meter readings
    printf("Enter the starting meter reading: ");
    scanf("%d", &start_reading);
    printf("Enter the ending meter reading: ");
    scanf("%d", &end_reading);
    // Calculate the number of units consumed
    units = end_reading - start_reading;
    // Calculate the energy bill based on the number of units consumed
    if (units > 500) {
        charge = units * 3.50;
    } else if (units >= 200) {
        charge = units * 2.50;
    } else if (units >= 100) {
        charge = units * 1.50;
    } else {
        printf("Invalid meter readings or units consumed.\n");
        return 0;
    }
    // Display the calculated energy bill
    printf("Energy Bill: Rs. %.2lf\n", charge);
    return 0;
}