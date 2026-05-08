#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_GRAPHICRAYCASTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4213C0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C421400)
#define UNITYENGINE_UI_GRAPHICRAYCASTER___C__RAYCASTFAST_B__26_0_OFFSET UNITYSDK_OFFSET(0x1C421460)
#define UNITYENGINE_UI_GRAPHICRAYCASTER___C__RAYCAST_B__25_0_OFFSET UNITYSDK_OFFSET(0x1C421410)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicRaycaster___c_TypeDefinitionIndex = 8365;

	class GraphicRaycaster___c : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::GraphicRaycaster___c** StaticGet___9()
		{
			return (::UnityEngine::UI::GraphicRaycaster___c**)Il2CppClass::FromTypeDefinitionIndex(GraphicRaycaster___c_TypeDefinitionIndex)->GetStaticField(0x7450);
		}
		static ::System::Comparison_1<::UnityEngine::UI::Graphic*>** StaticGet___9__26_0()
		{
			return (::System::Comparison_1<::UnityEngine::UI::Graphic*>**)Il2CppClass::FromTypeDefinitionIndex(GraphicRaycaster___c_TypeDefinitionIndex)->GetStaticField(0x7458);
		}
		static ::System::Comparison_1<::UnityEngine::UI::Graphic*>** StaticGet___9__25_0()
		{
			return (::System::Comparison_1<::UnityEngine::UI::Graphic*>**)Il2CppClass::FromTypeDefinitionIndex(GraphicRaycaster___c_TypeDefinitionIndex)->GetStaticField(0x7460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Raycast_b__25_0(::UnityEngine::UI::Graphic* g1, ::UnityEngine::UI::Graphic* g2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER___C__RAYCAST_B__25_0_OFFSET))(this, g1, g2);
		}

		::System::Int32 _RaycastFast_b__26_0(::UnityEngine::UI::Graphic* g1, ::UnityEngine::UI::Graphic* g2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER___C__RAYCASTFAST_B__26_0_OFFSET))(this, g1, g2);
		}
	};
}
