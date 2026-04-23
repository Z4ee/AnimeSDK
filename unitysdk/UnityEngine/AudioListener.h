#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AudioBehaviour.h"
#include "unitysdk/UnityEngine/AudioVelocityUpdateMode.h"
#include "unitysdk/UnityEngine/FFTWindow.h"

#define UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATAHELPER_OFFSET UNITYSDK_OFFSET(0x1A41B2A0)
#define UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATA_1_OFFSET UNITYSDK_OFFSET(0x1A41B360)
#define UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATA_OFFSET UNITYSDK_OFFSET(0x1A41B320)
#define UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATAHELPER_OFFSET UNITYSDK_OFFSET(0x1A41B2B0)
#define UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATA_1_OFFSET UNITYSDK_OFFSET(0x1A41B3B0)
#define UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATA_OFFSET UNITYSDK_OFFSET(0x1A41B370)
#define UNITYENGINE_AUDIOLISTENER_GET_PAUSE_OFFSET UNITYSDK_OFFSET(0x1A41B2E0)
#define UNITYENGINE_AUDIOLISTENER_GET_VELOCITYUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1A41B300)
#define UNITYENGINE_AUDIOLISTENER_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1A41B2C0)
#define UNITYENGINE_AUDIOLISTENER_SET_PAUSE_OFFSET UNITYSDK_OFFSET(0x1A41B2F0)
#define UNITYENGINE_AUDIOLISTENER_SET_VELOCITYUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1A41B310)
#define UNITYENGINE_AUDIOLISTENER_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1A41B2D0)
#define UNITYENGINE_AUDIOLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A41B3C0)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioListener_TypeDefinitionIndex = 5097;

	class AudioListener : public ::UnityEngine::AudioBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void GetOutputDataHelper(::Il2CppArray<::System::Single>* samples, ::System::Int32 channel)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATAHELPER_OFFSET))(samples, channel);
		}

		static ::System::Void GetSpectrumDataHelper(::Il2CppArray<::System::Single>* samples, ::System::Int32 channel, ::UnityEngine::FFTWindow window)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::Int32, ::UnityEngine::FFTWindow))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATAHELPER_OFFSET))(samples, channel, window);
		}

		static ::System::Single get_volume()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GET_VOLUME_OFFSET))();
		}

		static ::System::Void set_volume(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_SET_VOLUME_OFFSET))(value);
		}

		static ::System::Boolean get_pause()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GET_PAUSE_OFFSET))();
		}

		static ::System::Void set_pause(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_SET_PAUSE_OFFSET))(value);
		}

		::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode()
		{
			return ((::UnityEngine::AudioVelocityUpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GET_VELOCITYUPDATEMODE_OFFSET))(this);
		}

		::System::Void set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioVelocityUpdateMode))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_SET_VELOCITYUPDATEMODE_OFFSET))(this, value);
		}

		static ::Il2CppArray<::System::Single>* GetOutputData(::System::Int32 numSamples, ::System::Int32 channel)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATA_OFFSET))(numSamples, channel);
		}

		static ::System::Void GetOutputData_1(::Il2CppArray<::System::Single>* samples, ::System::Int32 channel)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATA_1_OFFSET))(samples, channel);
		}

		static ::Il2CppArray<::System::Single>* GetSpectrumData(::System::Int32 numSamples, ::System::Int32 channel, ::UnityEngine::FFTWindow window)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Int32, ::System::Int32, ::UnityEngine::FFTWindow))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATA_OFFSET))(numSamples, channel, window);
		}

		static ::System::Void GetSpectrumData_1(::Il2CppArray<::System::Single>* samples, ::System::Int32 channel, ::UnityEngine::FFTWindow window)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::Int32, ::UnityEngine::FFTWindow))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATA_1_OFFSET))(samples, channel, window);
		}
	};
}
