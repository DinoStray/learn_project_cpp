//
// Created by Mario Lee on 2018/1/8.
//

#include <catch.hpp>
#include "utils.h"


using namespace std;

int utils::random_integer_array[] = {23, 23, 44, 848, 79,
								88, 10, 23, 44, 86};

void utils::print_array(int *array, int n)
{
	for (int i = 0; i < n; ++i) {
		cout << array[i] << " ";
	}
	cout << endl;
}

TEST_CASE("utils::print_array") {
	int array[] = {10, 20, 30, 40};
	utils::print_array(array, 4);
}
