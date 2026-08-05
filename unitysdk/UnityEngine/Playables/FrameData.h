#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/FrameData_EvaluationType.h"
#include "unitysdk/UnityEngine/Playables/FrameData_Flags.h"
#include "unitysdk/UnityEngine/Playables/PlayState.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutput.h"

#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0xA9ED60)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_EFFECTIVEPARENTSPEED_OFFSET UNITYSDK_OFFSET(0x7F6380)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_EFFECTIVEPLAYSTATE_OFFSET UNITYSDK_OFFSET(0xA9EDB0)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_EFFECTIVESPEED_OFFSET UNITYSDK_OFFSET(0x5ED170)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_EVALUATIONTYPE_OFFSET UNITYSDK_OFFSET(0xA9ED70)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_FRAMEID_OFFSET UNITYSDK_OFFSET(0x259D70)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_OUTPUT_OFFSET UNITYSDK_OFFSET(0x45C060)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_SEEKOCCURRED_OFFSET UNITYSDK_OFFSET(0xA9ED80)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_TIMEHELD_OFFSET UNITYSDK_OFFSET(0xA9EDA0)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_GET_TIMELOOPED_OFFSET UNITYSDK_OFFSET(0xA9ED90)
#define UNITYENGINE_PLAYABLES_FRAMEDATA_HASFLAGS_OFFSET UNITYSDK_OFFSET(0xA9ED50)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int FrameData_TypeDefinitionIndex = 6280;

	struct alignas(8) FrameData
	{
		::System::UInt64 m_FrameID; // 0x10
		::System::Double m_DeltaTime; // 0x18
		::System::Single m_Weight; // 0x20
		::System::Single m_EffectiveWeight; // 0x24
		::System::Double m_EffectiveParentDelay; // 0x28
		::System::Single m_EffectiveParentSpeed; // 0x30
		::System::Single m_EffectiveSpeed; // 0x34
		::UnityEngine::Playables::FrameData_Flags m_Flags; // 0x38
		::UnityEngine::Playables::PlayableOutput m_Output; // 0x40

		::System::Boolean HasFlags(::UnityEngine::Playables::FrameData_Flags flag)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::FrameData_Flags))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_HASFLAGS_OFFSET))(this, flag);
		}

		::System::UInt64 get_frameId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_FRAMEID_OFFSET))(this);
		}

		::System::Single get_deltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_DELTATIME_OFFSET))(this);
		}

		::System::Single get_effectiveParentSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_EFFECTIVEPARENTSPEED_OFFSET))(this);
		}

		::System::Single get_effectiveSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_EFFECTIVESPEED_OFFSET))(this);
		}

		::UnityEngine::Playables::FrameData_EvaluationType get_evaluationType()
		{
			return ((::UnityEngine::Playables::FrameData_EvaluationType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_EVALUATIONTYPE_OFFSET))(this);
		}

		::System::Boolean get_seekOccurred()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_SEEKOCCURRED_OFFSET))(this);
		}

		::System::Boolean get_timeLooped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_TIMELOOPED_OFFSET))(this);
		}

		::System::Boolean get_timeHeld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_TIMEHELD_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableOutput get_output()
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_OUTPUT_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayState get_effectivePlayState()
		{
			return ((::UnityEngine::Playables::PlayState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMEDATA_GET_EFFECTIVEPLAYSTATE_OFFSET))(this);
		}
	};
}
