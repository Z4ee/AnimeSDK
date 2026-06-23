#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class ListDictionary; }
namespace System::Collections::Specialized { class ListDictionary_DictionaryNode; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CAE85C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x1CAE8670)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1CAE86F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CAE8770)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CAE87F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CAE88A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAE8590)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int ListDictionary_NodeEnumerator_TypeDefinitionIndex = 3914;

	class ListDictionary_NodeEnumerator : public ::System::Object
	{
	public:
		::System::Collections::Specialized::ListDictionary* list; // 0x10
		::System::Collections::Specialized::ListDictionary_DictionaryNode* current; // 0x18
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
