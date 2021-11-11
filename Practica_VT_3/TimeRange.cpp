#include "TimeRange.h"
#include <stdexcept>

namespace Ext
{
	TimeRange::TimeRange()
	{
		from = until = 0;
	}
	TimeRange::TimeRange(std::time_t from, std::time_t until)
	{
		if (from > until)
			throw std::invalid_argument("Argument 'from' must not be greater than 'until'!");
		this->from = from;
		this->until = until;
	}
}
