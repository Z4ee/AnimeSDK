#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace Utf8Json::Internal { template <typename T> class ThreadsafeTypeKeyHashTable_1_Entry; }

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int ThreadsafeTypeKeyHashTable_1_TypeDefinitionIndex = 91244;

	template <typename TValue>
	class ThreadsafeTypeKeyHashTable_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::Utf8Json::Internal::ThreadsafeTypeKeyHashTable_1_Entry<TValue>*>* buckets; // 0x0
		::System::Int32 size; // 0x0
		::System::Object* writerLock; // 0x0
		::System::Single loadFactor; // 0x0
	};
}
