#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TapTap::Sdk { class UIAnimator_Action; }

#define TAPTAP_SDK_UIMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1C5350)
#define TAPTAP_SDK_UIMANAGER___C__CREATECONTAINER_B__10_0_OFFSET UNITYSDK_OFFSET(0x1A1C53A0)
#define TAPTAP_SDK_UIMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C5390)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIManager___c_TypeDefinitionIndex = 6449;

	class UIManager___c : public ::System::Object
	{
	public:
		static ::TapTap::Sdk::UIAnimator_Action** StaticGet___9__10_0()
		{
			return (::TapTap::Sdk::UIAnimator_Action**)Il2CppClass::FromTypeDefinitionIndex(UIManager___c_TypeDefinitionIndex)->GetStaticField(0x540);
		}
		static ::TapTap::Sdk::UIManager___c** StaticGet___9()
		{
			return (::TapTap::Sdk::UIManager___c**)Il2CppClass::FromTypeDefinitionIndex(UIManager___c_TypeDefinitionIndex)->GetStaticField(0x548);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _CreateContainer_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER___C__CREATECONTAINER_B__10_0_OFFSET))(this);
		}
	};
}
