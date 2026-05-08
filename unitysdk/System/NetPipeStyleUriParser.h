#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/UriParser.h"

#define SYSTEM_NETPIPESTYLEURIPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFEA7C0)

namespace System
{
	inline static constexpr unsigned int NetPipeStyleUriParser_TypeDefinitionIndex = 2686;

	class NetPipeStyleUriParser : public ::System::UriParser
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NETPIPESTYLEURIPARSER__CTOR_OFFSET))(this);
		}
	};
}
