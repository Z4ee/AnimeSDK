#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_COMPILERGENERATEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDBB6B0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CompilerGeneratedAttribute_TypeDefinitionIndex = 1381;

	class CompilerGeneratedAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_COMPILERGENERATEDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
