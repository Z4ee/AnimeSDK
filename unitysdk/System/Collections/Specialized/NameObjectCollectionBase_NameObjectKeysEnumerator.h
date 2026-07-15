#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class NameObjectCollectionBase; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_NAMEOBJECTKEYSENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A85A830)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_NAMEOBJECTKEYSENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A85A610)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_NAMEOBJECTKEYSENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A85A7A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_NAMEOBJECTKEYSENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A859770)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NameObjectCollectionBase_NameObjectKeysEnumerator_TypeDefinitionIndex = 2989;

	class NameObjectCollectionBase_NameObjectKeysEnumerator : public ::System::Object
	{
	public:
		::System::Collections::Specialized::NameObjectCollectionBase* _coll; // 0x10
		::System::Int32 _version; // 0x18
		::System::Int32 _pos; // 0x1C

		::System::Void _ctor(::System::Collections::Specialized::NameObjectCollectionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NameObjectCollectionBase*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_NAMEOBJECTKEYSENUMERATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_NAMEOBJECTKEYSENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_NAMEOBJECTKEYSENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_NAMEOBJECTKEYSENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
