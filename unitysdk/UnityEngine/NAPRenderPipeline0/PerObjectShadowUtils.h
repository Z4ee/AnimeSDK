#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWUTILS_GETAXISWITHLIGHTDIRECTION_OFFSET UNITYSDK_OFFSET(0xF7ECE80)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWUTILS_REFRESHAXISWITHLIGHTDIRECTION_OFFSET UNITYSDK_OFFSET(0xF7ECC20)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PerObjectShadowUtils_TypeDefinitionIndex = 29772;

	class PerObjectShadowUtils : public ::System::Object
	{
	public:
		static ::System::Void RefreshAxisWithLightDirection(::UnityEngine::Vector3 lightDirection, ::UnityEngine::Vector3& xAxis, ::UnityEngine::Vector3& yAxis, ::UnityEngine::Vector3& zAxis)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWUTILS_REFRESHAXISWITHLIGHTDIRECTION_OFFSET))(lightDirection, xAxis, yAxis, zAxis);
		}

		static ::System::Void GetAxisWithLightDirection(::UnityEngine::Vector3 lightDirection, ::UnityEngine::Vector3& xAxis, ::UnityEngine::Vector3& yAxis, ::UnityEngine::Vector3& zAxis)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWUTILS_GETAXISWITHLIGHTDIRECTION_OFFSET))(lightDirection, xAxis, yAxis, zAxis);
		}
	};
}
