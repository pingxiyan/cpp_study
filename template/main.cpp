#include <iostream>
#include <string>

#include "template.hpp"

int main(int argc, char** argv) {
	my_temp_fun<float>(25.5);
	my_temp_fun<std::string>(std::string("str"));
	
	/*
	Compile fail: Severity	Code	Description	Project	File	Line	Suppression State
	Error	LNK2019	unresolved external symbol "void __cdecl my_temp_fun<int>(int const &)" (? ? $my_temp_fun@H@@YAXABH@Z) referenced in function _main
	*/
	// my_temp_fun<int>(25);  

	return 0;
}