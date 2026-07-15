#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ListViewA_1_TypeDefinitionIndex = 6332;

	template <typename T>
	class ListViewA_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _items; // 0x0
	};
}
