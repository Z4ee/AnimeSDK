#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_GET_FREQUENCYHZ_OFFSET UNITYSDK_OFFSET(0x3A4E50)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_GET_MAXBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_GET_NUMCHANNELS_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_SET_FREQUENCYHZ_OFFSET UNITYSDK_OFFSET(0x5B6810)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_SET_MAXBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x50A4B0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_SET_NUMCHANNELS_OFFSET UNITYSDK_OFFSET(0x2E85F0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES__CTOR_OFFSET UNITYSDK_OFFSET(0x3EABD0)

namespace UnityEngine::InputSystem::XR::Haptics
{
	inline static constexpr unsigned int HapticCapabilities_TypeDefinitionIndex = 29079;

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
