#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AudioBehaviour.h"
#include "unitysdk/UnityEngine/AudioVelocityUpdateMode.h"
#include "unitysdk/UnityEngine/FFTWindow.h"

#define UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATAHELPER_OFFSET UNITYSDK_OFFSET(0x1D2F1980)
#define UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATA_1_OFFSET UNITYSDK_OFFSET(0x1D2F1A40)
#define UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATA_OFFSET UNITYSDK_OFFSET(0x1D2F1A00)
#define UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATAHELPER_OFFSET UNITYSDK_OFFSET(0x1D2F1990)
#define UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATA_1_OFFSET UNITYSDK_OFFSET(0x1D2F1A90)
#define UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATA_OFFSET UNITYSDK_OFFSET(0x1D2F1A50)
#define UNITYENGINE_AUDIOLISTENER_GET_PAUSE_OFFSET UNITYSDK_OFFSET(0x1D2F19C0)
#define UNITYENGINE_AUDIOLISTENER_GET_VELOCITYUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1D2F19E0)
#define UNITYENGINE_AUDIOLISTENER_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1D2F19A0)
#define UNITYENGINE_AUDIOLISTENER_SET_PAUSE_OFFSET UNITYSDK_OFFSET(0x1D2F19D0)
#define UNITYENGINE_AUDIOLISTENER_SET_VELOCITYUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1D2F19F0)
#define UNITYENGINE_AUDIOLISTENER_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1D2F19B0)
#define UNITYENGINE_AUDIOLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F1AA0)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioListener_TypeDefinitionIndex = 5196;

	class AudioListener : public ::UnityEngine::AudioBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void GetOutputDataHelper(::Il2CppArray<::System::Single>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATAHELPER_OFFSET))(a1, a2);
		}

		static ::System::Void GetSpectrumDataHelper(::Il2CppArray<::System::Single>* a1, ::System::Int32 a2, ::UnityEngine::FFTWindow a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::Int32, ::UnityEngine::FFTWindow))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATAHELPER_OFFSET))(a1, a2, a3);
		}

		static ::System::Single get_volume()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GET_VOLUME_OFFSET))();
		}

		static ::System::Void set_volume(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_SET_VOLUME_OFFSET))(a1);
		}

		static ::System::Boolean get_pause()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GET_PAUSE_OFFSET))();
		}

		static ::System::Void set_pause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_SET_PAUSE_OFFSET))(a1);
		}

		::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode()
		{
			return ((::UnityEngine::AudioVelocityUpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GET_VELOCITYUPDATEMODE_OFFSET))(this);
		}

		::System::Void set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioVelocityUpdateMode))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_SET_VELOCITYUPDATEMODE_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::System::Single>* GetOutputData(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATA_OFFSET))(a1, a2);
		}

		static ::System::Void GetOutputData_1(::Il2CppArray<::System::Single>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATA_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Single>* GetSpectrumData(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::FFTWindow a3)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Int32, ::System::Int32, ::UnityEngine::FFTWindow))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GetSpectrumData_1(::Il2CppArray<::System::Single>* a1, ::System::Int32 a2, ::UnityEngine::FFTWindow a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::Int32, ::UnityEngine::FFTWindow))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATA_1_OFFSET))(a1, a2, a3);
		}
	};
}
