#include "Output.h"

#include <iostream>
#include <string>

void print(const Field& field)
{
	int index = 1;
	auto& fields = field.fields;
	for (auto&& f : fields)
	{
		std::cout << std::to_string(f) << "\t";
		if (index % field.rowLength == 0)
			std::cout << std::endl;
		index++;
	}
}
