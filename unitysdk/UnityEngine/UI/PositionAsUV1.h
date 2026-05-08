#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_POSITIONASUV1_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1C15A410)
#define UNITYENGINE_UI_POSITIONASUV1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C15A370)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int PositionAsUV1_TypeDefinitionIndex = 8486;

	class PositionAsUV1 : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_POSITIONASUV1__CTOR_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_POSITIONASUV1_MODIFYMESH_OFFSET))(this, vh);
		}
	};
}
