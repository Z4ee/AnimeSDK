#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/UriParser.h"

#define SYSTEM_NETPIPESTYLEURIPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7EBC30)

namespace System
{
	inline static constexpr unsigned int NetPipeStyleUriParser_TypeDefinitionIndex = 2685;

	class NetPipeStyleUriParser : public ::System::UriParser
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NETPIPESTYLEURIPARSER__CTOR_OFFSET))(this);
		}
	};
}
