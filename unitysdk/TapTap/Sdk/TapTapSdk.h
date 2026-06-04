#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TAPTAP_SDK_TAPTAPSDK_GET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x1B027B60)
#define TAPTAP_SDK_TAPTAPSDK_SDKINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B027BD0)
#define TAPTAP_SDK_TAPTAPSDK_SET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x1B027B90)
#define TAPTAP_SDK_TAPTAPSDK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B027C20)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int TapTapSdk_TypeDefinitionIndex = 7075;

	class TapTapSdk : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_VERSION()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TapTapSdk_TypeDefinitionIndex)->GetStaticField(0x540);
		}
		static ::System::String** StaticGet__ClientId_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TapTapSdk_TypeDefinitionIndex)->GetStaticField(0x548);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK__CCTOR_OFFSET))();
		}

		static ::System::String* get_ClientId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK_GET_CLIENTID_OFFSET))();
		}

		static ::System::Void set_ClientId(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK_SET_CLIENTID_OFFSET))(a1);
		}

		static ::System::Void SdkInitialize(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK_SDKINITIALIZE_OFFSET))(a1);
		}
	};
}
