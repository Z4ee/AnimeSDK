#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AudioBehaviour.h"
#include "unitysdk/UnityEngine/AudioRolloffMode.h"
#include "unitysdk/UnityEngine/AudioSourceCurveType.h"
#include "unitysdk/UnityEngine/AudioVelocityUpdateMode.h"
#include "unitysdk/UnityEngine/FFTWindow.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class AudioClip; }
namespace UnityEngine::Audio { class AudioMixerGroup; }

#define UNITYENGINE_AUDIOSOURCE_GETAMBISONICDECODERFLOAT_OFFSET UNITYSDK_OFFSET(0x1E5AE560)
#define UNITYENGINE_AUDIOSOURCE_GETCUSTOMCURVEHELPER_OFFSET UNITYSDK_OFFSET(0x1E5AD840)
#define UNITYENGINE_AUDIOSOURCE_GETCUSTOMCURVE_OFFSET UNITYSDK_OFFSET(0x1E5AE080)
#define UNITYENGINE_AUDIOSOURCE_GETOUTPUTDATAHELPER_OFFSET UNITYSDK_OFFSET(0x1E5AD850)
#define UNITYENGINE_AUDIOSOURCE_GETOUTPUTDATA_1_OFFSET UNITYSDK_OFFSET(0x1E5AE250)
#define UNITYENGINE_AUDIOSOURCE_GETOUTPUTDATA_OFFSET UNITYSDK_OFFSET(0x1E5AE1F0)
#define UNITYENGINE_AUDIOSOURCE_GETPITCH_OFFSET UNITYSDK_OFFSET(0x1E5AD7D0)
#define UNITYENGINE_AUDIOSOURCE_GETSPATIALIZERFLOAT_OFFSET UNITYSDK_OFFSET(0x1E5AE550)
#define UNITYENGINE_AUDIOSOURCE_GETSPECTRUMDATAHELPER_OFFSET UNITYSDK_OFFSET(0x1E5AD860)
#define UNITYENGINE_AUDIOSOURCE_GETSPECTRUMDATA_1_OFFSET UNITYSDK_OFFSET(0x1E5AE2C0)
#define UNITYENGINE_AUDIOSOURCE_GETSPECTRUMDATA_OFFSET UNITYSDK_OFFSET(0x1E5AE260)
#define UNITYENGINE_AUDIOSOURCE_GET_BYPASSEFFECTS_OFFSET UNITYSDK_OFFSET(0x1E5AE0B0)
#define UNITYENGINE_AUDIOSOURCE_GET_BYPASSLISTENEREFFECTS_OFFSET UNITYSDK_OFFSET(0x1E5AE0D0)
#define UNITYENGINE_AUDIOSOURCE_GET_BYPASSREVERBZONES_OFFSET UNITYSDK_OFFSET(0x1E5AE0F0)
#define UNITYENGINE_AUDIOSOURCE_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1E5AD8F0)
#define UNITYENGINE_AUDIOSOURCE_GET_DOPPLERLEVEL_OFFSET UNITYSDK_OFFSET(0x1E5AE110)
#define UNITYENGINE_AUDIOSOURCE_GET_IGNORELISTENERPAUSE_OFFSET UNITYSDK_OFFSET(0x1E5ADFC0)
#define UNITYENGINE_AUDIOSOURCE_GET_IGNORELISTENERVOLUME_OFFSET UNITYSDK_OFFSET(0x1E5ADF80)
#define UNITYENGINE_AUDIOSOURCE_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1E5ADD00)
#define UNITYENGINE_AUDIOSOURCE_GET_ISVIRTUAL_OFFSET UNITYSDK_OFFSET(0x1E5ADD10)
#define UNITYENGINE_AUDIOSOURCE_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1E5ADF60)
#define UNITYENGINE_AUDIOSOURCE_GET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E5AE1B0)
#define UNITYENGINE_AUDIOSOURCE_GET_MAXVOLUME_OFFSET UNITYSDK_OFFSET(0x1E5AE3A0)
#define UNITYENGINE_AUDIOSOURCE_GET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E5AE190)
#define UNITYENGINE_AUDIOSOURCE_GET_MINVOLUME_OFFSET UNITYSDK_OFFSET(0x1E5AE2D0)
#define UNITYENGINE_AUDIOSOURCE_GET_MUTE_OFFSET UNITYSDK_OFFSET(0x1E5AE170)
#define UNITYENGINE_AUDIOSOURCE_GET_OUTPUTAUDIOMIXERGROUP_OFFSET UNITYSDK_OFFSET(0x1E5AD910)
#define UNITYENGINE_AUDIOSOURCE_GET_PANSTEREO_OFFSET UNITYSDK_OFFSET(0x1E5AE000)
#define UNITYENGINE_AUDIOSOURCE_GET_PITCH_OFFSET UNITYSDK_OFFSET(0x1E5AD890)
#define UNITYENGINE_AUDIOSOURCE_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1E5ADFA0)
#define UNITYENGINE_AUDIOSOURCE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1E5AE150)
#define UNITYENGINE_AUDIOSOURCE_GET_REVERBZONEMIX_OFFSET UNITYSDK_OFFSET(0x1E5AE090)
#define UNITYENGINE_AUDIOSOURCE_GET_ROLLOFFFACTOR_OFFSET UNITYSDK_OFFSET(0x1E5AE470)
#define UNITYENGINE_AUDIOSOURCE_GET_ROLLOFFMODE_OFFSET UNITYSDK_OFFSET(0x1E5AE1D0)
#define UNITYENGINE_AUDIOSOURCE_GET_SPATIALBLEND_OFFSET UNITYSDK_OFFSET(0x1E5AE020)
#define UNITYENGINE_AUDIOSOURCE_GET_SPATIALIZEPOSTEFFECTS_OFFSET UNITYSDK_OFFSET(0x1E5AE050)
#define UNITYENGINE_AUDIOSOURCE_GET_SPATIALIZE_OFFSET UNITYSDK_OFFSET(0x1E5AE030)
#define UNITYENGINE_AUDIOSOURCE_GET_SPREAD_OFFSET UNITYSDK_OFFSET(0x1E5AE130)
#define UNITYENGINE_AUDIOSOURCE_GET_TIMESAMPLES_OFFSET UNITYSDK_OFFSET(0x1E5AD8D0)
#define UNITYENGINE_AUDIOSOURCE_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1E5AD8B0)
#define UNITYENGINE_AUDIOSOURCE_GET_VELOCITYUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1E5ADFE0)
#define UNITYENGINE_AUDIOSOURCE_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1E5AD870)
#define UNITYENGINE_AUDIOSOURCE_PAUSE_OFFSET UNITYSDK_OFFSET(0x1E5ADCE0)
#define UNITYENGINE_AUDIOSOURCE_PLAYCLIPATPOINT_1_OFFSET UNITYSDK_OFFSET(0x1E5ADD50)
#define UNITYENGINE_AUDIOSOURCE_PLAYCLIPATPOINT_OFFSET UNITYSDK_OFFSET(0x1E5ADD20)
#define UNITYENGINE_AUDIOSOURCE_PLAYDELAYED_OFFSET UNITYSDK_OFFSET(0x1E5AD950)
#define UNITYENGINE_AUDIOSOURCE_PLAYHELPER_OFFSET UNITYSDK_OFFSET(0x1E5AD7F0)
#define UNITYENGINE_AUDIOSOURCE_PLAYONESHOTHELPER_OFFSET UNITYSDK_OFFSET(0x1E5AD810)
#define UNITYENGINE_AUDIOSOURCE_PLAYONESHOT_1_OFFSET UNITYSDK_OFFSET(0x1E5ADB30)
#define UNITYENGINE_AUDIOSOURCE_PLAYONESHOT_OFFSET UNITYSDK_OFFSET(0x1E5AD9C0)
#define UNITYENGINE_AUDIOSOURCE_PLAYSCHEDULED_OFFSET UNITYSDK_OFFSET(0x1E5AD990)
#define UNITYENGINE_AUDIOSOURCE_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1E5AD930)
#define UNITYENGINE_AUDIOSOURCE_PLAY_2_OFFSET UNITYSDK_OFFSET(0x1E5AD940)
#define UNITYENGINE_AUDIOSOURCE_PLAY_OFFSET UNITYSDK_OFFSET(0x1E5AD800)
#define UNITYENGINE_AUDIOSOURCE_SETAMBISONICDECODERFLOAT_OFFSET UNITYSDK_OFFSET(0x1E5AE570)
#define UNITYENGINE_AUDIOSOURCE_SETCUSTOMCURVEHELPER_OFFSET UNITYSDK_OFFSET(0x1E5AD830)
#define UNITYENGINE_AUDIOSOURCE_SETCUSTOMCURVE_OFFSET UNITYSDK_OFFSET(0x1E5AE070)
#define UNITYENGINE_AUDIOSOURCE_SETPITCH_OFFSET UNITYSDK_OFFSET(0x1E5AD7E0)
#define UNITYENGINE_AUDIOSOURCE_SETSCHEDULEDENDTIME_OFFSET UNITYSDK_OFFSET(0x1E5ADCC0)
#define UNITYENGINE_AUDIOSOURCE_SETSCHEDULEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1E5ADCB0)
#define UNITYENGINE_AUDIOSOURCE_SETSPATIALIZERFLOAT_OFFSET UNITYSDK_OFFSET(0x1E5AE540)
#define UNITYENGINE_AUDIOSOURCE_SET_BYPASSEFFECTS_OFFSET UNITYSDK_OFFSET(0x1E5AE0C0)
#define UNITYENGINE_AUDIOSOURCE_SET_BYPASSLISTENEREFFECTS_OFFSET UNITYSDK_OFFSET(0x1E5AE0E0)
#define UNITYENGINE_AUDIOSOURCE_SET_BYPASSREVERBZONES_OFFSET UNITYSDK_OFFSET(0x1E5AE100)
#define UNITYENGINE_AUDIOSOURCE_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1E5AD900)
#define UNITYENGINE_AUDIOSOURCE_SET_DOPPLERLEVEL_OFFSET UNITYSDK_OFFSET(0x1E5AE120)
#define UNITYENGINE_AUDIOSOURCE_SET_IGNORELISTENERPAUSE_OFFSET UNITYSDK_OFFSET(0x1E5ADFD0)
#define UNITYENGINE_AUDIOSOURCE_SET_IGNORELISTENERVOLUME_OFFSET UNITYSDK_OFFSET(0x1E5ADF90)
#define UNITYENGINE_AUDIOSOURCE_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1E5ADF70)
#define UNITYENGINE_AUDIOSOURCE_SET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E5AE1C0)
#define UNITYENGINE_AUDIOSOURCE_SET_MAXVOLUME_OFFSET UNITYSDK_OFFSET(0x1E5AE400)
#define UNITYENGINE_AUDIOSOURCE_SET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E5AE1A0)
#define UNITYENGINE_AUDIOSOURCE_SET_MINVOLUME_OFFSET UNITYSDK_OFFSET(0x1E5AE330)
#define UNITYENGINE_AUDIOSOURCE_SET_MUTE_OFFSET UNITYSDK_OFFSET(0x1E5AE180)
#define UNITYENGINE_AUDIOSOURCE_SET_OUTPUTAUDIOMIXERGROUP_OFFSET UNITYSDK_OFFSET(0x1E5AD920)
#define UNITYENGINE_AUDIOSOURCE_SET_PANSTEREO_OFFSET UNITYSDK_OFFSET(0x1E5AE010)
#define UNITYENGINE_AUDIOSOURCE_SET_PITCH_OFFSET UNITYSDK_OFFSET(0x1E5AD8A0)
#define UNITYENGINE_AUDIOSOURCE_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1E5ADFB0)
#define UNITYENGINE_AUDIOSOURCE_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1E5AE160)
#define UNITYENGINE_AUDIOSOURCE_SET_REVERBZONEMIX_OFFSET UNITYSDK_OFFSET(0x1E5AE0A0)
#define UNITYENGINE_AUDIOSOURCE_SET_ROLLOFFFACTOR_OFFSET UNITYSDK_OFFSET(0x1E5AE4D0)
#define UNITYENGINE_AUDIOSOURCE_SET_ROLLOFFMODE_OFFSET UNITYSDK_OFFSET(0x1E5AE1E0)
#define UNITYENGINE_AUDIOSOURCE_SET_SPATIALBLEND_OFFSET UNITYSDK_OFFSET(0x1E5ADF50)
#define UNITYENGINE_AUDIOSOURCE_SET_SPATIALIZEPOSTEFFECTS_OFFSET UNITYSDK_OFFSET(0x1E5AE060)
#define UNITYENGINE_AUDIOSOURCE_SET_SPATIALIZE_OFFSET UNITYSDK_OFFSET(0x1E5AE040)
#define UNITYENGINE_AUDIOSOURCE_SET_SPREAD_OFFSET UNITYSDK_OFFSET(0x1E5AE140)
#define UNITYENGINE_AUDIOSOURCE_SET_TIMESAMPLES_OFFSET UNITYSDK_OFFSET(0x1E5AD8E0)
#define UNITYENGINE_AUDIOSOURCE_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1E5AD8C0)
#define UNITYENGINE_AUDIOSOURCE_SET_VELOCITYUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1E5ADFF0)
#define UNITYENGINE_AUDIOSOURCE_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1E5AD880)
#define UNITYENGINE_AUDIOSOURCE_STOP_1_OFFSET UNITYSDK_OFFSET(0x1E5ADCD0)
#define UNITYENGINE_AUDIOSOURCE_STOP_OFFSET UNITYSDK_OFFSET(0x1E5AD820)
#define UNITYENGINE_AUDIOSOURCE_UNPAUSE_OFFSET UNITYSDK_OFFSET(0x1E5ADCF0)
#define UNITYENGINE_AUDIOSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AE580)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioSource_TypeDefinitionIndex = 18358;

	class AudioSource : public ::UnityEngine::AudioBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Single GetPitch(::UnityEngine::AudioSource* source)
		{
			return ((::System::Single(*)(::UnityEngine::AudioSource*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETPITCH_OFFSET))(source);
		}

		static ::System::Void SetPitch(::UnityEngine::AudioSource* source, ::System::Single pitch)
		{
			return ((::System::Void(*)(::UnityEngine::AudioSource*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SETPITCH_OFFSET))(source, pitch);
		}

		static ::System::Void PlayHelper(::UnityEngine::AudioSource* source, ::System::UInt64 delay)
		{
			return ((::System::Void(*)(::UnityEngine::AudioSource*, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYHELPER_OFFSET))(source, delay);
		}

		::System::Void Play(::System::Double delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAY_OFFSET))(this, delay);
		}

		static ::System::Void PlayOneShotHelper(::UnityEngine::AudioSource* source, ::UnityEngine::AudioClip* clip, ::System::Single volumeScale)
		{
			return ((::System::Void(*)(::UnityEngine::AudioSource*, ::UnityEngine::AudioClip*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYONESHOTHELPER_OFFSET))(source, clip, volumeScale);
		}

		::System::Void Stop(::System::Boolean stopOneShots)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_STOP_OFFSET))(this, stopOneShots);
		}

		static ::System::Void SetCustomCurveHelper(::UnityEngine::AudioSource* source, ::UnityEngine::AudioSourceCurveType type, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::UnityEngine::AudioSource*, ::UnityEngine::AudioSourceCurveType, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SETCUSTOMCURVEHELPER_OFFSET))(source, type, curve);
		}

		static ::UnityEngine::AnimationCurve* GetCustomCurveHelper(::UnityEngine::AudioSource* source, ::UnityEngine::AudioSourceCurveType type)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AudioSource*, ::UnityEngine::AudioSourceCurveType))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETCUSTOMCURVEHELPER_OFFSET))(source, type);
		}

		static ::System::Void GetOutputDataHelper(::UnityEngine::AudioSource* source, ::Il2CppArray<::System::Single>* samples, ::System::Int32 channel)
		{
			return ((::System::Void(*)(::UnityEngine::AudioSource*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETOUTPUTDATAHELPER_OFFSET))(source, samples, channel);
		}

		static ::System::Void GetSpectrumDataHelper(::UnityEngine::AudioSource* source, ::Il2CppArray<::System::Single>* samples, ::System::Int32 channel, ::UnityEngine::FFTWindow window)
		{
			return ((::System::Void(*)(::UnityEngine::AudioSource*, ::Il2CppArray<::System::Single>*, ::System::Int32, ::UnityEngine::FFTWindow))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETSPECTRUMDATAHELPER_OFFSET))(source, samples, channel, window);
		}

		::System::Single get_volume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_VOLUME_OFFSET))(this);
		}

		::System::Void set_volume(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_VOLUME_OFFSET))(this, value);
		}

		::System::Single get_pitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_PITCH_OFFSET))(this);
		}

		::System::Void set_pitch(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_PITCH_OFFSET))(this, value);
		}

		::System::Single get_time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_TIME_OFFSET))(this, value);
		}

		::System::Int32 get_timeSamples()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_TIMESAMPLES_OFFSET))(this);
		}

		::System::Void set_timeSamples(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_TIMESAMPLES_OFFSET))(this, value);
		}

		::UnityEngine::AudioClip* get_clip()
		{
			return ((::UnityEngine::AudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_clip(::UnityEngine::AudioClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_CLIP_OFFSET))(this, value);
		}

		::UnityEngine::Audio::AudioMixerGroup* get_outputAudioMixerGroup()
		{
			return ((::UnityEngine::Audio::AudioMixerGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_OUTPUTAUDIOMIXERGROUP_OFFSET))(this);
		}

		::System::Void set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Audio::AudioMixerGroup*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_OUTPUTAUDIOMIXERGROUP_OFFSET))(this, value);
		}

		::System::Void Play_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAY_1_OFFSET))(this);
		}

		::System::Void Play_2(::System::UInt64 delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAY_2_OFFSET))(this, delay);
		}

		::System::Void PlayDelayed(::System::Single delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYDELAYED_OFFSET))(this, delay);
		}

		::System::Void PlayScheduled(::System::Double time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYSCHEDULED_OFFSET))(this, time);
		}

		::System::Void PlayOneShot(::UnityEngine::AudioClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYONESHOT_OFFSET))(this, clip);
		}

		::System::Void PlayOneShot_1(::UnityEngine::AudioClip* clip, ::System::Single volumeScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioClip*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYONESHOT_1_OFFSET))(this, clip, volumeScale);
		}

		::System::Void SetScheduledStartTime(::System::Double time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SETSCHEDULEDSTARTTIME_OFFSET))(this, time);
		}

		::System::Void SetScheduledEndTime(::System::Double time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SETSCHEDULEDENDTIME_OFFSET))(this, time);
		}

		::System::Void Stop_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_STOP_1_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PAUSE_OFFSET))(this);
		}

		::System::Void UnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_UNPAUSE_OFFSET))(this);
		}

		::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_isVirtual()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_ISVIRTUAL_OFFSET))(this);
		}

		static ::System::Void PlayClipAtPoint(::UnityEngine::AudioClip* clip, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::UnityEngine::AudioClip*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYCLIPATPOINT_OFFSET))(clip, position);
		}

		static ::System::Void PlayClipAtPoint_1(::UnityEngine::AudioClip* clip, ::UnityEngine::Vector3 position, ::System::Single volume)
		{
			return ((::System::Void(*)(::UnityEngine::AudioClip*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYCLIPATPOINT_1_OFFSET))(clip, position, volume);
		}

		::System::Boolean get_loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_loop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_LOOP_OFFSET))(this, value);
		}

		::System::Boolean get_ignoreListenerVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_IGNORELISTENERVOLUME_OFFSET))(this);
		}

		::System::Void set_ignoreListenerVolume(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_IGNORELISTENERVOLUME_OFFSET))(this, value);
		}

		::System::Boolean get_playOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_PLAYONAWAKE_OFFSET))(this);
		}

		::System::Void set_playOnAwake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_PLAYONAWAKE_OFFSET))(this, value);
		}

		::System::Boolean get_ignoreListenerPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_IGNORELISTENERPAUSE_OFFSET))(this);
		}

		::System::Void set_ignoreListenerPause(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_IGNORELISTENERPAUSE_OFFSET))(this, value);
		}

		::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode()
		{
			return ((::UnityEngine::AudioVelocityUpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_VELOCITYUPDATEMODE_OFFSET))(this);
		}

		::System::Void set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioVelocityUpdateMode))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_VELOCITYUPDATEMODE_OFFSET))(this, value);
		}

		::System::Single get_panStereo()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_PANSTEREO_OFFSET))(this);
		}

		::System::Void set_panStereo(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_PANSTEREO_OFFSET))(this, value);
		}

		::System::Single get_spatialBlend()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_SPATIALBLEND_OFFSET))(this);
		}

		::System::Void set_spatialBlend(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_SPATIALBLEND_OFFSET))(this, value);
		}

		::System::Boolean get_spatialize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_SPATIALIZE_OFFSET))(this);
		}

		::System::Void set_spatialize(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_SPATIALIZE_OFFSET))(this, value);
		}

		::System::Boolean get_spatializePostEffects()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_SPATIALIZEPOSTEFFECTS_OFFSET))(this);
		}

		::System::Void set_spatializePostEffects(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_SPATIALIZEPOSTEFFECTS_OFFSET))(this, value);
		}

		::System::Void SetCustomCurve(::UnityEngine::AudioSourceCurveType type, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioSourceCurveType, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SETCUSTOMCURVE_OFFSET))(this, type, curve);
		}

		::UnityEngine::AnimationCurve* GetCustomCurve(::UnityEngine::AudioSourceCurveType type)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::UnityEngine::AudioSourceCurveType))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETCUSTOMCURVE_OFFSET))(this, type);
		}

		::System::Single get_reverbZoneMix()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_REVERBZONEMIX_OFFSET))(this);
		}

		::System::Void set_reverbZoneMix(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_REVERBZONEMIX_OFFSET))(this, value);
		}

		::System::Boolean get_bypassEffects()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_BYPASSEFFECTS_OFFSET))(this);
		}

		::System::Void set_bypassEffects(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_BYPASSEFFECTS_OFFSET))(this, value);
		}

		::System::Boolean get_bypassListenerEffects()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_BYPASSLISTENEREFFECTS_OFFSET))(this);
		}

		::System::Void set_bypassListenerEffects(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_BYPASSLISTENEREFFECTS_OFFSET))(this, value);
		}

		::System::Boolean get_bypassReverbZones()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_BYPASSREVERBZONES_OFFSET))(this);
		}

		::System::Void set_bypassReverbZones(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_BYPASSREVERBZONES_OFFSET))(this, value);
		}

		::System::Single get_dopplerLevel()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_DOPPLERLEVEL_OFFSET))(this);
		}

		::System::Void set_dopplerLevel(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_DOPPLERLEVEL_OFFSET))(this, value);
		}

		::System::Single get_spread()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_SPREAD_OFFSET))(this);
		}

		::System::Void set_spread(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_SPREAD_OFFSET))(this, value);
		}

		::System::Int32 get_priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_priority(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_PRIORITY_OFFSET))(this, value);
		}

		::System::Boolean get_mute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_MUTE_OFFSET))(this);
		}

		::System::Void set_mute(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_MUTE_OFFSET))(this, value);
		}

		::System::Single get_minDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_MINDISTANCE_OFFSET))(this);
		}

		::System::Void set_minDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_MINDISTANCE_OFFSET))(this, value);
		}

		::System::Single get_maxDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_MAXDISTANCE_OFFSET))(this);
		}

		::System::Void set_maxDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_MAXDISTANCE_OFFSET))(this, value);
		}

		::UnityEngine::AudioRolloffMode get_rolloffMode()
		{
			return ((::UnityEngine::AudioRolloffMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_ROLLOFFMODE_OFFSET))(this);
		}

		::System::Void set_rolloffMode(::UnityEngine::AudioRolloffMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioRolloffMode))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_ROLLOFFMODE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* GetOutputData(::System::Int32 numSamples, ::System::Int32 channel)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETOUTPUTDATA_OFFSET))(this, numSamples, channel);
		}

		::System::Void GetOutputData_1(::Il2CppArray<::System::Single>* samples, ::System::Int32 channel)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETOUTPUTDATA_1_OFFSET))(this, samples, channel);
		}

		::Il2CppArray<::System::Single>* GetSpectrumData(::System::Int32 numSamples, ::System::Int32 channel, ::UnityEngine::FFTWindow window)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::FFTWindow))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETSPECTRUMDATA_OFFSET))(this, numSamples, channel, window);
		}

		::System::Void GetSpectrumData_1(::Il2CppArray<::System::Single>* samples, ::System::Int32 channel, ::UnityEngine::FFTWindow window)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Int32, ::UnityEngine::FFTWindow))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETSPECTRUMDATA_1_OFFSET))(this, samples, channel, window);
		}

		::System::Single get_minVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_MINVOLUME_OFFSET))(this);
		}

		::System::Void set_minVolume(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_MINVOLUME_OFFSET))(this, value);
		}

		::System::Single get_maxVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_MAXVOLUME_OFFSET))(this);
		}

		::System::Void set_maxVolume(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_MAXVOLUME_OFFSET))(this, value);
		}

		::System::Single get_rolloffFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_ROLLOFFFACTOR_OFFSET))(this);
		}

		::System::Void set_rolloffFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_ROLLOFFFACTOR_OFFSET))(this, value);
		}

		::System::Boolean SetSpatializerFloat(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SETSPATIALIZERFLOAT_OFFSET))(this, index, value);
		}

		::System::Boolean GetSpatializerFloat(::System::Int32 index, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETSPATIALIZERFLOAT_OFFSET))(this, index, value);
		}

		::System::Boolean GetAmbisonicDecoderFloat(::System::Int32 index, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETAMBISONICDECODERFLOAT_OFFSET))(this, index, value);
		}

		::System::Boolean SetAmbisonicDecoderFloat(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SETAMBISONICDECODERFLOAT_OFFSET))(this, index, value);
		}
	};
}
