#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xD0E3F20)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsUnmanagedAttribute_TypeDefinitionIndex = 44410;

	class IsUnmanagedAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
