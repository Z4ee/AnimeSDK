#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_HEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1A4245F0)
#define UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_MESHSIZEX_OFFSET UNITYSDK_OFFSET(0x1A424600)
#define UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_MESHSIZEZ_OFFSET UNITYSDK_OFFSET(0x1A424610)
#define UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_RENDERWIREFRAME_OFFSET UNITYSDK_OFFSET(0x1A424640)
#define UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_TESSELLATIONAREAPERCENTAGECLAMP_OFFSET UNITYSDK_OFFSET(0x1A424630)
#define UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_TESSELLATIONAREAPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1A424620)

namespace UnityEngine
{
	inline static constexpr unsigned int AdaptiveTessellationRenderer_TypeDefinitionIndex = 4060;

	class AdaptiveTessellationRenderer : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void set_heightMap(::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_HEIGHTMAP_OFFSET))(this, value);
		}

		::System::Void set_meshSizeX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_MESHSIZEX_OFFSET))(this, value);
		}

		::System::Void set_meshSizeZ(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_MESHSIZEZ_OFFSET))(this, value);
		}

		::System::Void set_tessellationAreaPercentage(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_TESSELLATIONAREAPERCENTAGE_OFFSET))(this, value);
		}

		::System::Void set_tessellationAreaPercentageClamp(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_TESSELLATIONAREAPERCENTAGECLAMP_OFFSET))(this, value);
		}

		::System::Void set_renderWireframe(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ADAPTIVETESSELLATIONRENDERER_SET_RENDERWIREFRAME_OFFSET))(this, value);
		}
	};
}
