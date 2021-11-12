#pragma once
#include <iostream>

namespace DeviceModel {
	class DeviceId
	{
		LogFormat format;
		std::string serial;
	public:
		const LogFormat& getFormat();
		const std::string& getSerial();
		bool operator == (const DeviceId& other);
		bool operator != (const DeviceId& other);
	};
}

