#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/ParameterInfo.h"

#define SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C439E40)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeParameterInfo_TypeDefinitionIndex = 627;

	class RuntimeParameterInfo : public ::System::Reflection::ParameterInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO__CTOR_OFFSET))(this);
		}
	};
}
