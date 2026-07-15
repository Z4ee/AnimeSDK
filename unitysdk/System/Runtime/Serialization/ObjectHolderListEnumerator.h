#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization { class ObjectHolder; }
namespace System::Runtime::Serialization { class ObjectHolderList; }

#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLISTENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18339230)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLISTENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18339140)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLISTENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x183390F0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ObjectHolderListEnumerator_TypeDefinitionIndex = 1108;

	class ObjectHolderListEnumerator : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::ObjectHolderList* m_list; // 0x10
		::System::Boolean m_isFixupEnumerator; // 0x18
		::System::Int32 m_startingVersion; // 0x1C
		::System::Int32 m_currPos; // 0x20

		::System::Void _ctor(::System::Runtime::Serialization::ObjectHolderList* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ObjectHolderList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLISTENUMERATOR__CTOR_OFFSET))(this, a1, a2);
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
