#include "Serializer.hpp"

Serializer::Serializer() {}
Serializer::Serializer(const Serializer &) {}
Serializer &Serializer::operator=(const Serializer &) { return *this; }
Serializer::~Serializer() {}

// Takes Data * and converts it to uintptr_t
uintptr_t	Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

// Takes uintptr_t and converts it to Data *
Data*	Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}
