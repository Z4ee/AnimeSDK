#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define XLUA_REFERENCEEQUALSCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1169B3E0)
#define XLUA_REFERENCEEQUALSCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1169B3F0)
#define XLUA_REFERENCEEQUALSCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1169B400)

namespace XLua
{
	inline static constexpr unsigned int ReferenceEqualsComparer_TypeDefinitionIndex = 46436;

	class ReferenceEqualsComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_REFERENCEEQUALSCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* o1, ::System::Object* o2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_REFERENCEEQUALSCOMPARER_EQUALS_OFFSET))(this, o1, o2);
		}

		::System::Int32 GetHashCode(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_REFERENCEEQUALSCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
