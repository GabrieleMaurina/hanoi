#include "hanoi.h"

Hanoi::Hanoi(int size){
	if (size > 0)
		this->size = size;
	else
		throw invalid_argument("Size must be greater than zero");
	for(int i=size; i > 0; i--)
		this->stacks[0].push_back(i);
}

int Hanoi::get_size(){
	return this->size;
}

vector<vector<int>> Hanoi::get_stacks(){
	return this->stacks;
}

void Hanoi::print(){
	for(int i=this->size-1; i>=0; i--){
		for(int j=0; j<3; j++)
			if(this->stacks[j].size() > i)
				cout<<this->stacks[j][i]<<'\t';
			else
				cout<<"|\t";
		cout<<endl;
	}
	cout<<"#################"<<endl;
}

void Hanoi::move_disk(int start, int end){
	if(start<3 && end <3 && start != end && this->stacks[start].size()){
		this->stacks[end].push_back(this->stacks[start].back());
		this->stacks[start].pop_back();
	}
	else
		throw invalid_argument("Invalid arguments for move_disk");
	this->print();
}

void Hanoi::move_tower(int start, int end, int height){
	if(start<3 && end <3 && start != end && this->stacks[start].size() && height < this->size){
		if(height == this->size-1)
			this->move_disk(start, end);
		else{
			int other = -1;
			for(int i=0; i<3; i++)
				if(start!=i && end!=i)
					other = i;
			this->move_tower(start, other, height+1);
			this->move_disk(start, end);
			this->move_tower(other, end, height+1);
		}
	}
	else
		throw invalid_argument("Invalid arguments for move_tower");
	
}
