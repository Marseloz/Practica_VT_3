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
		TimeRange() noexcept;
		TimeRange(std::time_t from, std::time_t until);

		inline std::time_t getFrom() const noexcept;
		inline std::time_t getUntil() const noexcept;
		inline std::time_t getDuration() const noexcept;
	};

	std::time_t TimeRange::getFrom() const noexcept
	{
		return from;
	}
	std::time_t TimeRange::getUntil() const noexcept
	{
		return until;
	}
	std::time_t TimeRange::getDuration() const noexcept
	{
		return until - from;
	}
}
