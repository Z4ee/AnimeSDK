#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Diagnostics/DebuggableAttribute_DebuggingModes.h"

#define SYSTEM_DIAGNOSTICS_DEBUGGABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x178DED40)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggableAttribute_TypeDefinitionIndex = 1567;

	class DebuggableAttribute : public ::System::Attribute
	{
	public:
		::System::Diagnostics::DebuggableAttribute_DebuggingModes m_debuggingModes; // 0x10

		::System::Void _ctor(::System::Diagnostics::DebuggableAttribute_DebuggingModes modes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::DebuggableAttribute_DebuggingModes))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGABLEATTRIBUTE__CTOR_OFFSET))(this, modes);
		}
	};
}
