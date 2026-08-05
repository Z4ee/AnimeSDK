#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_LWRP_LWRPADDITIONALCAMERADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E245B00)

namespace UnityEngine::Rendering::LWRP
{
	inline static constexpr unsigned int LWRPAdditionalCameraData_TypeDefinitionIndex = 27330;

	class LWRPAdditionalCameraData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LWRP_LWRPADDITIONALCAMERADATA__CTOR_OFFSET))(this);
		}
	};
}
