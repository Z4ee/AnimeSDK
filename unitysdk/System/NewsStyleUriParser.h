#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/UriParser.h"

#define SYSTEM_NEWSSTYLEURIPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C309930)

namespace System
{
	inline static constexpr unsigned int NewsStyleUriParser_TypeDefinitionIndex = 2682;

	class NewsStyleUriParser : public ::System::UriParser
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NEWSSTYLEURIPARSER__CTOR_OFFSET))(this);
		}
	};
}
