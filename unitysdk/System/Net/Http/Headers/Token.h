#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token_Type.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_TOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B01D2A0)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x94C830)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B01D320)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x3EABD0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Token_TypeDefinitionIndex = 24748;

	struct alignas(4) Token
	{
		static ::System::Net::Http::Headers::Token* StaticGet_Empty()
		{
			return (::System::Net::Http::Headers::Token*)Il2CppClass::FromTypeDefinitionIndex(Token_TypeDefinitionIndex)->GetStaticField(0x4670);
		}
		::System::Net::Http::Headers::Token_Type type; // 0x10
		::System::Int32 _StartPosition_k__BackingField; // 0x14
		::System::Int32 _EndPosition_k__BackingField; // 0x18

		::System::Void _ctor(::System::Net::Http::Headers::Token_Type type, ::System::Int32 startPosition, ::System::Int32 endPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::Token_Type, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN__CTOR_OFFSET))(this, type, startPosition, endPosition);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN__CCTOR_OFFSET))();
		}

		static ::System::Net::Http::Headers::Token_Type op_Implicit(::System::Net::Http::Headers::Token token)
		{
			return ((::System::Net::Http::Headers::Token_Type(*)(::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_OP_IMPLICIT_OFFSET))(token);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_TOSTRING_OFFSET))(this);
		}
	};
}
