#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLERFILEPATHATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A823EE0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CallerFilePathAttribute_TypeDefinitionIndex = 1352;

	class CallerFilePathAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLERFILEPATHATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
