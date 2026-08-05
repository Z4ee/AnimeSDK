#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/UriParser.h"

#define SYSTEM_NETTCPSTYLEURIPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7177A0)

namespace System
{
	inline static constexpr unsigned int NetTcpStyleUriParser_TypeDefinitionIndex = 2686;

	class NetTcpStyleUriParser : public ::System::UriParser
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NETTCPSTYLEURIPARSER__CTOR_OFFSET))(this);
		}
	};
}
