#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_COMPARER_SYSTEM_COLLECTIONS_ICOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x186B7D70)
#define SYSTEM_NET_COMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x186B7E10)

namespace System::Net
{
	inline static constexpr unsigned int Comparer_TypeDefinitionIndex = 2787;

	class Comparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 System_Collections_IComparer_Compare(::System::Object* ol, ::System::Object* or)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMPARER_SYSTEM_COLLECTIONS_ICOMPARER_COMPARE_OFFSET))(this, ol, or);
		}
	};
}
