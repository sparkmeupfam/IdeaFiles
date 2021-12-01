/*

The Idea behind this program is to calculate simple interest via terminal.

Not finished yet!

*/
#include <iostream>

using namespace std;

int calc(int principle){

int total = 0;

total = 2*principle;

return total;

}

int main(){

int principle, total = 0;

cout << "Insert the initial amount: " << endl;

cin >> principle;

cout << "The total amount is: " << calc(principle) << endl;

return 0;

} 
