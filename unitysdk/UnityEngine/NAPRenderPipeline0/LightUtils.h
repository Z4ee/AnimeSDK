#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class Light; }

#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTUTILS_CALCULATELIGHTMATRIX_OFFSET UNITYSDK_OFFSET(0x1AFAF1E0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LightUtils_TypeDefinitionIndex = 5973;

	class LightUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::Matrix4x4 CalculateLightMatrix(::UnityEngine::Light* light)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTUTILS_CALCULATELIGHTMATRIX_OFFSET))(light);
		}
	};
}
