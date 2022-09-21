#ifndef HANOI_H
#define HANOI_H

#include <iostream>
#include <vector>

using namespace std;

class Hanoi {
	private:
		int size;
		vector<vector<int>> stacks = vector<vector<int>>(3);
	public:
		Hanoi(int);
		int get_size();
		vector<vector<int>> get_stacks();
		void print();
		void move_disk(int, int);
		void move_tower(int, int, int);
};

#endif
