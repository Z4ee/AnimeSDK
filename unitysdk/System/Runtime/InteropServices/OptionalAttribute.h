#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_OPTIONALATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1637DCE0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int OptionalAttribute_TypeDefinitionIndex = 1406;

	class OptionalAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_OPTIONALATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
