#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class EventHandler; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F621430)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F621470)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__INITWEBVIEWASYNC_B__45_1_OFFSET UNITYSDK_OFFSET(0x1F621480)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__LOADNATIVECORE_B__50_0_OFFSET UNITYSDK_OFFSET(0x1F6215A0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative___c_TypeDefinitionIndex = 39462;

	class BrowserNative___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__45_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative___c_TypeDefinitionIndex)->GetStaticField(0x42760);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative___c** StaticGet___9()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative___c**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative___c_TypeDefinitionIndex)->GetStaticField(0x42768);
		}
		static ::System::EventHandler** StaticGet___9__50_0()
		{
			return (::System::EventHandler**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative___c_TypeDefinitionIndex)->GetStaticField(0x42770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitWebViewAsync_b__45_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__INITWEBVIEWASYNC_B__45_1_OFFSET))(this);
		}

		::System::Void _LoadNativeCore_b__50_0(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__LOADNATIVECORE_B__50_0_OFFSET))(this, a1, a2);
		}
	};
}
