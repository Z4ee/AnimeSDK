#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FrameTiming.h"

#define UNITYENGINE_FRAMETIMINGMANAGER_CAPTUREFRAMETIMINGS_OFFSET UNITYSDK_OFFSET(0x1A443D70)
#define UNITYENGINE_FRAMETIMINGMANAGER_GETLATESTTIMINGS_OFFSET UNITYSDK_OFFSET(0x1A443D80)

namespace UnityEngine
{
	inline static constexpr unsigned int FrameTimingManager_TypeDefinitionIndex = 3936;

	class FrameTimingManager : public ::System::Object
	{
	public:
		static ::System::Void CaptureFrameTimings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FRAMETIMINGMANAGER_CAPTUREFRAMETIMINGS_OFFSET))();
		}

		static ::System::UInt32 GetLatestTimings(::System::UInt32 numFrames, ::Il2CppArray<::UnityEngine::FrameTiming>* timings)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::Il2CppArray<::UnityEngine::FrameTiming>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FRAMETIMINGMANAGER_GETLATESTTIMINGS_OFFSET))(numFrames, timings);
		}
	};
}
