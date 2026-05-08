#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization { class ObjectHolder; }
namespace System::Runtime::Serialization { class ObjectHolderListEnumerator; }

#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x195533A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_ENLARGEARRAY_OFFSET UNITYSDK_OFFSET(0x19553470)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_GETFIXUPENUMERATOR_OFFSET UNITYSDK_OFFSET(0x195534F0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19553350)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19553300)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ObjectHolderList_TypeDefinitionIndex = 1154;

	class ObjectHolderList : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Runtime::Serialization::ObjectHolder*>* m_values; // 0x10
		::System::Int32 m_count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 startingSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST__CTOR_1_OFFSET))(this, startingSize);
		}

		::System::Void Add(::System::Runtime::Serialization::ObjectHolder* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ObjectHolder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_ADD_OFFSET))(this, value);
		}

		::System::Runtime::Serialization::ObjectHolderListEnumerator* GetFixupEnumerator()
		{
			return ((::System::Runtime::Serialization::ObjectHolderListEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_GETFIXUPENUMERATOR_OFFSET))(this);
		}

		::System::Void EnlargeArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_ENLARGEARRAY_OFFSET))(this);
		}
	};
}
