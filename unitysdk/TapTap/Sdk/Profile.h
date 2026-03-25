#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TAPTAP_SDK_PROFILE_CURRENTPROFILE_OFFSET UNITYSDK_OFFSET(0x18783F10)
#define TAPTAP_SDK_PROFILE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18783EC0)
#define TAPTAP_SDK_PROFILE_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0x18783EE0)
#define TAPTAP_SDK_PROFILE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x18783ED0)
#define TAPTAP_SDK_PROFILE_SET_OPENID_OFFSET UNITYSDK_OFFSET(0x18783EF0)
#define TAPTAP_SDK_PROFILE_SET_UNIONID_OFFSET UNITYSDK_OFFSET(0x18783F00)
#define TAPTAP_SDK_PROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18784110)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int Profile_TypeDefinitionIndex = 6432;

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

		::System::Void set_Avatar(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_PROFILE_SET_AVATAR_OFFSET))(this, value);
		}

		::System::Void set_Openid(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_PROFILE_SET_OPENID_OFFSET))(this, value);
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
