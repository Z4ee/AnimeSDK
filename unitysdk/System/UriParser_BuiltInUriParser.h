#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/UriParser.h"
#include "unitysdk/System/UriSyntaxFlags.h"

namespace System { class String; }

#define SYSTEM_URIPARSER_BUILTINURIPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x18779A20)

namespace System
{
	inline static constexpr unsigned int UriParser_BuiltInUriParser_TypeDefinitionIndex = 2467;

	class UriParser_BuiltInUriParser : public ::System::UriParser
	{
	public:
		::System::Void _ctor(::System::String* lwrCaseScheme, ::System::Int32 defaultPort, ::System::UriSyntaxFlags syntaxFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_BUILTINURIPARSER__CTOR_OFFSET))(this, lwrCaseScheme, defaultPort, syntaxFlags);
		}
	};
}
