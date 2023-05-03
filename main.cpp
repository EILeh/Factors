/* Factors
 *
 * Description
 *
 * Program asks the user to enter a positive number and checks that the number
 * is infact a zero or bigger. If number is smaller than zero, an error occurs
 * and program ends.
 *
 * If number is a positive number, program checks the factor of the number and
 * prints it to the user.
 *
 * Writer of the program
 *
 * Name: EILeh
 */



#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a positive number: ";

    // AN EXAMPLE: positive_number = 10
    int positive_number;
    cin >> positive_number;


    if ( positive_number <= 0 )
    {
        cout << "Only positive numbers accepted";
        return 0;

    }

    // Find factors that have the minimum difference
    int smaller_factor = 1;
    int bigger_factor = 1;

    // Goes through the user input as long as the number times by itself is
    // smaller or the same as positive_number.
    // AN EXAMPLE: first round: 1*1<=10
    // AN EXAMPLE: second round: 2*2(=4)<=10
    // AN EXAMPLE: third round: 3*3(=9)<=10
    // AN EXAMPLE: fourth round: 4*4(=16)>10
    for( int number = 1; number * number <= positive_number; number++)
    {
        // If the remainder of positive_number divided by number of zero, smal-
        // lest factor gets the value of number.
        // AN EXAMPLE: first round: 10%1=0
        // AN EXAMPLE: second round: 10%2=0
        // AN EXAMPLE: third round: 10%3=33333....
        if ( positive_number % number == 0)
        {
            // AN EXAMPLE: first round: smaller_factor = 1
            // AN EXAMPLE: second round: smaller_factor = 2
            smaller_factor = number;
        }
    }

    // Counts the bigger factor by dividing the input number with the number
    // stored in the variable smaller_factor.
    // AN EXAMPLE: bigger_factor = 10/2(=5)
    bigger_factor = positive_number / smaller_factor;

    // AN EXAMPLE: positive_number = 10, smaller_factor = 2, bigger_factor = 5
    cout << positive_number << " = " << smaller_factor
         << " * " << bigger_factor << endl;


    return 0;
}
