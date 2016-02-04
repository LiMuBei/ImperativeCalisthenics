#include "Field.h"

#include <iostream>
#include <string>
#include <random>
#include <algorithm>
	
std::random_device rd;

Field initializeField(const int size)
{
	std::mt19937 gen(rd());
	Field field;
	field.rowLength = size;
	auto& fields = field.fields;
	fields.resize(size * size);
	std::uniform_real_distribution<> dis(0, 9);
	auto mineSeed = [&]() { return -1 - static_cast<int>(dis(gen) < 2); };
	std::generate(fields.begin(), fields.end(), mineSeed);
	return field;
}

void updateField(Field field, const std::pair<int, int> coordinates)
{
	auto& fields = field.fields;
	
}
