#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CommandBufferWrapper.h"

namespace UnityEngine::NAPRenderPipeline0 { class SkyCoverStates; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SKYCOVERUTILS_DRAWSKYCOVER_OFFSET UNITYSDK_OFFSET(0x1D6731D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SKYCOVERUTILS_GETSKYCOVERSTATES_OFFSET UNITYSDK_OFFSET(0x1D673170)
#define UNITYENGINE_NAPRENDERPIPELINE0_SKYCOVERUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6734F0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SkyCoverUtils_TypeDefinitionIndex = 5986;

	class SkyCoverUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::SkyCoverStates** StaticGet_g_SkyCoverStates()
		{
			return (::UnityEngine::NAPRenderPipeline0::SkyCoverStates**)Il2CppClass::FromTypeDefinitionIndex(SkyCoverUtils_TypeDefinitionIndex)->GetStaticField(0x5720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SKYCOVERUTILS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::NAPRenderPipeline0::SkyCoverStates* GetSkyCoverStates()
		{
			return ((::UnityEngine::NAPRenderPipeline0::SkyCoverStates*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SKYCOVERUTILS_GETSKYCOVERSTATES_OFFSET))();
		}

		static ::System::Void DrawSkyCover(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmd, ::System::Boolean isFullScreen)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SKYCOVERUTILS_DRAWSKYCOVER_OFFSET))(cameraData, cmd, isFullScreen);
		}
	};
}
