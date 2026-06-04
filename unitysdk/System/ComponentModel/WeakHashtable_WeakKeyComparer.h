#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_WEAKKEYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AF40050)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_WEAKKEYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AF401B0)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_WEAKKEYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF40040)

namespace System::ComponentModel
{
	inline static constexpr unsigned int WeakHashtable_WeakKeyComparer_TypeDefinitionIndex = 2643;

	class WeakHashtable_WeakKeyComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_WEAKKEYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IEqualityComparer_Equals(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_WEAKKEYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 System_Collections_IEqualityComparer_GetHashCode(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_WEAKKEYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
