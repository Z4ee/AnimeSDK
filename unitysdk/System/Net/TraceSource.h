#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_TRACESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A25F5B0)

namespace System::Net
{
	inline static constexpr unsigned int TraceSource_TypeDefinitionIndex = 3489;

	class TraceSource : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACESOURCE__CTOR_OFFSET))(this);
		}
	};
}
