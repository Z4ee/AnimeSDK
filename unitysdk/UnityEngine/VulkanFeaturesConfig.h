#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_VULKANFEATURESCONFIG_ISFEATUREENABLED_OFFSET UNITYSDK_OFFSET(0x1F440E20)
#define UNITYENGINE_VULKANFEATURESCONFIG_SETFEATURE_OFFSET UNITYSDK_OFFSET(0x1F440E10)

namespace UnityEngine
{
	inline static constexpr unsigned int VulkanFeaturesConfig_TypeDefinitionIndex = 4204;

	class VulkanFeaturesConfig : public ::System::Object
	{
	public:
		static ::System::Void SetFeature(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VULKANFEATURESCONFIG_SETFEATURE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsFeatureEnabled(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_VULKANFEATURESCONFIG_ISFEATUREENABLED_OFFSET))(a1);
		}
	};
}
