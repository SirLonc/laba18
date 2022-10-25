#pragma once
#include <set>
#include <iostream>
#include <vector>



class mySet : public std::set<int> {
public: 
	void push_back(const int& obj)
	{
		this->insert(this->end(), obj);
	}
};

