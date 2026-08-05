#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization { class ObjectHolder; }
namespace System::Runtime::Serialization { class ObjectHolderList; }

#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLISTENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C6E51A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLISTENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C6E50B0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLISTENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E5080)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ObjectHolderListEnumerator_TypeDefinitionIndex = 1154;

	class ObjectHolderListEnumerator : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::ObjectHolderList* m_list; // 0x10
		::System::Boolean m_isFixupEnumerator; // 0x18
		::System::Int32 m_currPos; // 0x1C
		::System::Int32 m_startingVersion; // 0x20

		::System::Void _ctor(::System::Runtime::Serialization::ObjectHolderList* list, ::System::Boolean isFixupEnumerator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ObjectHolderList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLISTENUMERATOR__CTOR_OFFSET))(this, list, isFixupEnumerator);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLISTENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Runtime::Serialization::ObjectHolder* get_Current()
		{
			return ((::System::Runtime::Serialization::ObjectHolder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLISTENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
