#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/ParameterInfo.h"

#define SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1C1AC320)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeParameterInfo_TypeDefinitionIndex = 598;

	class RuntimeParameterInfo : public ::System::Reflection::ParameterInfo
	{
	public:
		::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_METHOD_2_832295EC279E5994_OFFSET))(this);
		}
	};
}
