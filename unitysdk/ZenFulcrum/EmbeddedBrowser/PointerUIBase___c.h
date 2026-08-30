#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFA1000)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA1040)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C___CTOR_B__76_0_OFFSET UNITYSDK_OFFSET(0x1EFA1050)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C___CTOR_B__76_1_OFFSET UNITYSDK_OFFSET(0x1EFA1060)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int PointerUIBase___c_TypeDefinitionIndex = 38186;

	class PointerUIBase___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__76_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PointerUIBase___c_TypeDefinitionIndex)->GetStaticField(0x3F200);
		}
		static ::System::Action** StaticGet___9__76_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PointerUIBase___c_TypeDefinitionIndex)->GetStaticField(0x3F208);
		}
		static ::ZenFulcrum::EmbeddedBrowser::PointerUIBase___c** StaticGet___9()
		{
			return (::ZenFulcrum::EmbeddedBrowser::PointerUIBase___c**)Il2CppClass::FromTypeDefinitionIndex(PointerUIBase___c_TypeDefinitionIndex)->GetStaticField(0x3F210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__76_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C___CTOR_B__76_0_OFFSET))(this);
		}

		::System::Void __ctor_b__76_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C___CTOR_B__76_1_OFFSET))(this);
		}
	};
}
