#include "Serializer.hpp"

int main(void)
{
	Data* data = new Data;
	data->i = 103;
	data->str = "hey";

	uintptr_t ptr = Serializer::serialize(data);

	Data* newData = Serializer::deserialize(ptr);

	std::cout << newData->i << std::endl;
	std::cout << newData->str << std::endl;
	delete(data);
}
