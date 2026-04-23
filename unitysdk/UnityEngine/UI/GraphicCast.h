#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Graphic.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_GRAPHICCAST_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xB9A99D0)
#define UNITYENGINE_UI_GRAPHICCAST__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A99F0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicCast_TypeDefinitionIndex = 44503;

	class GraphicCast : public ::UnityEngine::UI::Graphic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICCAST__CTOR_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICCAST_ONPOPULATEMESH_OFFSET))(this, a1);
		}
	};
}
