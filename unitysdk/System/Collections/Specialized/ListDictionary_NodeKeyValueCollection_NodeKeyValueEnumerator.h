#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class ListDictionary; }
namespace System::Collections::Specialized { class ListDictionary_DictionaryNode; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AF1D8C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AF1D910)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AF1D9A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF1D890)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator_TypeDefinitionIndex = 2981;

	class ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator : public ::System::Object
	{
	public:
		::System::Collections::Specialized::ListDictionary_DictionaryNode* current; // 0x10
		::System::Collections::Specialized::ListDictionary* list; // 0x18
		::System::Boolean start; // 0x20
		::System::Boolean isKeys; // 0x21
		::System::Int32 version; // 0x24

		::System::Void _ctor(::System::Collections::Specialized::ListDictionary* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::ListDictionary*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
