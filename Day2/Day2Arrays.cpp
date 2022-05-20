#include <iostream>
using namespace std;

int main()
{
    // looping through elements of an array
    /*SYNTAX:
    for ( dataType var : arrayName ) {

}
    */
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    for (int i : arr)
    { // for each loop
        cout << i << "\t";
    }

    
}