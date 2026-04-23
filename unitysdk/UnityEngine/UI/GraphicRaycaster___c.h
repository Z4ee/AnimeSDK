#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_GRAPHICRAYCASTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A553AF0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A553B20)
#define UNITYENGINE_UI_GRAPHICRAYCASTER___C__RAYCASTOPTIMIZED_B__36_0_OFFSET UNITYSDK_OFFSET(0x1A553C80)
#define UNITYENGINE_UI_GRAPHICRAYCASTER___C__RAYCAST_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A553B30)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicRaycaster___c_TypeDefinitionIndex = 5600;

	class GraphicRaycaster___c : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::GraphicRaycaster___c** StaticGet___9()
		{
			return (::UnityEngine::UI::GraphicRaycaster___c**)Il2CppClass::FromTypeDefinitionIndex(GraphicRaycaster___c_TypeDefinitionIndex)->GetStaticField(0x18EF0);
		}
		static ::System::Comparison_1<::UnityEngine::UI::Graphic*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::UnityEngine::UI::Graphic*>**)Il2CppClass::FromTypeDefinitionIndex(GraphicRaycaster___c_TypeDefinitionIndex)->GetStaticField(0x18EF8);
		}
		static ::System::Comparison_1<::UnityEngine::UI::Graphic*>** StaticGet___9__36_0()
		{
			return (::System::Comparison_1<::UnityEngine::UI::Graphic*>**)Il2CppClass::FromTypeDefinitionIndex(GraphicRaycaster___c_TypeDefinitionIndex)->GetStaticField(0x18F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Raycast_b__28_0(::UnityEngine::UI::Graphic* g1, ::UnityEngine::UI::Graphic* g2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER___C__RAYCAST_B__28_0_OFFSET))(this, g1, g2);
		}

		::System::Int32 _RaycastOptimized_b__36_0(::UnityEngine::UI::Graphic* g1, ::UnityEngine::UI::Graphic* g2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER___C__RAYCASTOPTIMIZED_B__36_0_OFFSET))(this, g1, g2);
		}
	};
}
