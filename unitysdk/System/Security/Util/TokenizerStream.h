#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Util { class TokenizerShortBlock; }
namespace System::Security::Util { class TokenizerStringBlock; }

#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_ADDSTRING_OFFSET UNITYSDK_OFFSET(0x199838F0)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_ADDTOKEN_OFFSET UNITYSDK_OFFSET(0x199837C0)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GETNEXTFULLTOKEN_OFFSET UNITYSDK_OFFSET(0x19983A20)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GETNEXTSTRING_OFFSET UNITYSDK_OFFSET(0x19983AD0)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GETNEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x19983AB0)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GOTOPOSITION_OFFSET UNITYSDK_OFFSET(0x19983C20)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_RESET_OFFSET UNITYSDK_OFFSET(0x19983790)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_TAGLASTTOKEN_OFFSET UNITYSDK_OFFSET(0x19983B70)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_THROWAWAYNEXTSTRING_OFFSET UNITYSDK_OFFSET(0x19983B60)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x199836A0)

namespace System::Security::Util
{
	inline static constexpr unsigned int TokenizerStream_TypeDefinitionIndex = 1014;

	class TokenizerStream : public ::System::Object
	{
	public:
		::System::Security::Util::TokenizerStringBlock* m_headStrings; // 0x10
		::System::Security::Util::TokenizerShortBlock* m_currentTokens; // 0x18
		::System::Security::Util::TokenizerStringBlock* m_currentStrings; // 0x20
		::System::Security::Util::TokenizerShortBlock* m_lastTokens; // 0x28
		::System::Security::Util::TokenizerShortBlock* m_headTokens; // 0x30
		::System::Int32 m_countTokens; // 0x38
		::System::Int32 m_indexTokens; // 0x3C
		::System::Int32 m_indexStrings; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM__CTOR_OFFSET))(this);
		}

		::System::Void AddToken(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_ADDTOKEN_OFFSET))(this, token);
		}

		::System::Void AddString(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_ADDSTRING_OFFSET))(this, str);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_RESET_OFFSET))(this);
		}

		::System::Int16 GetNextFullToken()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GETNEXTFULLTOKEN_OFFSET))(this);
		}

		::System::Int16 GetNextToken()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GETNEXTTOKEN_OFFSET))(this);
		}

		::System::String* GetNextString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GETNEXTSTRING_OFFSET))(this);
		}

		::System::Void ThrowAwayNextString()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_THROWAWAYNEXTSTRING_OFFSET))(this);
		}

		::System::Void TagLastToken(::System::Int16 tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_TAGLASTTOKEN_OFFSET))(this, tag);
		}

		::System::Void GoToPosition(::System::Int32 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GOTOPOSITION_OFFSET))(this, position);
		}
	};
}
