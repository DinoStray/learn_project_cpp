//
// Created by Mario Lee on 2018/1/8.
//

#include <catch.hpp>
#include "utils.h"

void insert_sort(int a[], int n)
{
	for (int i = 1; i < n; ++i) {
		if(a[i] < a[i-1]) {
			int x = a[i];
			a[i] = a[i - 1];

			int j = i - 1;
			while(x < a[j]) {
				a[j + 1] = a[j];
				j--;
			}
			a[j + 1] = x;
		}
	}
}

TEST_CASE("insert_sort")
{
	insert_sort(utils::random_integer_array, utils::ARRAY_SIZE);
	utils::print_array(utils::random_integer_array, utils::ARRAY_SIZE);
}