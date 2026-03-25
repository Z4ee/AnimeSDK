#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_NAMEOBJECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1867AAE0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NameObjectCollectionBase_NameObjectEntry_TypeDefinitionIndex = 2983;

	class NameObjectCollectionBase_NameObjectEntry : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::System::Object* Value; // 0x18

		::System::Void _ctor(::System::String* name, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_NAMEOBJECTENTRY__CTOR_OFFSET))(this, name, value);
		}
	};
}
