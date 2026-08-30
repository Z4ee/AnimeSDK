#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CameraEvent.h"

#define UNITYENGINE_RENDERING_CAMERAEVENTUTILS_ISVALID_OFFSET UNITYSDK_OFFSET(0x1DCCA950)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CameraEventUtils_TypeDefinitionIndex = 4698;

	class CameraEventUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsValid(::UnityEngine::Rendering::CameraEvent a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CameraEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERAEVENTUTILS_ISVALID_OFFSET))(a1);
		}
	};
}
