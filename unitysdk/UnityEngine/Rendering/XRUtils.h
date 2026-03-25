#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_XRUTILS_DRAWOCCLUSIONMESH_OFFSET UNITYSDK_OFFSET(0x18902ED0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int XRUtils_TypeDefinitionIndex = 27900;

	class XRUtils : public ::System::Object
	{
	public:
		static ::System::Void DrawOcclusionMesh(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera, ::System::Boolean stereoEnabled)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRUTILS_DRAWOCCLUSIONMESH_OFFSET))(cmd, camera, stereoEnabled);
		}
	};
}
