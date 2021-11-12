#pragma once
#include <iostream>
#include <map>
#include "Device.h"
#include "DeviceId.h"

namespace DeviceModel {
	class DeviceTable
	{
		std::map<DeviceId, Device>* devices;
		std::size_t refCount;
	public:
		std::map<DeviceId, Device>& getDevices();
	};
}
