#include <iostream>
using namespace std;

int main()
{

    /*
   step1: take a number.
   step2: make a temp variable and set it to 0.
   step3: run the while loop until the number you took is not zero.
   step4: extract the reminder and
   step5: use the formula reverse = reverse * 10 + remainder
   step5: remove the last bit of number (num/10)
   step6: number stored in reverse at the end is your result
    */
    int num, temp = 0;
    int reverse = 0;
    cout << "Enter a number:";
    cin >> num;

    temp = num;

    while (num != 0)
    {
        int rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    cout << "Reverse:" << reverse << endl;

    return 0;
}