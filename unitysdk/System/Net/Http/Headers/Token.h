#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token_Type.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0xD250)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_KIND_OFFSET UNITYSDK_OFFSET(0x59D0)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1852FE30)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_SET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0xD260)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_SET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1D50)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20FBEE0)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1852FEB0)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x7B070)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Token_TypeDefinitionIndex = 4812;

	struct alignas(4) Token
	{
		static ::System::Net::Http::Headers::Token* StaticGet_Empty()
		{
			return (::System::Net::Http::Headers::Token*)Il2CppClass::FromTypeDefinitionIndex(Token_TypeDefinitionIndex)->GetStaticField(0x62F0);
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

		::System::Int32 get_StartPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_STARTPOSITION_OFFSET))(this);
		}

		::System::Void set_StartPosition(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_SET_STARTPOSITION_OFFSET))(this, value);
		}

		::System::Int32 get_EndPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_ENDPOSITION_OFFSET))(this);
		}

		::System::Void set_EndPosition(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_SET_ENDPOSITION_OFFSET))(this, value);
		}

		::System::Net::Http::Headers::Token_Type get_Kind()
		{
			return ((::System::Net::Http::Headers::Token_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_KIND_OFFSET))(this);
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
