#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic::Utils { template <typename T1, typename T2> class CacheDict_2_Entry; }

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int CacheDict_2_TypeDefinitionIndex = 3674;

	template <typename TKey, typename TValue>
	class CacheDict_2 : public ::System::Object
	{
	public:
		::System::Int32 _mask; // 0x0
		::Il2CppArray<::System::Dynamic::Utils::CacheDict_2_Entry<TKey, TValue>*>* _entries; // 0x0
	};
}
