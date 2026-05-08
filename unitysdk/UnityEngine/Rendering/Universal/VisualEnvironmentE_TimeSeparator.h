#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TIMESEPARATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD1CF90)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_TimeSeparator_TypeDefinitionIndex = 29910;

	class VisualEnvironmentE_TimeSeparator : public ::System::Object
	{
	public:
		// static const ::System::Int32 Morning = 0x6; // 0x0
		// static const ::System::Int32 Noon = 0xC; // 0x0
		// static const ::System::Int32 SunSet = 0x12; // 0x0
		// static const ::System::Int32 InNight = 0x14; // 0x0
		// static const ::System::Int32 Night = 0x18; // 0x0
		// static const ::System::Int32 NightZero = 0x0; // 0x0
		// static const ::System::Int32 OutNight = 0x4; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TIMESEPARATOR__CTOR_OFFSET))(this);
		}
	};
}
