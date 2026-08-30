#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security { class SecurityDocument; }
namespace System::Security { class SecurityElement; }
namespace System::Security::Util { class Tokenizer; }
namespace System::Security::Util { class TokenizerStream; }

#define SYSTEM_SECURITY_UTIL_PARSER_DETERMINEFORMAT_OFFSET UNITYSDK_OFFSET(0x166DAD30)
#define SYSTEM_SECURITY_UTIL_PARSER_GETREQUIREDSIZES_OFFSET UNITYSDK_OFFSET(0x166D97F0)
#define SYSTEM_SECURITY_UTIL_PARSER_GETTOPELEMENT_OFFSET UNITYSDK_OFFSET(0x166D97C0)
#define SYSTEM_SECURITY_UTIL_PARSER_PARSECONTENTS_OFFSET UNITYSDK_OFFSET(0x166DCAD0)
#define SYSTEM_SECURITY_UTIL_PARSER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x166DD560)
#define SYSTEM_SECURITY_UTIL_PARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x166DD420)

namespace System::Security::Util
{
	inline static constexpr unsigned int Parser_TypeDefinitionIndex = 974;

	class Parser : public ::System::Object
	{
	public:
		::System::Security::Util::Tokenizer* _t; // 0x10
		::System::Security::SecurityDocument* _doc; // 0x18

		::System::Void _ctor(::System::Security::Util::Tokenizer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Util::Tokenizer*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Security::SecurityElement* GetTopElement()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER_GETTOPELEMENT_OFFSET))(this);
		}

		::System::Void GetRequiredSizes(::System::Security::Util::TokenizerStream* a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Util::TokenizerStream*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER_GETREQUIREDSIZES_OFFSET))(this, a1, a2);
		}

		::System::Int32 DetermineFormat(::System::Security::Util::TokenizerStream* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::Util::TokenizerStream*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER_DETERMINEFORMAT_OFFSET))(this, a1);
		}

		::System::Void ParseContents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_PARSER_PARSECONTENTS_OFFSET))(this);
		}
	};
}
