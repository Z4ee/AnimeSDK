#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class ListDictionary; }
namespace System::Collections::Specialized { class ListDictionary_DictionaryNode; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C2DF5B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C2DF630)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C2DF6E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DF580)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator_TypeDefinitionIndex = 3916;

	class ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator : public ::System::Object
	{
	public:
		::System::Collections::Specialized::ListDictionary* list; // 0x10
		::System::Collections::Specialized::ListDictionary_DictionaryNode* current; // 0x18
		::System::Int32 version; // 0x20
		::System::Boolean isKeys; // 0x24
		::System::Boolean start; // 0x25

		::System::Void _ctor(::System::Collections::Specialized::ListDictionary* list, ::System::Boolean isKeys)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::ListDictionary*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_NODEKEYVALUEENUMERATOR__CTOR_OFFSET))(this, list, isKeys);
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
