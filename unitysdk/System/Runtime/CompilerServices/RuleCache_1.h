#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RuleCache_1_TypeDefinitionIndex = 4961;

	template <typename T>
	class RuleCache_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _rules; // 0x0
		::System::Object* _cacheLock; // 0x0
	};
}
