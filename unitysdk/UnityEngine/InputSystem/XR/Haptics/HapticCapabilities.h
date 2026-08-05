#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_GET_FREQUENCYHZ_OFFSET UNITYSDK_OFFSET(0x424ED0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_GET_MAXBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x32EEE0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_GET_NUMCHANNELS_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_SET_FREQUENCYHZ_OFFSET UNITYSDK_OFFSET(0x6329D0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_SET_MAXBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x3C9D90)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_SET_NUMCHANNELS_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES__CTOR_OFFSET UNITYSDK_OFFSET(0x586780)

namespace UnityEngine::InputSystem::XR::Haptics
{
	inline static constexpr unsigned int HapticCapabilities_TypeDefinitionIndex = 32355;

	struct alignas(4) HapticCapabilities
	{
		::System::UInt32 _numChannels_k__BackingField; // 0x10
		::System::UInt32 _frequencyHz_k__BackingField; // 0x14
		::System::UInt32 _maxBufferSize_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 numChannels, ::System::UInt32 frequencyHz, ::System::UInt32 maxBufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES__CTOR_OFFSET))(this, numChannels, frequencyHz, maxBufferSize);
		}

		::System::UInt32 get_numChannels()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_GET_NUMCHANNELS_OFFSET))(this);
		}

		::System::Void set_numChannels(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_SET_NUMCHANNELS_OFFSET))(this, value);
		}

		::System::UInt32 get_frequencyHz()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_GET_FREQUENCYHZ_OFFSET))(this);
		}

		::System::Void set_frequencyHz(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_SET_FREQUENCYHZ_OFFSET))(this, value);
		}

		::System::UInt32 get_maxBufferSize()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_GET_MAXBUFFERSIZE_OFFSET))(this);
		}

		::System::Void set_maxBufferSize(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_SET_MAXBUFFERSIZE_OFFSET))(this, value);
		}
	};
}
