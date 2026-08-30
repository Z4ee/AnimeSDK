#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int CollectionsMarshal_ListDummy_1_TypeDefinitionIndex = 35223;

	template <typename T>
	class CollectionsMarshal_ListDummy_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* Items; // 0x0
	};
}
