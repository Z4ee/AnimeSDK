#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F873D50)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F873D90)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C___CTOR_B__22_0_OFFSET UNITYSDK_OFFSET(0x1F873DA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int ExternalKeyboard___c_TypeDefinitionIndex = 33319;

	class ExternalKeyboard___c : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::ExternalKeyboard___c** StaticGet___9()
		{
			return (::ZenFulcrum::EmbeddedBrowser::ExternalKeyboard___c**)Il2CppClass::FromTypeDefinitionIndex(ExternalKeyboard___c_TypeDefinitionIndex)->GetStaticField(0x28950);
		}
		static ::System::Action_2<::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Action_2<::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ExternalKeyboard___c_TypeDefinitionIndex)->GetStaticField(0x28958);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__22_0(::ZenFulcrum::EmbeddedBrowser::Browser* browser, ::System::Boolean editable)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C___CTOR_B__22_0_OFFSET))(this, browser, editable);
		}
	};
}
