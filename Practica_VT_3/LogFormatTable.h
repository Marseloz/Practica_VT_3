#pragma once
#include <iostream>
#include <hash_map>
#include "LogFormat.h"

namespace DeviceModel {
	class LogFormatTable
	{
		std::hash_map<std::string, LogFormat>* formats;
		std::size_t refCount;
	public:
		std::hash_map<std::string, LogFormat>& getFormats();
	};
}
