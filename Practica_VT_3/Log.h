#pragma once
#include <hash_map>
#include "LogInfo.h"

namespace DeviceModel {
	class Log
	{
	LogInfo info;
	std::hash_map<std::string, float> fieldValues;
	public:
	Log(const LogInfo& info, const std::hash_map<std::string, float>& fieldValues);
	const LogInfo& getInfo();
	const std::hash_map<std::string, float>& getFiledValues();
	};
}
