#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CAMERASHADOWCACHEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D811AC0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int GlobalBufferManager_CameraShadowCacheData_TypeDefinitionIndex = 6023;

	class GlobalBufferManager_CameraShadowCacheData : public ::System::Object
	{
	public:
		::System::Int32 m_currentShadowRenderIndex; // 0x10
		::UnityEngine::RenderTexture* m_ShadowCacheBuffer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CAMERASHADOWCACHEDATA__CTOR_OFFSET))(this);
		}
	};
}
