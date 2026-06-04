#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"

#define SYSTEM_NET_INTERNALEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF96320)

namespace System::Net
{
	inline static constexpr unsigned int InternalException_TypeDefinitionIndex = 2736;

	class InternalException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTERNALEXCEPTION__CTOR_OFFSET))(this);
		}
	};
}
