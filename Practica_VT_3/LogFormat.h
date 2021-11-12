#pragma once
#include <iostream>
#include <hash_map>

namespace DeviceModel {
	class LogFormat 
	{
		std::string name;
		std::hash_map<std::string, std::size_t> fieldNames;
		std::size_t refCount;
	public:
		LogFormat();
		LogFormat(const std::string& name, std::initializer_list<std::string> fieldNames);
		const std::string& getName();
		const std::hash_map<std::string, std::size_t>& getFieldNames();
		bool operator == (const LogFormat& other);
		bool operator != (const LogFormat& other);
	};
}


