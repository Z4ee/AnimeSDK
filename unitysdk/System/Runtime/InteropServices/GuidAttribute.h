#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_GUIDATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A825F00)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GUIDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A825EF0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int GuidAttribute_TypeDefinitionIndex = 1407;

	class GuidAttribute : public ::System::Attribute
	{
	public:
		::System::String* _val; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GUIDATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GUIDATTRIBUTE_GET_VALUE_OFFSET))(this);
		}
	};
}
