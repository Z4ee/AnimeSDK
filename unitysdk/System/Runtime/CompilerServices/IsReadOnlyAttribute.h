#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18194370)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsReadOnlyAttribute_TypeDefinitionIndex = 7101;

	class IsReadOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
