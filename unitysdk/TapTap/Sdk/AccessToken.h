#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TAPTAP_SDK_ACCESSTOKEN_CURRENTACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x18780490)
#define TAPTAP_SDK_ACCESSTOKEN_GET_KID_OFFSET UNITYSDK_OFFSET(0x187803F0)
#define TAPTAP_SDK_ACCESSTOKEN_GET_MACALGORITHM_OFFSET UNITYSDK_OFFSET(0x18780470)
#define TAPTAP_SDK_ACCESSTOKEN_GET_MACKEY_OFFSET UNITYSDK_OFFSET(0x18780450)
#define TAPTAP_SDK_ACCESSTOKEN_GET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x18780430)
#define TAPTAP_SDK_ACCESSTOKEN_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x18780410)
#define TAPTAP_SDK_ACCESSTOKEN_SET_KID_OFFSET UNITYSDK_OFFSET(0x18780400)
#define TAPTAP_SDK_ACCESSTOKEN_SET_MACALGORITHM_OFFSET UNITYSDK_OFFSET(0x18780480)
#define TAPTAP_SDK_ACCESSTOKEN_SET_MACKEY_OFFSET UNITYSDK_OFFSET(0x18780460)
#define TAPTAP_SDK_ACCESSTOKEN_SET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x18780440)
#define TAPTAP_SDK_ACCESSTOKEN_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x18780420)
#define TAPTAP_SDK_ACCESSTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x187807E0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int AccessToken_TypeDefinitionIndex = 6431;

	class AccessToken : public ::System::Object
	{
	public:
		::System::String* _MacKey_k__BackingField; // 0x10
		::System::String* _TokenType_k__BackingField; // 0x18
		::System::String* _Token_k__BackingField; // 0x20
		::System::String* _MacAlgorithm_k__BackingField; // 0x28
		::System::String* _Kid_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN__CTOR_OFFSET))(this);
		}

		::System::String* get_Kid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_KID_OFFSET))(this);
		}

		::System::Void set_Kid(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_KID_OFFSET))(this, value);
		}

		::System::String* get_Token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_Token(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_TOKEN_OFFSET))(this, value);
		}

		::System::String* get_TokenType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_TOKENTYPE_OFFSET))(this);
		}

		::System::Void set_TokenType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_TOKENTYPE_OFFSET))(this, value);
		}

		::System::String* get_MacKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_MACKEY_OFFSET))(this);
		}

		::System::Void set_MacKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_MACKEY_OFFSET))(this, value);
		}

		::System::String* get_MacAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_MACALGORITHM_OFFSET))(this);
		}

		::System::Void set_MacAlgorithm(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_MACALGORITHM_OFFSET))(this, value);
		}

		static ::TapTap::Sdk::AccessToken* CurrentAccessToken()
		{
			return ((::TapTap::Sdk::AccessToken*(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_CURRENTACCESSTOKEN_OFFSET))();
		}
	};
}
