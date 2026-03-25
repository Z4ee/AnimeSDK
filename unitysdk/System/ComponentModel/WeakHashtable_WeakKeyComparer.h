#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_WEAKKEYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1869D750)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_WEAKKEYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1869D890)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_WEAKKEYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1869D740)

namespace System::ComponentModel
{
	inline static constexpr unsigned int WeakHashtable_WeakKeyComparer_TypeDefinitionIndex = 2642;

	class WeakHashtable_WeakKeyComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_WEAKKEYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IEqualityComparer_Equals(::System::Object* x, ::System::Object* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_WEAKKEYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 System_Collections_IEqualityComparer_GetHashCode(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_WEAKKEYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
