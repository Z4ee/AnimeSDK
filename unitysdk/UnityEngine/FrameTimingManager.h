#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FrameTiming.h"

#define UNITYENGINE_FRAMETIMINGMANAGER_CAPTUREFRAMETIMINGS_OFFSET UNITYSDK_OFFSET(0x1DEDA930)
#define UNITYENGINE_FRAMETIMINGMANAGER_GETLATESTTIMINGS_OFFSET UNITYSDK_OFFSET(0x1DEDA940)

namespace UnityEngine
{
	inline static constexpr unsigned int FrameTimingManager_TypeDefinitionIndex = 4125;

	class FrameTimingManager : public ::System::Object
	{
	public:
		static ::System::Void CaptureFrameTimings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FRAMETIMINGMANAGER_CAPTUREFRAMETIMINGS_OFFSET))();
		}

		static ::System::UInt32 GetLatestTimings(::System::UInt32 a1, ::Il2CppArray<::UnityEngine::FrameTiming>* a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::Il2CppArray<::UnityEngine::FrameTiming>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FRAMETIMINGMANAGER_GETLATESTTIMINGS_OFFSET))(a1, a2);
		}
	};
}
