#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CameraEvent.h"

#define UNITYENGINE_RENDERING_CAMERAEVENTUTILS_ISVALID_OFFSET UNITYSDK_OFFSET(0x1D81A1D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CameraEventUtils_TypeDefinitionIndex = 6170;

	class CameraEventUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsValid(::UnityEngine::Rendering::CameraEvent value)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CameraEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERAEVENTUTILS_ISVALID_OFFSET))(value);
		}
	};
}
