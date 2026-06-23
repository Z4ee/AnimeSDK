#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_SCREENPOSITIONASUV1_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1A531AD0)
#define UNITYENGINE_UI_SCREENPOSITIONASUV1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A531A30)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ScreenPositionAsUV1_TypeDefinitionIndex = 71514;

	class ScreenPositionAsUV1 : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		::System::Boolean keepAspect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCREENPOSITIONASUV1__CTOR_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCREENPOSITIONASUV1_MODIFYMESH_OFFSET))(this, vh);
		}
	};
}
