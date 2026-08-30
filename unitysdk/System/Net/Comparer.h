#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_COMPARER_SYSTEM_COLLECTIONS_ICOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1AB42040)
#define SYSTEM_NET_COMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB420E0)

namespace System::Net
{
	inline static constexpr unsigned int Comparer_TypeDefinitionIndex = 2799;

	class Comparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 System_Collections_IComparer_Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMPARER_SYSTEM_COLLECTIONS_ICOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
