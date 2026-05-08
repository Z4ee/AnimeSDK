#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/Internal/ByteArrayStringHashTable_1_Entry.h"

namespace System { class String; }
namespace Utf8Json::Internal { template <typename T> class ByteArrayStringHashTable_1; }

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int ByteArrayStringHashTable_1__GetEnumerator_d__10_TypeDefinitionIndex = 85661;

	template <typename T>
	class ByteArrayStringHashTable_1__GetEnumerator_d__10 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Collections::Generic::KeyValuePair_2<::System::String*, T> __2__current; // 0x0
		::Utf8Json::Internal::ByteArrayStringHashTable_1<T>* __4__this; // 0x0
		::Il2CppArray<::Il2CppArray<::Utf8Json::Internal::ByteArrayStringHashTable_1_Entry<T>>*>* __7__wrap1; // 0x0
		::System::Int32 __7__wrap2; // 0x0
		::Il2CppArray<::Utf8Json::Internal::ByteArrayStringHashTable_1_Entry<T>>* __7__wrap3; // 0x0
		::System::Int32 __7__wrap4; // 0x0
	};
}
