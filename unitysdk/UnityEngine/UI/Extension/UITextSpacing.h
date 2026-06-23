#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UITEXTSPACING_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1AAE4890)
#define UNITYENGINE_UI_EXTENSION_UITEXTSPACING__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAE54E0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextSpacing_TypeDefinitionIndex = 60357;

	class UITextSpacing : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		::System::Single Spacing; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTSPACING__CTOR_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTSPACING_MODIFYMESH_OFFSET))(this, vh);
		}
	};
}
