#include <iostream>
#include "hanoi.h"

using namespace std;

int main(){
	Hanoi hanoi(5);
	cout<<hanoi.get_size()<<endl;
}
