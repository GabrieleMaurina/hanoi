#ifndef HANOI_H
#define HANOI_H

#include <iostream>
#include <stack>

using namespace std;

class Hanoi {
	private:
		int size;
		stack<int> stacks[3];
	public:
		Hanoi(int);
		int get_size();
		stack<int>* get_stacks();
		void print();
};

#endif
