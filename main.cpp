#include "mySet.h"
#include "mySet.cpp"

int main() {
	mySet s;
	mySet s2;
	mySet result_comb;
	mySet result_intersection;
	mySet result_minus;

	s.insert(1);
	s.insert(2);
	s.insert(3);
	s2.insert(-1842);
	s2.insert(2);
	s2.insert(3);
	set_comb(s.begin(), s.end(), 
		s2.begin(), s2.end(), 
		std::back_inserter(result_comb));

	std::cout << "result of set combination ";
	for (int i : result_comb) {
		std::cout << i << ' ';
	}
	std::cout << '\n';


	set_intersection(s.begin(), s.end(),
		s2.begin(), s2.end(),
		std::back_inserter(result_intersection));
	std::cout << "result of set intersection ";
	for (int n : result_intersection) {
		std::cout << n << ' ';
	}
	std::cout << '\n';

	set_difference(s.begin(), s.end(),
		s2.begin(), s2.end(),
		std::back_inserter(result_minus));
	std::cout << "result of set difference ";
	for (int d : result_minus) {
		std::cout << d << ' ';
	}
}