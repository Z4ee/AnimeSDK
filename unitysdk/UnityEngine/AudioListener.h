#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AudioBehaviour.h"
#include "unitysdk/UnityEngine/AudioVelocityUpdateMode.h"
#include "unitysdk/UnityEngine/FFTWindow.h"

#define UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATAHELPER_OFFSET UNITYSDK_OFFSET(0x1F001EE0)
#define UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATA_1_OFFSET UNITYSDK_OFFSET(0x1F001FA0)
#define UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATA_OFFSET UNITYSDK_OFFSET(0x1F001F60)
#define UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATAHELPER_OFFSET UNITYSDK_OFFSET(0x1F001EF0)
#define UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATA_1_OFFSET UNITYSDK_OFFSET(0x1F001FF0)
#define UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATA_OFFSET UNITYSDK_OFFSET(0x1F001FB0)
#define UNITYENGINE_AUDIOLISTENER_GET_PAUSE_OFFSET UNITYSDK_OFFSET(0x1F001F20)
#define UNITYENGINE_AUDIOLISTENER_GET_VELOCITYUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1F001F40)
#define UNITYENGINE_AUDIOLISTENER_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1F001F00)
#define UNITYENGINE_AUDIOLISTENER_SET_PAUSE_OFFSET UNITYSDK_OFFSET(0x1F001F30)
#define UNITYENGINE_AUDIOLISTENER_SET_VELOCITYUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1F001F50)
#define UNITYENGINE_AUDIOLISTENER_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1F001F10)
#define UNITYENGINE_AUDIOLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F002000)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioListener_TypeDefinitionIndex = 5141;

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
