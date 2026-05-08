#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define TAPTAP_SDK_UIBASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1BB65610)
#define TAPTAP_SDK_UIBASE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1BB65B60)
#define TAPTAP_SDK_UIBASE_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1BB6B0C0)
#define TAPTAP_SDK_UIBASE_ONRESUME_OFFSET UNITYSDK_OFFSET(0x1BB6B0F0)
#define TAPTAP_SDK_UIBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB6B120)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIBase_TypeDefinitionIndex = 9472;

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
