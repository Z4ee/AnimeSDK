#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/LyraBakedDataManager_LyraClipmapRenderingContext.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRADISTANCEFIELDCLIPMAPRENDERINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB5DA0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_LyraDistanceFieldClipmapRenderingContext_TypeDefinitionIndex = 30467;

	class LyraBakedDataManager_LyraDistanceFieldClipmapRenderingContext : public ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapRenderingContext
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRADISTANCEFIELDCLIPMAPRENDERINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
