#include <iostream>
#include <string>
#include "template.hpp"

template<>
void my_temp_fun<float>(const float& v) {
	std::cout << v << " is float. " << std::endl;
}

template<>
void my_temp_fun<std::string>(const std::string& v) {
	std::cout << v << " is float. " << std::endl;
}