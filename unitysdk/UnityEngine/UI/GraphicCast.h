#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/EGraphicCastShape.h"
#include "unitysdk/UnityEngine/UI/Graphic.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_GRAPHICCAST_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x12AA8120)
#define UNITYENGINE_UI_GRAPHICCAST_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x12AA80C0)
#define UNITYENGINE_UI_GRAPHICCAST__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA86D0)
#define UNITYENGINE_UI_GRAPHICCAST___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x12AA8730)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicCast_TypeDefinitionIndex = 67121;

	class GraphicCast : public ::UnityEngine::UI::Graphic
	{
	public:
		::UnityEngine::UI::EGraphicCastShape CastShape; // 0xA8
		::Il2CppArray<::UnityEngine::Vector3>* corners; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICCAST__CTOR_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICCAST_ONPOPULATEMESH_OFFSET))(this, vh);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* eventCamera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICCAST_ISRAYCASTLOCATIONVALID_OFFSET))(this, screenPoint, eventCamera);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICCAST___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
		}
	};
}
