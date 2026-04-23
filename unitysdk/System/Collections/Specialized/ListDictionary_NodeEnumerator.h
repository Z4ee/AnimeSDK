#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class ListDictionary; }
namespace System::Collections::Specialized { class ListDictionary_DictionaryNode; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A0B34C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x1A0B3550)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1A0B35D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A0B3650)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A0B36D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A0B3780)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B3430)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int ListDictionary_NodeEnumerator_TypeDefinitionIndex = 2979;

	class ListDictionary_NodeEnumerator : public ::System::Object
	{
	public:
		::System::Collections::Specialized::ListDictionary_DictionaryNode* current; // 0x10
		::System::Collections::Specialized::ListDictionary* list; // 0x18
		::System::Int32 version; // 0x20
		::System::Boolean start; // 0x24

		::System::Void _ctor(::System::Collections::Specialized::ListDictionary* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::ListDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR__CTOR_OFFSET))(this, list);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::DictionaryEntry get_Entry()
		{
			return ((::System::Collections::DictionaryEntry(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_GET_ENTRY_OFFSET))(this);
		}

		::System::Object* get_Key()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_GET_KEY_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
