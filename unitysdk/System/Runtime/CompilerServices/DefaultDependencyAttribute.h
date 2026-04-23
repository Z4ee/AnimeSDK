#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Runtime/CompilerServices/LoadHint.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_DEFAULTDEPENDENCYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x179BEE50)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int DefaultDependencyAttribute_TypeDefinitionIndex = 1368;

	class DefaultDependencyAttribute : public ::System::Attribute
	{
	public:
		::System::Runtime::CompilerServices::LoadHint loadHint; // 0x10

		::System::Void _ctor(::System::Runtime::CompilerServices::LoadHint loadHintArgument)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::LoadHint))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_DEFAULTDEPENDENCYATTRIBUTE__CTOR_OFFSET))(this, loadHintArgument);
		}
	};
}
