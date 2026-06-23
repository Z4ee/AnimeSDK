#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/LyraBakedDataManager_LyraClipmapRenderingContext.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRASCENEVOXELCLIPMAPRENDERINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDBE5F0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_LyraSceneVoxelClipmapRenderingContext_TypeDefinitionIndex = 27322;

	class LyraBakedDataManager_LyraSceneVoxelClipmapRenderingContext : public ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapRenderingContext
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRASCENEVOXELCLIPMAPRENDERINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
