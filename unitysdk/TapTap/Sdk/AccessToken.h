#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TAPTAP_SDK_ACCESSTOKEN_CURRENTACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1B01D9B0)
#define TAPTAP_SDK_ACCESSTOKEN_GET_KID_OFFSET UNITYSDK_OFFSET(0x1B01D910)
#define TAPTAP_SDK_ACCESSTOKEN_GET_MACALGORITHM_OFFSET UNITYSDK_OFFSET(0x1B01D990)
#define TAPTAP_SDK_ACCESSTOKEN_GET_MACKEY_OFFSET UNITYSDK_OFFSET(0x1B01D970)
#define TAPTAP_SDK_ACCESSTOKEN_GET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x1B01D950)
#define TAPTAP_SDK_ACCESSTOKEN_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1B01D930)
#define TAPTAP_SDK_ACCESSTOKEN_SET_KID_OFFSET UNITYSDK_OFFSET(0x1B01D920)
#define TAPTAP_SDK_ACCESSTOKEN_SET_MACALGORITHM_OFFSET UNITYSDK_OFFSET(0x1B01D9A0)
#define TAPTAP_SDK_ACCESSTOKEN_SET_MACKEY_OFFSET UNITYSDK_OFFSET(0x1B01D980)
#define TAPTAP_SDK_ACCESSTOKEN_SET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x1B01D960)
#define TAPTAP_SDK_ACCESSTOKEN_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1B01D940)
#define TAPTAP_SDK_ACCESSTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B01DF00)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int AccessToken_TypeDefinitionIndex = 7080;

	class AccessToken : public ::System::Object
	{
	public:
		::System::String* _TokenType_k__BackingField; // 0x10
		::System::String* _MacAlgorithm_k__BackingField; // 0x18
		::System::String* _Token_k__BackingField; // 0x20
		::System::String* _MacKey_k__BackingField; // 0x28
		::System::String* _Kid_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN__CTOR_OFFSET))(this);
		}

		::System::String* get_Kid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_KID_OFFSET))(this);
		}

		::System::Void set_Kid(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_KID_OFFSET))(this, a1);
		}

		::System::String* get_Token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_Token(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_TOKEN_OFFSET))(this, a1);
		}

		::System::String* get_TokenType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_TOKENTYPE_OFFSET))(this);
		}

		::System::Void set_TokenType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_TOKENTYPE_OFFSET))(this, a1);
		}

		::System::String* get_MacKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_MACKEY_OFFSET))(this);
		}

		::System::Void set_MacKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_MACKEY_OFFSET))(this, a1);
		}

		::System::String* get_MacAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_MACALGORITHM_OFFSET))(this);
		}

		::System::Void set_MacAlgorithm(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_MACALGORITHM_OFFSET))(this, a1);
		}

		static ::TapTap::Sdk::AccessToken* CurrentAccessToken()
		{
			return ((::TapTap::Sdk::AccessToken*(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_CURRENTACCESSTOKEN_OFFSET))();
		}
	};
}
