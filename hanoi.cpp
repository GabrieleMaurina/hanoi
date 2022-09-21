#include "hanoi.h"

Hanoi::Hanoi(int size){
	if (size > 0)
		this->size = size;
	else
		throw invalid_argument("Size must be greater than zero");
}

int Hanoi::get_size(){
	return this->size;
}

stack<int>* Hanoi::get_stacks(){
	return this->stacks;
}

void Hanoi::print(){
	
}
