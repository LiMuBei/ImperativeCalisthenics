#pragma once
#include <vector>

struct Field
{
	std::vector<int> fields;
	int rowLength;
};

Field initializeField(const int size);
