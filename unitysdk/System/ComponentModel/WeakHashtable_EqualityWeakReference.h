#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/WeakReference.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_EQUALITYWEAKREFERENCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BEC0B20)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_EQUALITYWEAKREFERENCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BEC0BF0)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_EQUALITYWEAKREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC0AD0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int WeakHashtable_EqualityWeakReference_TypeDefinitionIndex = 3027;

	class WeakHashtable_EqualityWeakReference : public ::System::WeakReference
	{
	public:
		::System::Int32 _hashCode; // 0x18

		::System::Void _ctor(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_EQUALITYWEAKREFERENCE__CTOR_OFFSET))(this, o);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_EQUALITYWEAKREFERENCE_EQUALS_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_EQUALITYWEAKREFERENCE_GETHASHCODE_OFFSET))(this);
		}
	};
}
