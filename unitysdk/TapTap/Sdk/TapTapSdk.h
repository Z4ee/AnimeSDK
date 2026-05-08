#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TAPTAP_SDK_TAPTAPSDK_GET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x1BB6A320)
#define TAPTAP_SDK_TAPTAPSDK_GET_CLIENTSECRET_OFFSET UNITYSDK_OFFSET(0x1BB6A3E0)
#define TAPTAP_SDK_TAPTAPSDK_SDKINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB6A4A0)
#define TAPTAP_SDK_TAPTAPSDK_SET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x1BB6A380)
#define TAPTAP_SDK_TAPTAPSDK_SET_CLIENTSECRET_OFFSET UNITYSDK_OFFSET(0x1BB6A440)
#define TAPTAP_SDK_TAPTAPSDK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB6A560)
#define TAPTAP_SDK_TAPTAPSDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB6A550)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int TapTapSdk_TypeDefinitionIndex = 9478;

	class TapTapSdk : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__ClientSecret_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TapTapSdk_TypeDefinitionIndex)->GetStaticField(0x8950);
		}
		static ::System::String** StaticGet_VERSION()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TapTapSdk_TypeDefinitionIndex)->GetStaticField(0x8958);
		}
		static ::System::String** StaticGet__ClientId_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TapTapSdk_TypeDefinitionIndex)->GetStaticField(0x8960);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK__CCTOR_OFFSET))();
		}

		static ::System::String* get_ClientId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK_GET_CLIENTID_OFFSET))();
		}

		static ::System::Void set_ClientId(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK_SET_CLIENTID_OFFSET))(value);
		}

		static ::System::String* get_ClientSecret()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK_GET_CLIENTSECRET_OFFSET))();
		}

		static ::System::Void set_ClientSecret(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK_SET_CLIENTSECRET_OFFSET))(value);
		}

		static ::System::Void SdkInitialize(::System::String* clientId)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK_SDKINITIALIZE_OFFSET))(clientId);
		}
	};
}
