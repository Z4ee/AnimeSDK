#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering::Universal { class VolumetricCloudV2Config; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDCONFIGV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF133C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricCloudConfigV2_TypeDefinitionIndex = 26914;

	class VolumetricCloudConfigV2 : public ::System::Object
	{
	public:
		::System::Boolean enabled; // 0x10
		::UnityEngine::Rendering::Universal::VolumetricCloudV2Config* config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDCONFIGV2__CTOR_OFFSET))(this);
		}
	};
}
