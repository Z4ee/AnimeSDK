#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace Utf8Json::Internal { template <typename T> class ThreadsafeTypeKeyHashTable_1_Entry; }

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int ThreadsafeTypeKeyHashTable_1_Entry_TypeDefinitionIndex = 95178;

	template <typename TValue>
	class ThreadsafeTypeKeyHashTable_1_Entry : public ::System::Object
	{
	public:
		::System::Type* Key; // 0x0
		TValue Value; // 0x0
		::System::Int32 Hash; // 0x0
		::Utf8Json::Internal::ThreadsafeTypeKeyHashTable_1_Entry<TValue>* Next; // 0x0
	};
}
