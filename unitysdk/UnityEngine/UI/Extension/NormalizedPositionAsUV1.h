#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_NORMALIZEDPOSITIONASUV1_GET_USECUSTOMRECTTRANSFORMSPACE_OFFSET UNITYSDK_OFFSET(0x1E82D380)
#define UNITYENGINE_UI_EXTENSION_NORMALIZEDPOSITIONASUV1_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1E82D630)
#define UNITYENGINE_UI_EXTENSION_NORMALIZEDPOSITIONASUV1_START_OFFSET UNITYSDK_OFFSET(0x1E82D430)
#define UNITYENGINE_UI_EXTENSION_NORMALIZEDPOSITIONASUV1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E82D390)
#define UNITYENGINE_UI_EXTENSION_NORMALIZEDPOSITIONASUV1___BASE_START_OFFSET UNITYSDK_OFFSET(0x1E82E220)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NormalizedPositionAsUV1_TypeDefinitionIndex = 61556;

	class NormalizedPositionAsUV1 : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		::System::Boolean useCustomRectTransformSpace; // 0x20
		::UnityEngine::RectTransform* normalizeRectTransform; // 0x28
		::System::Boolean normalizePerTexLine; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NORMALIZEDPOSITIONASUV1__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseCustomRectTransformSpace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NORMALIZEDPOSITIONASUV1_GET_USECUSTOMRECTTRANSFORMSPACE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NORMALIZEDPOSITIONASUV1_START_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NORMALIZEDPOSITIONASUV1_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NORMALIZEDPOSITIONASUV1___BASE_START_OFFSET))(this);
		}
	};
}
