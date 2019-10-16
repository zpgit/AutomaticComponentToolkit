/*++

Copyright (C) 2019 Special Numbers developers

All rights reserved.

This file has been generated by the Automatic Component Toolkit (ACT) version 1.7.0-develop.

Abstract: This is an autogenerated C++ application that demonstrates the
 usage of the Dynamic C++ bindings of Special Numbers library

Interface version: 1.0.0

*/

#include <iostream>
#include "special_dynamic.hpp"


int main()
{
	try
	{
		std::string libpath = (""); // TODO: put the location of the Special-library file here.
		auto wrapper = Special::CWrapper::loadLibrary(libpath + "/special."); // TODO: add correct suffix of the library
		Special_uint32 nMajor, nMinor, nMicro;
		wrapper->GetVersion(nMajor, nMinor, nMicro);
		std::cout << "Special.Version = " << nMajor << "." << nMinor << "." << nMicro;
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}
	return 0;
}

