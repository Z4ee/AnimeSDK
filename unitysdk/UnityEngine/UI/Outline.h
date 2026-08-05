#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Shadow.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_OUTLINE_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1EF325B0)
#define UNITYENGINE_UI_OUTLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF32500)
#define UNITYENGINE_UI_OUTLINE___BASE_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1EF32B00)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Outline_TypeDefinitionIndex = 19337;

	class Outline : public ::UnityEngine::UI::Shadow
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINE__CTOR_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINE_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void __base_ModifyMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINE___BASE_MODIFYMESH_OFFSET))(this, P0);
		}
	};
}
