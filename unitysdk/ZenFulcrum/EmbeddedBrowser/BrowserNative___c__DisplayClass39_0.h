#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class FileLocations_CEFDirs; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C6D600)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS39_0__INITWEBVIEWASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x18C71C50)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative___c__DisplayClass39_0_TypeDefinitionIndex = 30506;

	class BrowserNative___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::String* ua; // 0x10
		::ZenFulcrum::EmbeddedBrowser::FileLocations_CEFDirs* dirs; // 0x18
		::System::String* param; // 0x20
		::System::Int32 debugPort; // 0x28
		::System::Boolean asyncLoad; // 0x2C
		::System::Int32 delaySeconds; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitWebViewAsync_b__0(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS39_0__INITWEBVIEWASYNC_B__0_OFFSET))(this, _);
		}
	};
}
