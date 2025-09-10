#include <iostream>
using namespace std;
int main() {
    int intNumber = 17;
    float floatNumber = 3.14;
    double doubleNumber = 45.1234;
    bool boolean = true;
    char charName = 'A';
    cout<<intNumber<<", size = "<<sizeof(intNumber)<<endl<<floatNumber<<", size = "<<sizeof(floatNumber)<<endl<<doubleNumber<<", size = "<<sizeof(doubleNumber)<<endl;
    cout<<boolean<<", size = "<<sizeof(boolean)<<endl;
    cout<<charName<<", size = "<<sizeof(charName)<<endl;
    return 0;
}