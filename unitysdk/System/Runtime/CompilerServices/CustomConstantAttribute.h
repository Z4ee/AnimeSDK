#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_CUSTOMCONSTANTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1876F9C0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CustomConstantAttribute_TypeDefinitionIndex = 1371;

	class CustomConstantAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CUSTOMCONSTANTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
