#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINEEDITORRESOURCES_COLLIDERPREVIEWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A1B70)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRenderPipelineEditorResources_ColliderPreviewConfig_TypeDefinitionIndex = 27475;

	class UniversalRenderPipelineEditorResources_ColliderPreviewConfig : public ::System::Object
	{
	public:
		::UnityEngine::Color s_WallColor; // 0x10
		::UnityEngine::Color s_GroundColor; // 0x20
		::UnityEngine::Color s_CameraColliderTransparent; // 0x30
		::UnityEngine::Color s_CameraNotColliderTransparent; // 0x40
		::UnityEngine::Color s_IgnoreColor; // 0x50
		::UnityEngine::Color s_TagOtherColor; // 0x60
		::UnityEngine::Color s_Collider_WireframeColor; // 0x70
		::UnityEngine::Color s_Other_WireframeColor; // 0x80
		::UnityEngine::Color s_TransparentColor; // 0x90
		::System::Boolean s_EnableColliderPreviewOffset; // 0xA0
		::System::Boolean s_JustShowMeshCollider; // 0xA1
		::System::Boolean refreshColliderProps; // 0xA2
		::System::Boolean autoRefreshColliderProps; // 0xA3
		::System::Boolean showNavMesh; // 0xA4
		::System::Boolean hideCollider; // 0xA5

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINEEDITORRESOURCES_COLLIDERPREVIEWCONFIG__CTOR_OFFSET))(this);
		}
	};
}
