#include "../includes/serializer.hpp"

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main(void) {
	Data testData;

	testData.number = 3;
	testData.text = "hello world";

	uintptr_t	pointer;
	pointer = serialize(&testData);
	Data *unserializedData = deserialize(pointer);
	
	std::cout << unserializedData->number << std::endl;
	std::cout << unserializedData->text << std::endl;
}
