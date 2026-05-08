#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VolumetricFogBlitOrder.h"

namespace UnityEngine::NAPRenderPipeline0 { class VolumetricFogSystem_Base; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_GETVOLUMETRICFOGBLITORDER_OFFSET UNITYSDK_OFFSET(0x1A6A9840)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A6A98F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A9950)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricFogSystem_TypeDefinitionIndex = 29926;

	class VolumetricFogSystem : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::Universal::VolumetricFogBlitOrder GetVolumetricFogBlitOrder(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::UnityEngine::Rendering::Universal::VolumetricFogBlitOrder(*)(::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_GETVOLUMETRICFOGBLITORDER_OFFSET))(renderingData);
		}

		static ::UnityEngine::NAPRenderPipeline0::VolumetricFogSystem_Base* get_instance()
		{
			return ((::UnityEngine::NAPRenderPipeline0::VolumetricFogSystem_Base*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_GET_INSTANCE_OFFSET))();
		}
	};
}
