#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_XRUTILS_DRAWOCCLUSIONMESH_OFFSET UNITYSDK_OFFSET(0x1DE3FC20)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int XRUtils_TypeDefinitionIndex = 34944;

	class XRUtils : public ::System::Object
	{
	public:
		static ::System::Void DrawOcclusionMesh(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Camera* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRUTILS_DRAWOCCLUSIONMESH_OFFSET))(a1, a2, a3);
		}
	};
}
