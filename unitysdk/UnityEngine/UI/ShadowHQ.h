#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Shadow.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_SHADOWHQ_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1BB31D30)
#define UNITYENGINE_UI_SHADOWHQ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB31C80)
#define UNITYENGINE_UI_SHADOWHQ___BASE_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1BB31FD0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ShadowHQ_TypeDefinitionIndex = 87614;

	class ShadowHQ : public ::UnityEngine::UI::Shadow
	{
	public:
		::System::UInt32 iterations; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWHQ__CTOR_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWHQ_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void __base_ModifyMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWHQ___BASE_MODIFYMESH_OFFSET))(this, P0);
		}
	};
}
