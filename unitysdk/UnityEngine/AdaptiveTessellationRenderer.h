#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_HEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1ED05270)
#define UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_MESHSIZEX_OFFSET UNITYSDK_OFFSET(0x1ED05280)
#define UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_MESHSIZEZ_OFFSET UNITYSDK_OFFSET(0x1ED05290)
#define UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_RENDERWIREFRAME_OFFSET UNITYSDK_OFFSET(0x1ED052C0)
#define UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_TESSELLATIONAREAPERCENTAGECLAMP_OFFSET UNITYSDK_OFFSET(0x1ED052B0)
#define UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_TESSELLATIONAREAPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1ED052A0)

namespace UnityEngine
{
	inline static constexpr unsigned int AdaptiveTessellationRenderer_TypeDefinitionIndex = 4249;

	class AdaptiveTessellationRenderer : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void set_heightMap(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_HEIGHTMAP_OFFSET))(this, a1);
		}

		::System::Void set_meshSizeX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_MESHSIZEX_OFFSET))(this, a1);
		}

		::System::Void set_meshSizeZ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_MESHSIZEZ_OFFSET))(this, a1);
		}

		::System::Void set_tessellationAreaPercentage(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_TESSELLATIONAREAPERCENTAGE_OFFSET))(this, a1);
		}

		::System::Void set_tessellationAreaPercentageClamp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_TESSELLATIONAREAPERCENTAGECLAMP_OFFSET))(this, a1);
		}

		::System::Void set_renderWireframe(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_RENDERWIREFRAME_OFFSET))(this, a1);
		}
	};
}
