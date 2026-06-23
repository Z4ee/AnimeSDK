#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERTEXTUREDESCRIPTORDYNAMICRESOLUTIONEXT_GETDYNAMICRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1D588160)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERTEXTUREDESCRIPTORDYNAMICRESOLUTIONEXT_GETDYNAMICSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1D588260)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RenderTextureDescriptorDynamicResolutionExt_TypeDefinitionIndex = 6030;

	class RenderTextureDescriptorDynamicResolutionExt : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2Int GetDynamicResolution(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERTEXTUREDESCRIPTORDYNAMICRESOLUTIONEXT_GETDYNAMICRESOLUTION_OFFSET))(desc);
		}

		static ::UnityEngine::Vector4 GetDynamicScreenSize(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERTEXTUREDESCRIPTORDYNAMICRESOLUTIONEXT_GETDYNAMICSCREENSIZE_OFFSET))(desc);
		}
	};
}
