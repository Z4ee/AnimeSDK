#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UIFORCEPIXELPERFECT_FORCEPIXELPERFECTPOS_OFFSET UNITYSDK_OFFSET(0x18C60090)
#define UNITYENGINE_UI_EXTENSION_UIFORCEPIXELPERFECT_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x18C607B0)
#define UNITYENGINE_UI_EXTENSION_UIFORCEPIXELPERFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C5FFF0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIForcePixelPerfect_TypeDefinitionIndex = 80591;

	class UIForcePixelPerfect : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIFORCEPIXELPERFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void ForcePixelPerfectPos(::UnityEngine::UI::Graphic* graphic, ::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Graphic*, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIFORCEPIXELPERFECT_FORCEPIXELPERFECTPOS_OFFSET))(graphic, vh);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIFORCEPIXELPERFECT_MODIFYMESH_OFFSET))(this, vh);
		}
	};
}
