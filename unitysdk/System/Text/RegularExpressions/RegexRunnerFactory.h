#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text::RegularExpressions { class RegexRunner; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNERFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB08D80)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexRunnerFactory_TypeDefinitionIndex = 2749;

	class RegexRunnerFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNERFACTORY__CTOR_OFFSET))(this);
		}
	};
}
