#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_DICTIONARYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B3390)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int ListDictionary_DictionaryNode_TypeDefinitionIndex = 2982;

	class ListDictionary_DictionaryNode : public ::System::Object
	{
	public:
		::System::Object* key; // 0x10
		::System::Object* value; // 0x18
		::System::Collections::Specialized::ListDictionary_DictionaryNode* next; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_DICTIONARYNODE__CTOR_OFFSET))(this);
		}
	};
}
