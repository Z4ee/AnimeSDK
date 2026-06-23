#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/Internal/ByteArrayStringHashTable_1_Entry.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int ByteArrayStringHashTable_1_TypeDefinitionIndex = 91233;

	template <typename T>
	class ByteArrayStringHashTable_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::Il2CppArray<::Utf8Json::Internal::ByteArrayStringHashTable_1_Entry<T>>*>* buckets; // 0x0
		::System::UInt64 indexFor; // 0x0
	};
}
