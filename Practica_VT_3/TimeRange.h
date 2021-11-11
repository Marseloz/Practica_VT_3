#pragma once
#include <ctime>

namespace Ext
{
	struct TimeRange
	{
	private:
		std::time_t from;
		std::time_t until;

	public:
		TimeRange();
		TimeRange(std::time_t from, std::time_t until);

		inline std::time_t getFrom() const;
		inline std::time_t getUntil() const;
		inline std::time_t getDuration() const;
	};

	std::time_t TimeRange::getFrom() const
	{
		return from;
	}
	std::time_t TimeRange::getUntil() const
	{
		return until;
	}
	std::time_t TimeRange::getDuration() const
	{
		return until - from;
	}
}
