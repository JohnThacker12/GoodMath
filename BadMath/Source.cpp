#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3) {
    //Bug 1 here we should add () for adding 3 scores
    return (i1 + i2 + i3) / 3.0f;
}

int main()
{
    int n1 = 0, n2 = 0, n3 = 0;
    cout << "This program calculates the average of three numbers." << endl;
    cout << "First number: "; cin >> n1;
    cout << "Second number: "; cin >> n2;
    //Bug 2 Here we should read into n3 not into n2
    cout << "Third number: "; cin >> n3;

    float a = average(n1, n2, n3);
    cout << setprecision(0) << fixed << "The average is " << a << endl;

    return 0;
}