#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_SUPPRESSILDASMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDBBFB0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int SuppressIldasmAttribute_TypeDefinitionIndex = 1393;

	class SuppressIldasmAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_SUPPRESSILDASMATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
