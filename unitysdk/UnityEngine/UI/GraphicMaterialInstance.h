#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_GRAPHICMATERIALINSTANCE_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x1EE313C0)
#define UNITYENGINE_UI_GRAPHICMATERIALINSTANCE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EE31670)
#define UNITYENGINE_UI_GRAPHICMATERIALINSTANCE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EE31440)
#define UNITYENGINE_UI_GRAPHICMATERIALINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE31800)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicMaterialInstance_TypeDefinitionIndex = 6709;

	class GraphicMaterialInstance : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Graphic* m_Graphic; // 0x18
		::UnityEngine::Material* m_OrginMaterial; // 0x20
		::UnityEngine::Material* m_MaterialInstance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICMATERIALINSTANCE__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Graphic* get_graphic()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICMATERIALINSTANCE_GET_GRAPHIC_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICMATERIALINSTANCE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICMATERIALINSTANCE_ONDISABLE_OFFSET))(this);
		}
	};
}
