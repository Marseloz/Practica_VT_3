#pragma once

namespace DeviceModel {
	class LogInfo
	{
		std::time_t dt;
		Device device;
	public:
		LogInfo();
		LogInfo(const std::time_t dt, const Device& device);
		std::time_t getDT();
		const LogFormat& getFormat();
		const Device& getDevice();
	};
}
