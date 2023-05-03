#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a positive number: ";

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

    for( int number = 1; number * number <= positive_number; number++)
    {
        if ( positive_number % number == 0)
        {

            smaller_factor = number;
        }
    }


    bigger_factor = positive_number / smaller_factor;
    cout << positive_number << " = " << smaller_factor
         << " * " << bigger_factor << endl;

    return 0;
}
