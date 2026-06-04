#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/DurationUnit.h"

#define UNITYENGINE_ANIMATORTRANSITIONINFO_GET_ANYSTATE_OFFSET UNITYSDK_OFFSET(0x89B40)
#define UNITYENGINE_ANIMATORTRANSITIONINFO_GET_DURATIONUNIT_OFFSET UNITYSDK_OFFSET(0x387D420)
#define UNITYENGINE_ANIMATORTRANSITIONINFO_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x802E0)
#define UNITYENGINE_ANIMATORTRANSITIONINFO_GET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x2CDB370)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorTransitionInfo_TypeDefinitionIndex = 5132;

	struct alignas(4) AnimatorTransitionInfo
	{
		::System::Int32 m_FullPath; // 0x10
		::System::Int32 m_UserName; // 0x14
		::System::Int32 m_Name; // 0x18
		::System::Boolean m_HasFixedDuration; // 0x1C
		::System::Single m_Duration; // 0x20
		::System::Single m_NormalizedTime; // 0x24
		::System::Boolean m_AnyState; // 0x28
		::System::Int32 m_TransitionType; // 0x2C

		::UnityEngine::DurationUnit get_durationUnit()
		{
			return ((::UnityEngine::DurationUnit(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORTRANSITIONINFO_GET_DURATIONUNIT_OFFSET))(this);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORTRANSITIONINFO_GET_DURATION_OFFSET))(this);
		}

		::System::Single get_normalizedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORTRANSITIONINFO_GET_NORMALIZEDTIME_OFFSET))(this);
		}

		::System::Boolean get_anyState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORTRANSITIONINFO_GET_ANYSTATE_OFFSET))(this);
		}
	};
}
