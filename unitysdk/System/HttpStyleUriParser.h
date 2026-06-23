#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/UriParser.h"

#define SYSTEM_HTTPSTYLEURIPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0143B0)

namespace System
{
	inline static constexpr unsigned int HttpStyleUriParser_TypeDefinitionIndex = 2679;

	class HttpStyleUriParser : public ::System::UriParser
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HTTPSTYLEURIPARSER__CTOR_OFFSET))(this);
		}
	};
}
