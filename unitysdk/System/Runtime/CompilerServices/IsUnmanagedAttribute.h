#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF37CC0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsUnmanagedAttribute_TypeDefinitionIndex = 88192;

	class IsUnmanagedAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
