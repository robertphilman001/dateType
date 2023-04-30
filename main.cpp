#include <iostream>
#include "dateType.h"

using namespace std;

int main() {
    // Create a date object with default parameters
    dateType myDate;

    // Set the date to 12-31-1999
    myDate.setDate(12, 31, 1999);

    // Print the date in the format mm-dd-yyyy
    cout << "The date is ";
    myDate.printDate();
    cout << endl;

    // Print the number of days passed since the beginning of the year
    cout << "Days passed since the beginning of the year: " << myDate.daysPassed() << endl;

    // Print the number of days remaining in the year
    cout << "Days remaining in the year: " << myDate.daysRemaining() << endl;

    // Set the date to a future date using the number of days provided as input
    myDate.addDays(365);
    cout << "New date is ";
    myDate.printDate();
    cout << endl;

    return 0;
}
