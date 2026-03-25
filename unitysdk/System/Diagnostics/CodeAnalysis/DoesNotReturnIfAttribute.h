#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNIFATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x15D8C1B0)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int DoesNotReturnIfAttribute_TypeDefinitionIndex = 9379;

	class DoesNotReturnIfAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _ParameterValue_k__BackingField; // 0x10

		::System::Void _ctor(::System::Boolean parameterValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNIFATTRIBUTE__CTOR_OFFSET))(this, parameterValue);
		}
	};
}
