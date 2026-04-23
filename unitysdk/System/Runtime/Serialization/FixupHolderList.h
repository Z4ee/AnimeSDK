#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization { class FixupHolder; }

#define SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x179F5330)
#define SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST_ENLARGEARRAY_OFFSET UNITYSDK_OFFSET(0x179F5460)
#define SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179F52E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x179F5290)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int FixupHolderList_TypeDefinitionIndex = 1104;

	class FixupHolderList : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Runtime::Serialization::FixupHolder*>* m_values; // 0x10
		::System::Int32 m_count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 startingSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST__CTOR_1_OFFSET))(this, startingSize);
		}

		::System::Void Add(::System::Runtime::Serialization::FixupHolder* fixup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::FixupHolder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST_ADD_OFFSET))(this, fixup);
		}

		::System::Void EnlargeArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST_ENLARGEARRAY_OFFSET))(this);
		}
	};
}
