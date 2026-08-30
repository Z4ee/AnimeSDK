#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/ProviderData.h"

#define SYSTEM_RUNTIME_REMOTING_FORMATTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDCDCB0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int FormatterData_TypeDefinitionIndex = 1216;

	class FormatterData : public ::System::Runtime::Remoting::ProviderData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_FORMATTERDATA__CTOR_OFFSET))(this);
		}
	};
}
