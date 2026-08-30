#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7DB860)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserInputSettings_TypeDefinitionIndex = 38176;

	class BrowserInputSettings : public ::System::Object
	{
	public:
		::System::Single multiclickSpeed; // 0x10
		::System::Int32 scrollSpeed; // 0x14
		::System::Single multiclickTolerance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUTSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
