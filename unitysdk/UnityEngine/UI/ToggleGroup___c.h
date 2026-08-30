#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine::UI { class Toggle; }

#define UNITYENGINE_UI_TOGGLEGROUP___C__ACTIVETOGGLES_B__13_0_OFFSET UNITYSDK_OFFSET(0x1ECFB070)
#define UNITYENGINE_UI_TOGGLEGROUP___C__ANYTOGGLESON_B__12_0_OFFSET UNITYSDK_OFFSET(0x1ECFB050)
#define UNITYENGINE_UI_TOGGLEGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECFB000)
#define UNITYENGINE_UI_TOGGLEGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECFB040)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ToggleGroup___c_TypeDefinitionIndex = 6861;

	class ToggleGroup___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::UI::Toggle*>** StaticGet___9__12_0()
		{
			return (::System::Predicate_1<::UnityEngine::UI::Toggle*>**)Il2CppClass::FromTypeDefinitionIndex(ToggleGroup___c_TypeDefinitionIndex)->GetStaticField(0x2B930);
		}
		static ::UnityEngine::UI::ToggleGroup___c** StaticGet___9()
		{
			return (::UnityEngine::UI::ToggleGroup___c**)Il2CppClass::FromTypeDefinitionIndex(ToggleGroup___c_TypeDefinitionIndex)->GetStaticField(0x2B938);
		}
		static ::System::Func_2<::UnityEngine::UI::Toggle*, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::UnityEngine::UI::Toggle*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ToggleGroup___c_TypeDefinitionIndex)->GetStaticField(0x2B940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _AnyTogglesOn_b__12_0(::UnityEngine::UI::Toggle* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP___C__ANYTOGGLESON_B__12_0_OFFSET))(this, a1);
		}

		::System::Boolean _ActiveToggles_b__13_0(::UnityEngine::UI::Toggle* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP___C__ACTIVETOGGLES_B__13_0_OFFSET))(this, a1);
		}
	};
}
