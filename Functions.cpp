// The idea behind this program is to test functionality and multiply 2 numbers together.

#include <iostream>

using namespace std;

int calc(int a, int b){

int total = 0;

total = a*b;

return total;

}

int main(){

int a, b, total = 0;

cout << "Just checking functionality" << endl;

cout << "Pick 2 numbers you'd like to multiply together: " << endl;

cin >> a;

cin >> b;

total = calc(a, b);

cout << "The product of " << a << " and " << b << " is: " << total << endl;

return 0;

}
