#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_MOTION_GET_AVERAGEDURATION_OFFSET UNITYSDK_OFFSET(0x1E83A560)
#define UNITYENGINE_MOTION_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x1E83A570)
#define UNITYENGINE_MOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E83A510)

namespace UnityEngine
{
	inline static constexpr unsigned int Motion_TypeDefinitionIndex = 6646;

	class Motion : public ::UnityEngine::Object
	{
	public:
		::System::Boolean _isAnimatorMotion_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION__CTOR_OFFSET))(this);
		}

		::System::Single get_averageDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_GET_AVERAGEDURATION_OFFSET))(this);
		}

		::System::Boolean get_isLooping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_GET_ISLOOPING_OFFSET))(this);
		}
	};
}
