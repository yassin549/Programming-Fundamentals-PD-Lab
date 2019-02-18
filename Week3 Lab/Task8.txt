#include <iostream>
using namespace std;
int main(){

int mb;
int bits;

cout << "Enter numeber of megabytes: ";
cin >> mb;

bits = mb * 1024 * 1024 * 8;

cout << "Number of bits are: " << bits;



return 0;}