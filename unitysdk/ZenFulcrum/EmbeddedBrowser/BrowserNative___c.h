#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class EventHandler; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E533500)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E533540)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__INITWEBVIEWASYNC_B__39_1_OFFSET UNITYSDK_OFFSET(0x1E533550)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__LOADNATIVECORE_B__44_0_OFFSET UNITYSDK_OFFSET(0x1E533B40)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative___c_TypeDefinitionIndex = 32646;

	class BrowserNative___c : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative___c** StaticGet___9()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative___c**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative___c_TypeDefinitionIndex)->GetStaticField(0x26F20);
		}
		static ::System::EventHandler** StaticGet___9__44_0()
		{
			return (::System::EventHandler**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative___c_TypeDefinitionIndex)->GetStaticField(0x26F28);
		}
		static ::System::Action** StaticGet___9__39_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative___c_TypeDefinitionIndex)->GetStaticField(0x26F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitWebViewAsync_b__39_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__INITWEBVIEWASYNC_B__39_1_OFFSET))(this);
		}

		::System::Void _LoadNativeCore_b__44_0(::System::Object* sender, ::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__LOADNATIVECORE_B__44_0_OFFSET))(this, sender, args);
		}
	};
}
