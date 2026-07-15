#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ListChangedEventArgs_1_TypeDefinitionIndex = 34072;

	template <typename T>
	class ListChangedEventArgs_1 : public ::System::EventArgs
	{
	public:
		::System::Int32 index; // 0x0
		T item; // 0x0
	};
}
