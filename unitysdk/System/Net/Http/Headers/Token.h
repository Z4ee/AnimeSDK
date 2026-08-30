#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token_Type.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0xDAB0)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_KIND_OFFSET UNITYSDK_OFFSET(0x5F00)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1E120)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E792990)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_SET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0xDAC0)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_SET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x2200)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B9F5E0)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E792A70)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x7CCB0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Token_TypeDefinitionIndex = 3799;

	struct alignas(4) Token
	{
		static ::System::Net::Http::Headers::Token* StaticGet_Empty()
		{
			return (::System::Net::Http::Headers::Token*)Il2CppClass::FromTypeDefinitionIndex(Token_TypeDefinitionIndex)->GetStaticField(0x2170);
		}
		::System::Net::Http::Headers::Token_Type type; // 0x10
		::System::Int32 _StartPosition_k__BackingField; // 0x14
		::System::Int32 _EndPosition_k__BackingField; // 0x18

		::System::Void _ctor(::System::Net::Http::Headers::Token_Type a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::Token_Type, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN__CCTOR_OFFSET))();
		}

		::System::Int32 get_StartPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_STARTPOSITION_OFFSET))(this);
		}

		::System::Void set_StartPosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_SET_STARTPOSITION_OFFSET))(this, a1);
		}

		::System::Int32 get_EndPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_ENDPOSITION_OFFSET))(this);
		}

		::System::Void set_EndPosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_SET_ENDPOSITION_OFFSET))(this, a1);
		}

		::System::Net::Http::Headers::Token_Type get_Kind()
		{
			return ((::System::Net::Http::Headers::Token_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_KIND_OFFSET))(this);
		}

		static ::System::Net::Http::Headers::Token_Type op_Implicit(::System::Net::Http::Headers::Token a1)
		{
			return ((::System::Net::Http::Headers::Token_Type(*)(::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_OP_IMPLICIT_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_TOSTRING_OFFSET))(this);
		}
	};
}
