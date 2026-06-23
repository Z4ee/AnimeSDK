#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class MeshRenderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPRENDERERLIGHTMAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B07DE90)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapRendererLightMapData_TypeDefinitionIndex = 26533;

	class NapRendererLightMapData : public ::System::Object
	{
	public:
		::UnityEngine::MeshRenderer* m_Renderer; // 0x10
		::System::Int32 m_LightMapIndex; // 0x18
		::UnityEngine::Vector4 m_Uv_offset; // 0x1C

		::System::Void _ctor(::UnityEngine::MeshRenderer* renderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPRENDERERLIGHTMAPDATA__CTOR_OFFSET))(this, renderer);
		}
	};
}
