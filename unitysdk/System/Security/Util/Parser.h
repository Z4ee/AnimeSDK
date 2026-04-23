#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security { class SecurityDocument; }
namespace System::Security { class SecurityElement; }
namespace System::Security::Util { class Tokenizer; }
namespace System::Security::Util { class TokenizerStream; }

#define SYSTEM_SECURITY_UTIL_PARSER_DETERMINEFORMAT_OFFSET UNITYSDK_OFFSET(0x1781D4A0)
#define SYSTEM_SECURITY_UTIL_PARSER_GETREQUIREDSIZES_OFFSET UNITYSDK_OFFSET(0x1781C110)
#define SYSTEM_SECURITY_UTIL_PARSER_GETTOPELEMENT_OFFSET UNITYSDK_OFFSET(0x1781C0E0)
#define SYSTEM_SECURITY_UTIL_PARSER_PARSECONTENTS_OFFSET UNITYSDK_OFFSET(0x1781ECC0)
#define SYSTEM_SECURITY_UTIL_PARSER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1781F3B0)
#define SYSTEM_SECURITY_UTIL_PARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1781F270)

namespace System::Security::Util
{
	inline static constexpr unsigned int Parser_TypeDefinitionIndex = 968;

	class Parser : public ::System::Object
	{
	public:
		::System::Security::Util::Tokenizer* _t; // 0x10
		::System::Security::SecurityDocument* _doc; // 0x18

		::System::Void _ctor(::System::Security::Util::Tokenizer* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Util::Tokenizer*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER__CTOR_OFFSET))(this, t);
		}

		::System::Void _ctor_1(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER__CTOR_1_OFFSET))(this, input);
		}

		::System::Security::SecurityElement* GetTopElement()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER_GETTOPELEMENT_OFFSET))(this);
		}

		::System::Void GetRequiredSizes(::System::Security::Util::TokenizerStream* stream, ::System::Int32& index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Util::TokenizerStream*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER_GETREQUIREDSIZES_OFFSET))(this, stream, index);
		}

		::System::Int32 DetermineFormat(::System::Security::Util::TokenizerStream* stream)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::Util::TokenizerStream*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER_DETERMINEFORMAT_OFFSET))(this, stream);
		}

		::System::Void ParseContents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER_PARSECONTENTS_OFFSET))(this);
		}
	};
}
