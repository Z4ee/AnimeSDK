#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define XLUA_REFERENCEEQUALSCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0xFA012F0)
#define XLUA_REFERENCEEQUALSCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFA01300)
#define XLUA_REFERENCEEQUALSCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xFA01310)

namespace XLua
{
	inline static constexpr unsigned int ReferenceEqualsComparer_TypeDefinitionIndex = 50575;

	class ReferenceEqualsComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_REFERENCEEQUALSCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_REFERENCEEQUALSCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_REFERENCEEQUALSCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
