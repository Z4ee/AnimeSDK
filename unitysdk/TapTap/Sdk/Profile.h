#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TAPTAP_SDK_PROFILE_CURRENTPROFILE_OFFSET UNITYSDK_OFFSET(0x1BB645B0)
#define TAPTAP_SDK_PROFILE_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x1BB64550)
#define TAPTAP_SDK_PROFILE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BB64530)
#define TAPTAP_SDK_PROFILE_GET_OPENID_OFFSET UNITYSDK_OFFSET(0x1BB64570)
#define TAPTAP_SDK_PROFILE_GET_UNIONID_OFFSET UNITYSDK_OFFSET(0x1BB64590)
#define TAPTAP_SDK_PROFILE_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0x1BB64560)
#define TAPTAP_SDK_PROFILE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1BB64540)
#define TAPTAP_SDK_PROFILE_SET_OPENID_OFFSET UNITYSDK_OFFSET(0x1BB64580)
#define TAPTAP_SDK_PROFILE_SET_UNIONID_OFFSET UNITYSDK_OFFSET(0x1BB645A0)
#define TAPTAP_SDK_PROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB647B0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int Profile_TypeDefinitionIndex = 9484;

	class Profile : public ::System::Object
	{
	public:
		::System::String* _Avatar_k__BackingField; // 0x10
		::System::String* _Openid_k__BackingField; // 0x18
		::System::String* _Name_k__BackingField; // 0x20
		::System::String* _Unionid_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_PROFILE__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_PROFILE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_PROFILE_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_Avatar()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_PROFILE_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_PROFILE_SET_AVATAR_OFFSET))(this, value);
		}

		::System::String* get_Openid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_PROFILE_GET_OPENID_OFFSET))(this);
		}

		::System::Void set_Openid(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_PROFILE_SET_OPENID_OFFSET))(this, value);
		}

		::System::String* get_Unionid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_PROFILE_GET_UNIONID_OFFSET))(this);
		}

		::System::Void set_Unionid(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_PROFILE_SET_UNIONID_OFFSET))(this, value);
		}

		static ::TapTap::Sdk::Profile* CurrentProfile()
		{
			return ((::TapTap::Sdk::Profile*(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_PROFILE_CURRENTPROFILE_OFFSET))();
		}
	};
}
