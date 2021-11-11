#pragma once
#include <functional>
#include <stdexcept>

namespace Ext
{
	template <class T>
	class Channel
	{
	private:
		std::function<bool()> sourceIsAtEnd;
		std::function<T()> sourceGetNext;

	public:
		Channel();
		Channel(std::function<bool()> sourceIsAtEnd, std::function<T()> sourceGetNext);

		inline bool isAtEnd();
		inline T getNext();
	};

	template<class T>
	Channel<T>::Channel()
	{
		sourceIsAtEnd = std::function<bool()>([]() { return true; });
	}
	template<class T>
	Channel<T>::Channel(std::function<bool()> sourceIsAtEnd, std::function<T()> sourceGetNext)
	{
		this->sourceIsAtEnd = sourceIsAtEnd;
		this->sourceGetNext = sourceGetNext;
	}

	template<class T>
	bool Channel<T>::isAtEnd()
	{
		return sourceIsAtEnd();
	}
	template<class T>
	T Channel<T>::getNext()
	{
		if (sourceIsAtEnd())
			throw std::out_of_range("Cannot get next element because channel is at end!");
		return sourceGetNext();
	}
}
