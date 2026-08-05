#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AudioClipLoadType.h"
#include "unitysdk/UnityEngine/AudioDataLoadState.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }
namespace UnityEngine { class AudioClip_PCMReaderCallback; }
namespace UnityEngine { class AudioClip_PCMSetPositionCallback; }

#define UNITYENGINE_AUDIOCLIP_ADD_M_PCMREADERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F998F80)
#define UNITYENGINE_AUDIOCLIP_ADD_M_PCMSETPOSITIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F999000)
#define UNITYENGINE_AUDIOCLIP_CONSTRUCT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F998940)
#define UNITYENGINE_AUDIOCLIP_CREATEUSERSOUND_OFFSET UNITYSDK_OFFSET(0x1F998960)
#define UNITYENGINE_AUDIOCLIP_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1F998C90)
#define UNITYENGINE_AUDIOCLIP_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1F998F20)
#define UNITYENGINE_AUDIOCLIP_CREATE_3_OFFSET UNITYSDK_OFFSET(0x1F998C70)
#define UNITYENGINE_AUDIOCLIP_CREATE_4_OFFSET UNITYSDK_OFFSET(0x1F998F50)
#define UNITYENGINE_AUDIOCLIP_CREATE_5_OFFSET UNITYSDK_OFFSET(0x1F998CC0)
#define UNITYENGINE_AUDIOCLIP_CREATE_OFFSET UNITYSDK_OFFSET(0x1F998C50)
#define UNITYENGINE_AUDIOCLIP_GETDATA_1_OFFSET UNITYSDK_OFFSET(0x1F998A20)
#define UNITYENGINE_AUDIOCLIP_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F998920)
#define UNITYENGINE_AUDIOCLIP_GETNAME_OFFSET UNITYSDK_OFFSET(0x1F998950)
#define UNITYENGINE_AUDIOCLIP_GET_AMBISONIC_OFFSET UNITYSDK_OFFSET(0x1F9989F0)
#define UNITYENGINE_AUDIOCLIP_GET_CHANNELS_OFFSET UNITYSDK_OFFSET(0x1F998980)
#define UNITYENGINE_AUDIOCLIP_GET_FREQUENCY_OFFSET UNITYSDK_OFFSET(0x1F998990)
#define UNITYENGINE_AUDIOCLIP_GET_ISREADYTOPLAY_OFFSET UNITYSDK_OFFSET(0x1F9989A0)
#define UNITYENGINE_AUDIOCLIP_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1F996F30)
#define UNITYENGINE_AUDIOCLIP_GET_LOADINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1F998A00)
#define UNITYENGINE_AUDIOCLIP_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0x1F998A10)
#define UNITYENGINE_AUDIOCLIP_GET_LOADTYPE_OFFSET UNITYSDK_OFFSET(0x1F9989B0)
#define UNITYENGINE_AUDIOCLIP_GET_PRELOADAUDIODATA_OFFSET UNITYSDK_OFFSET(0x1F9989E0)
#define UNITYENGINE_AUDIOCLIP_GET_SAMPLES_OFFSET UNITYSDK_OFFSET(0x1F998970)
#define UNITYENGINE_AUDIOCLIP_INVOKEPCMREADERCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F999180)
#define UNITYENGINE_AUDIOCLIP_INVOKEPCMSETPOSITIONCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F9996B0)
#define UNITYENGINE_AUDIOCLIP_LOADAUDIODATA_OFFSET UNITYSDK_OFFSET(0x1F9989C0)
#define UNITYENGINE_AUDIOCLIP_REMOVE_M_PCMREADERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F999080)
#define UNITYENGINE_AUDIOCLIP_REMOVE_M_PCMSETPOSITIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F999100)
#define UNITYENGINE_AUDIOCLIP_SETDATA_1_OFFSET UNITYSDK_OFFSET(0x1F998B00)
#define UNITYENGINE_AUDIOCLIP_SETDATA_OFFSET UNITYSDK_OFFSET(0x1F998930)
#define UNITYENGINE_AUDIOCLIP_UNLOADAUDIODATA_OFFSET UNITYSDK_OFFSET(0x1F9989D0)
#define UNITYENGINE_AUDIOCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9988D0)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioClip_TypeDefinitionIndex = 18759;

	class AudioClip : public ::UnityEngine::Object
	{
	public:
		::UnityEngine::AudioClip_PCMReaderCallback* m_PCMReaderCallback; // 0x18
		::UnityEngine::AudioClip_PCMSetPositionCallback* m_PCMSetPositionCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP__CTOR_OFFSET))(this);
		}

		static ::System::Boolean GetData(::UnityEngine::AudioClip* clip, ::Il2CppArray<::System::Single>* data, ::System::Int32 numSamples, ::System::Int32 samplesOffset)
		{
			return ((::System::Boolean(*)(::UnityEngine::AudioClip*, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GETDATA_OFFSET))(clip, data, numSamples, samplesOffset);
		}

		static ::System::Boolean SetData(::UnityEngine::AudioClip* clip, ::Il2CppArray<::System::Single>* data, ::System::Int32 numsamples, ::System::Int32 samplesOffset)
		{
			return ((::System::Boolean(*)(::UnityEngine::AudioClip*, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_SETDATA_OFFSET))(clip, data, numsamples, samplesOffset);
		}

		static ::UnityEngine::AudioClip* Construct_Internal()
		{
			return ((::UnityEngine::AudioClip*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_CONSTRUCT_INTERNAL_OFFSET))();
		}

		::System::String* GetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GETNAME_OFFSET))(this);
		}

		::System::Void CreateUserSound(::System::String* name, ::System::Int32 lengthSamples, ::System::Int32 channels, ::System::Int32 frequency, ::System::Boolean stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_CREATEUSERSOUND_OFFSET))(this, name, lengthSamples, channels, frequency, stream);
		}

		::System::Single get_length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_LENGTH_OFFSET))(this);
		}

		::System::Int32 get_samples()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_SAMPLES_OFFSET))(this);
		}

		::System::Int32 get_channels()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_CHANNELS_OFFSET))(this);
		}

		::System::Int32 get_frequency()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_FREQUENCY_OFFSET))(this);
		}

		::System::Boolean get_isReadyToPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_ISREADYTOPLAY_OFFSET))(this);
		}

		::UnityEngine::AudioClipLoadType get_loadType()
		{
			return ((::UnityEngine::AudioClipLoadType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_LOADTYPE_OFFSET))(this);
		}

		::System::Boolean LoadAudioData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_LOADAUDIODATA_OFFSET))(this);
		}

		::System::Boolean UnloadAudioData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_UNLOADAUDIODATA_OFFSET))(this);
		}

		::System::Boolean get_preloadAudioData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_PRELOADAUDIODATA_OFFSET))(this);
		}

		::System::Boolean get_ambisonic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_AMBISONIC_OFFSET))(this);
		}

		::System::Boolean get_loadInBackground()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_LOADINBACKGROUND_OFFSET))(this);
		}

		::UnityEngine::AudioDataLoadState get_loadState()
		{
			return ((::UnityEngine::AudioDataLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_LOADSTATE_OFFSET))(this);
		}

		::System::Boolean GetData_1(::Il2CppArray<::System::Single>* data, ::System::Int32 offsetSamples)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GETDATA_1_OFFSET))(this, data, offsetSamples);
		}

		::System::Boolean SetData_1(::Il2CppArray<::System::Single>* data, ::System::Int32 offsetSamples)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_SETDATA_1_OFFSET))(this, data, offsetSamples);
		}

		static ::UnityEngine::AudioClip* Create(::System::String* name, ::System::Int32 lengthSamples, ::System::Int32 channels, ::System::Int32 frequency, ::System::Boolean _3D, ::System::Boolean stream)
		{
			return ((::UnityEngine::AudioClip*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_CREATE_OFFSET))(name, lengthSamples, channels, frequency, _3D, stream);
		}

		static ::UnityEngine::AudioClip* Create_1(::System::String* name, ::System::Int32 lengthSamples, ::System::Int32 channels, ::System::Int32 frequency, ::System::Boolean _3D, ::System::Boolean stream, ::UnityEngine::AudioClip_PCMReaderCallback* pcmreadercallback)
		{
			return ((::UnityEngine::AudioClip*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::UnityEngine::AudioClip_PCMReaderCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_CREATE_1_OFFSET))(name, lengthSamples, channels, frequency, _3D, stream, pcmreadercallback);
		}

		static ::UnityEngine::AudioClip* Create_2(::System::String* name, ::System::Int32 lengthSamples, ::System::Int32 channels, ::System::Int32 frequency, ::System::Boolean _3D, ::System::Boolean stream, ::UnityEngine::AudioClip_PCMReaderCallback* pcmreadercallback, ::UnityEngine::AudioClip_PCMSetPositionCallback* pcmsetpositioncallback)
		{
			return ((::UnityEngine::AudioClip*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::UnityEngine::AudioClip_PCMReaderCallback*, ::UnityEngine::AudioClip_PCMSetPositionCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_CREATE_2_OFFSET))(name, lengthSamples, channels, frequency, _3D, stream, pcmreadercallback, pcmsetpositioncallback);
		}

		static ::UnityEngine::AudioClip* Create_3(::System::String* name, ::System::Int32 lengthSamples, ::System::Int32 channels, ::System::Int32 frequency, ::System::Boolean stream)
		{
			return ((::UnityEngine::AudioClip*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_CREATE_3_OFFSET))(name, lengthSamples, channels, frequency, stream);
		}

		static ::UnityEngine::AudioClip* Create_4(::System::String* name, ::System::Int32 lengthSamples, ::System::Int32 channels, ::System::Int32 frequency, ::System::Boolean stream, ::UnityEngine::AudioClip_PCMReaderCallback* pcmreadercallback)
		{
			return ((::UnityEngine::AudioClip*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::AudioClip_PCMReaderCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_CREATE_4_OFFSET))(name, lengthSamples, channels, frequency, stream, pcmreadercallback);
		}

		static ::UnityEngine::AudioClip* Create_5(::System::String* name, ::System::Int32 lengthSamples, ::System::Int32 channels, ::System::Int32 frequency, ::System::Boolean stream, ::UnityEngine::AudioClip_PCMReaderCallback* pcmreadercallback, ::UnityEngine::AudioClip_PCMSetPositionCallback* pcmsetpositioncallback)
		{
			return ((::UnityEngine::AudioClip*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::AudioClip_PCMReaderCallback*, ::UnityEngine::AudioClip_PCMSetPositionCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_CREATE_5_OFFSET))(name, lengthSamples, channels, frequency, stream, pcmreadercallback, pcmsetpositioncallback);
		}

		::System::Void add_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioClip_PCMReaderCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_ADD_M_PCMREADERCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioClip_PCMReaderCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_REMOVE_M_PCMREADERCALLBACK_OFFSET))(this, value);
		}

		::System::Void add_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioClip_PCMSetPositionCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_ADD_M_PCMSETPOSITIONCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioClip_PCMSetPositionCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_REMOVE_M_PCMSETPOSITIONCALLBACK_OFFSET))(this, value);
		}

		::System::Void InvokePCMReaderCallback_Internal(::Il2CppArray<::System::Single>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_INVOKEPCMREADERCALLBACK_INTERNAL_OFFSET))(this, data);
		}

		::System::Void InvokePCMSetPositionCallback_Internal(::System::Int32 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_INVOKEPCMSETPOSITIONCALLBACK_INTERNAL_OFFSET))(this, position);
		}
	};
}
