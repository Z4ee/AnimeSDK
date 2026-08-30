#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF828D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF82910)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR___C___CTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EF82920)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserCursor___c_TypeDefinitionIndex = 38071;

	class BrowserCursor___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BrowserCursor___c_TypeDefinitionIndex)->GetStaticField(0x55C20);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserCursor___c** StaticGet___9()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserCursor___c**)Il2CppClass::FromTypeDefinitionIndex(BrowserCursor___c_TypeDefinitionIndex)->GetStaticField(0x55C28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR___C___CTOR_B__23_0_OFFSET))(this);
		}
	};
}
