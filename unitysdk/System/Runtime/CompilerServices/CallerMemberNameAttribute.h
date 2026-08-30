#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLERMEMBERNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDBB670)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CallerMemberNameAttribute_TypeDefinitionIndex = 1361;

	class CallerMemberNameAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLERMEMBERNAMEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
