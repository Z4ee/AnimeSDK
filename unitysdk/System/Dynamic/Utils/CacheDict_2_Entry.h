#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int CacheDict_2_Entry_TypeDefinitionIndex = 3675;

	template <typename TKey, typename TValue>
	class CacheDict_2_Entry : public ::System::Object
	{
	public:
		::System::Int32 _hash; // 0x0
		TKey _key; // 0x0
		TValue _value; // 0x0
	};
}
