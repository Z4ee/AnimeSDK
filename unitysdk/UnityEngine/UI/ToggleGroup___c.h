#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine::UI { class Toggle; }

#define UNITYENGINE_UI_TOGGLEGROUP___C__ACTIVETOGGLES_B__13_0_OFFSET UNITYSDK_OFFSET(0x1D093930)
#define UNITYENGINE_UI_TOGGLEGROUP___C__ANYTOGGLESON_B__12_0_OFFSET UNITYSDK_OFFSET(0x1D093910)
#define UNITYENGINE_UI_TOGGLEGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0938C0)
#define UNITYENGINE_UI_TOGGLEGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D093900)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ToggleGroup___c_TypeDefinitionIndex = 6031;

	class ToggleGroup___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::UI::Toggle*>** StaticGet___9__12_0()
		{
			return (::System::Predicate_1<::UnityEngine::UI::Toggle*>**)Il2CppClass::FromTypeDefinitionIndex(ToggleGroup___c_TypeDefinitionIndex)->GetStaticField(0x40FA0);
		}
		static ::System::Func_2<::UnityEngine::UI::Toggle*, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::UnityEngine::UI::Toggle*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ToggleGroup___c_TypeDefinitionIndex)->GetStaticField(0x40FA8);
		}
		static ::UnityEngine::UI::ToggleGroup___c** StaticGet___9()
		{
			return (::UnityEngine::UI::ToggleGroup___c**)Il2CppClass::FromTypeDefinitionIndex(ToggleGroup___c_TypeDefinitionIndex)->GetStaticField(0x40FB0);
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
