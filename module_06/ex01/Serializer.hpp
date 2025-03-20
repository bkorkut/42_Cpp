#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>	// Can't use <cstdint> because std=c++98

struct Data;

class	Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &);
		Serializer &operator=(const Serializer &);
		~Serializer();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
