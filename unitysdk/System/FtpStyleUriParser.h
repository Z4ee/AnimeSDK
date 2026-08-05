#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/UriParser.h"

#define SYSTEM_FTPSTYLEURIPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBD3F0)

namespace System
{
	inline static constexpr unsigned int FtpStyleUriParser_TypeDefinitionIndex = 2680;

	class FtpStyleUriParser : public ::System::UriParser
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FTPSTYLEURIPARSER__CTOR_OFFSET))(this);
		}
	};
}
