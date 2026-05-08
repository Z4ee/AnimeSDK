#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A7D4E80)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x1A7D5120)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1A7D53A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A7D5500)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A7D5660)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A7D5740)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D4E40)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int OrderedDictionary_OrderedDictionaryEnumerator_TypeDefinitionIndex = 3929;

	class OrderedDictionary_OrderedDictionaryEnumerator : public ::System::Object
	{
	public:
		// static const ::System::Int32 Keys = 0x1; // 0x0
		// static const ::System::Int32 Values = 0x2; // 0x0
		// static const ::System::Int32 DictionaryEntry = 0x3; // 0x0
		::System::Collections::IEnumerator* arrayEnumerator; // 0x10
		::System::Int32 _objectReturnType; // 0x18

		::System::Void _ctor(::System::Collections::ArrayList* array, ::System::Int32 objectReturnType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR__CTOR_OFFSET))(this, array, objectReturnType);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::DictionaryEntry get_Entry()
		{
			return ((::System::Collections::DictionaryEntry(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_GET_ENTRY_OFFSET))(this);
		}

		::System::Object* get_Key()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_GET_KEY_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
