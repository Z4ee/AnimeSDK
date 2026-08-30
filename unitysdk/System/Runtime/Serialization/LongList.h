#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1BE28880)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_ENLARGEARRAY_OFFSET UNITYSDK_OFFSET(0x1BE28950)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BE289D0)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE28A60)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE289F0)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_REMOVEELEMENT_OFFSET UNITYSDK_OFFSET(0x1BE28A90)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_STARTENUMERATION_OFFSET UNITYSDK_OFFSET(0x1BE289E0)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE28850)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE28810)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int LongList_TypeDefinitionIndex = 1113;

	class LongList : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int64>* m_values; // 0x10
		::System::Int32 m_count; // 0x18
		::System::Int32 m_currentItem; // 0x1C
		::System::Int32 m_totalItems; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Add(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_ADD_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Void StartEnumeration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_STARTENUMERATION_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_MOVENEXT_OFFSET))(this);
		}

		::System::Int64 get_Current()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean RemoveElement(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_REMOVEELEMENT_OFFSET))(this, a1);
		}

		::System::Void EnlargeArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_ENLARGEARRAY_OFFSET))(this);
		}
	};
}
