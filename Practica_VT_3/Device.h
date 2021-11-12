#pragma once
#include <iostream>
#include <functional>
#include <iterator>
#include <set>
#include "DeviceId.h"
#include "TimeRange.h"
#include "Log.h"
#include "LogFormat.h"

namespace DeviceModel {
	class Device {
	private:
		DeviceId id;
		std::set<const float*>* ligs;
		std::size_t refCount;
	public:
		Device();
		Device(const LogFormat& format, const std::string& serial, std::function<ILogManager()> logManagerFactory);
		const DeviceId& getId();
		void addLog(const Log& log);
		void removeLog(std::time_t dt);
		void removeLogs(Ext::TimeRange range);
		std::iterator<Log> begin();
		std::iterator<Log> end();
		std::iterator<Log> getIteratorOnOrJustAfter(std::time_t dt);
	};
}


