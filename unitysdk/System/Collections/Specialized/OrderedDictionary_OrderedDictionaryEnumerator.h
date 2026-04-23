#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A0B9BF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x1A0B9E80)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1A0BA0D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A0BA200)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A0BA330)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A0BA3E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ORDEREDDICTIONARYENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B98B0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int OrderedDictionary_OrderedDictionaryEnumerator_TypeDefinitionIndex = 2993;

	class OrderedDictionary_OrderedDictionaryEnumerator : public ::System::Object
	{
	public:
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
