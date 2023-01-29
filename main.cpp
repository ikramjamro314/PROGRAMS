/*5. Use for loops to construct a program that displays a pyramid of Xs on the screen. The
pyramid should look like this
X
XXX
XXXXX
XXXXXXX
XXXXXXXXX
except that it should be 20 lines high, instead of the 5 lines shown here. One way to do
this is to nest two inner loops, one to print spaces and one to print Xs, inside an outer
loop that steps down the screen from line to line.*/
#include <iostream>
#include <iomanip>
using namespace  std;
int main() {
    int a,b,c;
    int value=20;
for(int a=1;a<=value;a++) {
    for (b = 1; b < value - a; b++) {
        cout << "  ";
    }
        for (c = 1; c < 2 * a - 1; c++) {
            cout <<" X";
        }
        cout << endl;
    }
    return 0;
}