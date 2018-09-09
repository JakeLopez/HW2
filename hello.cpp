#include <iostream>
#include <string>
using namespace std;

string myname = "Jacob E Lopez";

void message(string name) {
    cout << "My name is " << name << endl;
}

int main(void) {
    message(myname);
}
