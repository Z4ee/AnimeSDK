#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UICUSTOMCORNER_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1BC47D30)
#define UNITYENGINE_UI_EXTENSION_UICUSTOMCORNER_START_OFFSET UNITYSDK_OFFSET(0x1BC47B30)
#define UNITYENGINE_UI_EXTENSION_UICUSTOMCORNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC47A90)
#define UNITYENGINE_UI_EXTENSION_UICUSTOMCORNER___BASE_START_OFFSET UNITYSDK_OFFSET(0x1BC48620)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UICustomCorner_TypeDefinitionIndex = 89573;

	class UICustomCorner : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		::System::Boolean useCustomRectTransformSpace; // 0x20
		::UnityEngine::RectTransform* normalizeRectTransform; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICUSTOMCORNER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICUSTOMCORNER_START_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICUSTOMCORNER_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICUSTOMCORNER___BASE_START_OFFSET))(this);
		}
	};
}
