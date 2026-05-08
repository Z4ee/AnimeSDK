#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/UriParser.h"

#define SYSTEM_GOPHERSTYLEURIPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE0D90)

namespace System
{
	inline static constexpr unsigned int GopherStyleUriParser_TypeDefinitionIndex = 2684;

	class GopherStyleUriParser : public ::System::UriParser
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GOPHERSTYLEURIPARSER__CTOR_OFFSET))(this);
		}
	};
}
