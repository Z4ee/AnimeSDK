#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization { class FixupHolder; }

#define SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1790FC60)
#define SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST_ENLARGEARRAY_OFFSET UNITYSDK_OFFSET(0x1790FD80)
#define SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1790FC10)
#define SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1790FBC0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int FixupHolderList_TypeDefinitionIndex = 1105;

	class FixupHolderList : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Runtime::Serialization::FixupHolder*>* m_values; // 0x10
		::System::Int32 m_count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Add(::System::Runtime::Serialization::FixupHolder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::FixupHolder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST_ADD_OFFSET))(this, a1);
		}

		::System::Void EnlargeArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST_ENLARGEARRAY_OFFSET))(this);
		}
	};
}
