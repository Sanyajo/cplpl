#include <iostream>
using namespace std;
int main()
{
    int lower = 1;
    int upper = 100;
    int middle;

    char answer;

    while( lower < upper )
    {
        middle = (upper + lower) / 2;

        do
        {
            cout << "Ваше число меньше или равно " << middle << "? (y/n)";
            cin >> answer;
        }
        while( answer != 'y' && answer != 'n' );

        if( answer == 'y' )
            upper = middle;
        else
            lower = middle + 1;

        cout << "[" << lower << " : " << upper << "]\n";
    }

    cout << "Ваше число  " << upper << "\n";

    return 0;
}