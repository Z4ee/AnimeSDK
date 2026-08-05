#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERSYSTEMSETTINGS_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FA06F30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERSYSTEMSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA07050)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserSystemSettings_TypeDefinitionIndex = 33282;

	class BrowserSystemSettings : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* profilePath; // 0x18
		::System::String* userAgent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERSYSTEMSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERSYSTEMSETTINGS_AWAKE_OFFSET))(this);
		}
	};
}
