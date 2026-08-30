#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_EXTENSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C456850)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ExtensionAttribute_TypeDefinitionIndex = 1385;

	class ExtensionAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_EXTENSIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
