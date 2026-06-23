#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1ADCB960)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_ENLARGEARRAY_OFFSET UNITYSDK_OFFSET(0x1ADCBA30)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ADCBB40)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ADCBAC0)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_REMOVEELEMENT_OFFSET UNITYSDK_OFFSET(0x1ADCBB80)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_STARTENUMERATION_OFFSET UNITYSDK_OFFSET(0x1ADCBAB0)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ADCB910)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCB8C0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int LongList_TypeDefinitionIndex = 1152;

	class LongList : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int64>* m_values; // 0x10
		::System::Int32 m_totalItems; // 0x18
		::System::Int32 m_count; // 0x1C
		::System::Int32 m_currentItem; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 startingSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST__CTOR_1_OFFSET))(this, startingSize);
		}

		::System::Void Add(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_ADD_OFFSET))(this, value);
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

		::System::Boolean RemoveElement(::System::Int64 value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_REMOVEELEMENT_OFFSET))(this, value);
		}

		::System::Void EnlargeArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_ENLARGEARRAY_OFFSET))(this);
		}
	};
}
