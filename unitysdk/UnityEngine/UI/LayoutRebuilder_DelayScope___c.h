#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class LayoutRebuilder_DelayScope; }

#define UNITYENGINE_UI_LAYOUTREBUILDER_DELAYSCOPE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F582640)
#define UNITYENGINE_UI_LAYOUTREBUILDER_DELAYSCOPE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F582680)
#define UNITYENGINE_UI_LAYOUTREBUILDER_DELAYSCOPE___C___CCTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x1F582690)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutRebuilder_DelayScope___c_TypeDefinitionIndex = 19259;

	class LayoutRebuilder_DelayScope___c : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::LayoutRebuilder_DelayScope___c** StaticGet___9()
		{
			return (::UnityEngine::UI::LayoutRebuilder_DelayScope___c**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder_DelayScope___c_TypeDefinitionIndex)->GetStaticField(0x8800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_DELAYSCOPE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_DELAYSCOPE___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__7_0(::UnityEngine::UI::LayoutRebuilder_DelayScope* x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutRebuilder_DelayScope*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_DELAYSCOPE___C___CCTOR_B__7_0_OFFSET))(this, x);
		}
	};
}
