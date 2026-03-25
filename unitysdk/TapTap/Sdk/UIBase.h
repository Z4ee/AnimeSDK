#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define TAPTAP_SDK_UIBASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x18784DE0)
#define TAPTAP_SDK_UIBASE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x187851E0)
#define TAPTAP_SDK_UIBASE_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x18789CE0)
#define TAPTAP_SDK_UIBASE_ONRESUME_OFFSET UNITYSDK_OFFSET(0x18789D10)
#define TAPTAP_SDK_UIBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18789D40)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIBase_TypeDefinitionIndex = 6420;

	class UIBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIBASE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIBASE_ONENTER_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIBASE_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnResume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIBASE_ONRESUME_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIBASE_ONEXIT_OFFSET))(this);
		}
	};
}
