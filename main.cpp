#include <iostream>
#include "hanoi.h"

using namespace std;

int main(){
	Hanoi hanoi(3);
	hanoi.print();
	hanoi.move_tower(0, 2, 0);
}
