#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/GenericUriParserOptions.h"
#include "unitysdk/System/UriParser.h"
#include "unitysdk/System/UriSyntaxFlags.h"

#define SYSTEM_GENERICURIPARSER_MAPGENERICPARSEROPTIONS_OFFSET UNITYSDK_OFFSET(0x1A323360)
#define SYSTEM_GENERICURIPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A323220)

namespace System
{
	inline static constexpr unsigned int GenericUriParser_TypeDefinitionIndex = 2662;

	class GenericUriParser : public ::System::UriParser
	{
	public:
		// static const ::System::UriSyntaxFlags DefaultGenericUriParserFlags; // 0x0

		::System::Void _ctor(::System::GenericUriParserOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::GenericUriParserOptions))((::PBYTE)hIl2Cpp + SYSTEM_GENERICURIPARSER__CTOR_OFFSET))(this, options);
		}

		static ::System::UriSyntaxFlags MapGenericParserOptions(::System::GenericUriParserOptions options)
		{
			return ((::System::UriSyntaxFlags(*)(::System::GenericUriParserOptions))((::PBYTE)hIl2Cpp + SYSTEM_GENERICURIPARSER_MAPGENERICPARSEROPTIONS_OFFSET))(options);
		}
	};
}
