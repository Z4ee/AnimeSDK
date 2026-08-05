#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9BEE20)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int DoesNotReturnAttribute_TypeDefinitionIndex = 28678;

	class DoesNotReturnAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
