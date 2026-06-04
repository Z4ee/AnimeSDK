#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Video/Video3DLayout.h"
#include "unitysdk/UnityEngine/Video/VideoAspectRatio.h"
#include "unitysdk/UnityEngine/Video/VideoAudioOutputMode.h"
#include "unitysdk/UnityEngine/Video/VideoRenderMode.h"
#include "unitysdk/UnityEngine/Video/VideoSource.h"
#include "unitysdk/UnityEngine/Video/VideoTimeReference.h"
#include "unitysdk/UnityEngine/Video/VideoTimeSource.h"

namespace System { class String; }
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Video { class VideoClip; }
namespace UnityEngine::Video { class VideoPlayer_ErrorEventHandler; }
namespace UnityEngine::Video { class VideoPlayer_EventHandler; }
namespace UnityEngine::Video { class VideoPlayer_FrameReadyEventHandler; }
namespace UnityEngine::Video { class VideoPlayer_TimeEventHandler; }

#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_CLOCKRESYNCOCCURRED_OFFSET UNITYSDK_OFFSET(0x1B40CC10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_ERRORRECEIVED_OFFSET UNITYSDK_OFFSET(0x1B40CA10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_FRAMEDROPPED_OFFSET UNITYSDK_OFFSET(0x1B40C910)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_FRAMEREADY_OFFSET UNITYSDK_OFFSET(0x1B40CD30)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_LOOPPOINTREACHED_OFFSET UNITYSDK_OFFSET(0x1B40C710)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_PREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B40C610)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_SEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B40CB10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_STARTED_OFFSET UNITYSDK_OFFSET(0x1B40C810)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ENABLEAUDIOTRACK_OFFSET UNITYSDK_OFFSET(0x1B40C560)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOCHANNELCOUNT_OFFSET UNITYSDK_OFFSET(0x1B40C450)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOLANGUAGECODE_OFFSET UNITYSDK_OFFSET(0x1B40C440)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOSAMPLERATE_OFFSET UNITYSDK_OFFSET(0x1B40C460)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETCONTROLLEDAUDIOTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B40C490)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETDIRECTAUDIOMUTE_OFFSET UNITYSDK_OFFSET(0x1B40C5D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETDIRECTAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1B40C5B0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETTARGETAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1B40C5F0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1B40C130)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_AUDIOOUTPUTMODE_OFFSET UNITYSDK_OFFSET(0x1B40C580)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_AUDIOTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B40C430)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETDIRECTAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1B40C5A0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETPLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1B40C2D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETSKIPONDROP_OFFSET UNITYSDK_OFFSET(0x1B40C390)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETTIMESOURCE_OFFSET UNITYSDK_OFFSET(0x1B40C320)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETTIME_OFFSET UNITYSDK_OFFSET(0x1B40C250)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSTEP_OFFSET UNITYSDK_OFFSET(0x1B40C2B0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B40C070)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CLOCKTIME_OFFSET UNITYSDK_OFFSET(0x1B40C2A0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CONTROLLEDAUDIOTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B40C480)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CONTROLLEDAUDIOTRACKMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1B40C470)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_EXTERNALREFERENCETIME_OFFSET UNITYSDK_OFFSET(0x1B40C370)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1B40C3C0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x1B40C3D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x1B40C280)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1B40C400)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x1B40C300)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1B40C240)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1B40C230)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x1B40C1B0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1B40C3E0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PIXELASPECTRATIODENOMINATOR_OFFSET UNITYSDK_OFFSET(0x1B40C420)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PIXELASPECTRATIONUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B40C410)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1B40C2E0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1B40C1E0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1B40C090)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SENDFRAMEREADYEVENTS_OFFSET UNITYSDK_OFFSET(0x1B40CD10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SKIPONDROP_OFFSET UNITYSDK_OFFSET(0x1B40C3A0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1B40C030)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERA3DLAYOUT_OFFSET UNITYSDK_OFFSET(0x1B40C170)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERAALPHA_OFFSET UNITYSDK_OFFSET(0x1B40C150)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x1B40C0B0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x1B40C110)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x1B40C0F0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B40C0D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1B40C190)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIMEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B40C350)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIMESOURCE_OFFSET UNITYSDK_OFFSET(0x1B40C330)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1B40C260)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_URL_OFFSET UNITYSDK_OFFSET(0x1B40C050)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x1B40C1C0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1B40C3F0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKECLOCKRESYNCOCCURREDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B40D020)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEERRORRECEIVEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B40CF90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEFRAMEDROPPEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B40CF50)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEFRAMEREADYCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B40CE80)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKELOOPPOINTREACHEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B40CED0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEPREPARECOMPLETEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B40CE30)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKESEEKCOMPLETEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B40CFE0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKESTARTEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B40CF10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ISAUDIOTRACKENABLED_OFFSET UNITYSDK_OFFSET(0x1B40C570)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1B40C210)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x1B40C200)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_PREPARE_OFFSET UNITYSDK_OFFSET(0x1B40C1A0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_CLOCKRESYNCOCCURRED_OFFSET UNITYSDK_OFFSET(0x1B40CC90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_ERRORRECEIVED_OFFSET UNITYSDK_OFFSET(0x1B40CA90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_FRAMEDROPPED_OFFSET UNITYSDK_OFFSET(0x1B40C990)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_FRAMEREADY_OFFSET UNITYSDK_OFFSET(0x1B40CDB0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_LOOPPOINTREACHED_OFFSET UNITYSDK_OFFSET(0x1B40C790)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_PREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B40C690)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_SEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B40CB90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_STARTED_OFFSET UNITYSDK_OFFSET(0x1B40C890)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SETCONTROLLEDAUDIOTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B40C550)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SETDIRECTAUDIOMUTE_OFFSET UNITYSDK_OFFSET(0x1B40C5E0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SETDIRECTAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1B40C5C0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SETTARGETAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1B40C600)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1B40C140)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_AUDIOOUTPUTMODE_OFFSET UNITYSDK_OFFSET(0x1B40C590)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B40C080)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_CONTROLLEDAUDIOTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B40C4A0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_EXTERNALREFERENCETIME_OFFSET UNITYSDK_OFFSET(0x1B40C380)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_FRAME_OFFSET UNITYSDK_OFFSET(0x1B40C290)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x1B40C310)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1B40C2F0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1B40C1F0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1B40C0A0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SENDFRAMEREADYEVENTS_OFFSET UNITYSDK_OFFSET(0x1B40CD20)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SKIPONDROP_OFFSET UNITYSDK_OFFSET(0x1B40C3B0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1B40C040)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERA3DLAYOUT_OFFSET UNITYSDK_OFFSET(0x1B40C180)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERAALPHA_OFFSET UNITYSDK_OFFSET(0x1B40C160)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x1B40C0C0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x1B40C120)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x1B40C100)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B40C0E0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIMEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B40C360)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIMESOURCE_OFFSET UNITYSDK_OFFSET(0x1B40C340)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1B40C270)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_URL_OFFSET UNITYSDK_OFFSET(0x1B40C060)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x1B40C1D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_STEPFORWARD_OFFSET UNITYSDK_OFFSET(0x1B40C2C0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x1B40C220)
#define UNITYENGINE_VIDEO_VIDEOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B40D070)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoPlayer_TypeDefinitionIndex = 6298;

	class VideoPlayer : public ::UnityEngine::Behaviour
	{
	public:
		::UnityEngine::Video::VideoPlayer_EventHandler* prepareCompleted; // 0x18
		::UnityEngine::Video::VideoPlayer_EventHandler* loopPointReached; // 0x20
		::UnityEngine::Video::VideoPlayer_EventHandler* started; // 0x28
		::UnityEngine::Video::VideoPlayer_EventHandler* frameDropped; // 0x30
		::UnityEngine::Video::VideoPlayer_ErrorEventHandler* errorReceived; // 0x38
		::UnityEngine::Video::VideoPlayer_EventHandler* seekCompleted; // 0x40
		::UnityEngine::Video::VideoPlayer_TimeEventHandler* clockResyncOccurred; // 0x48
		::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* frameReady; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Video::VideoSource get_source()
		{
			return ((::UnityEngine::Video::VideoSource(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_source(::UnityEngine::Video::VideoSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoSource))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SOURCE_OFFSET))(this, a1);
		}

		::System::String* get_url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_URL_OFFSET))(this);
		}

		::System::Void set_url(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_URL_OFFSET))(this, a1);
		}

		::UnityEngine::Video::VideoClip* get_clip()
		{
			return ((::UnityEngine::Video::VideoClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_clip(::UnityEngine::Video::VideoClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_CLIP_OFFSET))(this, a1);
		}

		::UnityEngine::Video::VideoRenderMode get_renderMode()
		{
			return ((::UnityEngine::Video::VideoRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::Video::VideoRenderMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoRenderMode))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_RENDERMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* get_targetCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERA_OFFSET))(this);
		}

		::System::Void set_targetCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERA_OFFSET))(this, a1);
		}

		::UnityEngine::RenderTexture* get_targetTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETTEXTURE_OFFSET))(this);
		}

		::System::Void set_targetTexture(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETTEXTURE_OFFSET))(this, a1);
		}

		::UnityEngine::Renderer* get_targetMaterialRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET))(this);
		}

		::System::Void set_targetMaterialRenderer(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET))(this, a1);
		}

		::System::String* get_targetMaterialProperty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET))(this);
		}

		::System::Void set_targetMaterialProperty(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET))(this, a1);
		}

		::UnityEngine::Video::VideoAspectRatio get_aspectRatio()
		{
			return ((::UnityEngine::Video::VideoAspectRatio(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ASPECTRATIO_OFFSET))(this);
		}

		::System::Void set_aspectRatio(::UnityEngine::Video::VideoAspectRatio a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoAspectRatio))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_ASPECTRATIO_OFFSET))(this, a1);
		}

		::System::Single get_targetCameraAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERAALPHA_OFFSET))(this);
		}

		::System::Void set_targetCameraAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERAALPHA_OFFSET))(this, a1);
		}

		::UnityEngine::Video::Video3DLayout get_targetCamera3DLayout()
		{
			return ((::UnityEngine::Video::Video3DLayout(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERA3DLAYOUT_OFFSET))(this);
		}

		::System::Void set_targetCamera3DLayout(::UnityEngine::Video::Video3DLayout a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::Video3DLayout))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERA3DLAYOUT_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TEXTURE_OFFSET))(this);
		}

		::System::Void Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_PREPARE_OFFSET))(this);
		}

		::System::Boolean get_isPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISPREPARED_OFFSET))(this);
		}

		::System::Boolean get_waitForFirstFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET))(this);
		}

		::System::Void set_waitForFirstFrame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET))(this, a1);
		}

		::System::Boolean get_playOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PLAYONAWAKE_OFFSET))(this);
		}

		::System::Void set_playOnAwake(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_PLAYONAWAKE_OFFSET))(this, a1);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_PLAY_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_PAUSE_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_STOP_OFFSET))(this);
		}

		::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_isPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Boolean get_canSetTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETTIME_OFFSET))(this);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIME_OFFSET))(this, a1);
		}

		::System::Int64 get_frame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_FRAME_OFFSET))(this);
		}

		::System::Void set_frame(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_FRAME_OFFSET))(this, a1);
		}

		::System::Double get_clockTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CLOCKTIME_OFFSET))(this);
		}

		::System::Boolean get_canStep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSTEP_OFFSET))(this);
		}

		::System::Void StepForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_STEPFORWARD_OFFSET))(this);
		}

		::System::Boolean get_canSetPlaybackSpeed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETPLAYBACKSPEED_OFFSET))(this);
		}

		::System::Single get_playbackSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET))(this);
		}

		::System::Void set_playbackSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET))(this, a1);
		}

		::System::Boolean get_isLooping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISLOOPING_OFFSET))(this);
		}

		::System::Void set_isLooping(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_ISLOOPING_OFFSET))(this, a1);
		}

		::System::Boolean get_canSetTimeSource()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETTIMESOURCE_OFFSET))(this);
		}

		::UnityEngine::Video::VideoTimeSource get_timeSource()
		{
			return ((::UnityEngine::Video::VideoTimeSource(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIMESOURCE_OFFSET))(this);
		}

		::System::Void set_timeSource(::UnityEngine::Video::VideoTimeSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoTimeSource))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIMESOURCE_OFFSET))(this, a1);
		}

		::UnityEngine::Video::VideoTimeReference get_timeReference()
		{
			return ((::UnityEngine::Video::VideoTimeReference(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIMEREFERENCE_OFFSET))(this);
		}

		::System::Void set_timeReference(::UnityEngine::Video::VideoTimeReference a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoTimeReference))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIMEREFERENCE_OFFSET))(this, a1);
		}

		::System::Double get_externalReferenceTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_EXTERNALREFERENCETIME_OFFSET))(this);
		}

		::System::Void set_externalReferenceTime(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_EXTERNALREFERENCETIME_OFFSET))(this, a1);
		}

		::System::Boolean get_canSetSkipOnDrop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETSKIPONDROP_OFFSET))(this);
		}

		::System::Boolean get_skipOnDrop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SKIPONDROP_OFFSET))(this);
		}

		::System::Void set_skipOnDrop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SKIPONDROP_OFFSET))(this, a1);
		}

		::System::UInt64 get_frameCount()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Single get_frameRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_FRAMERATE_OFFSET))(this);
		}

		::System::Double get_length()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_LENGTH_OFFSET))(this);
		}

		::System::UInt32 get_width()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_WIDTH_OFFSET))(this);
		}

		::System::UInt32 get_height()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_HEIGHT_OFFSET))(this);
		}

		::System::UInt32 get_pixelAspectRatioNumerator()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PIXELASPECTRATIONUMERATOR_OFFSET))(this);
		}

		::System::UInt32 get_pixelAspectRatioDenominator()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PIXELASPECTRATIODENOMINATOR_OFFSET))(this);
		}

		::System::UInt16 get_audioTrackCount()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_AUDIOTRACKCOUNT_OFFSET))(this);
		}

		::System::String* GetAudioLanguageCode(::System::UInt16 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOLANGUAGECODE_OFFSET))(this, a1);
		}

		::System::UInt16 GetAudioChannelCount(::System::UInt16 a1)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOCHANNELCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetAudioSampleRate(::System::UInt16 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOSAMPLERATE_OFFSET))(this, a1);
		}

		static ::System::UInt16 get_controlledAudioTrackMaxCount()
		{
			return ((::System::UInt16(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CONTROLLEDAUDIOTRACKMAXCOUNT_OFFSET))();
		}

		::System::UInt16 get_controlledAudioTrackCount()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CONTROLLEDAUDIOTRACKCOUNT_OFFSET))(this);
		}

		::System::Void set_controlledAudioTrackCount(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_CONTROLLEDAUDIOTRACKCOUNT_OFFSET))(this, a1);
		}

		::System::UInt16 GetControlledAudioTrackCount()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETCONTROLLEDAUDIOTRACKCOUNT_OFFSET))(this);
		}

		::System::Void SetControlledAudioTrackCount(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SETCONTROLLEDAUDIOTRACKCOUNT_OFFSET))(this, a1);
		}

		::System::Void EnableAudioTrack(::System::UInt16 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ENABLEAUDIOTRACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsAudioTrackEnabled(::System::UInt16 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ISAUDIOTRACKENABLED_OFFSET))(this, a1);
		}

		::UnityEngine::Video::VideoAudioOutputMode get_audioOutputMode()
		{
			return ((::UnityEngine::Video::VideoAudioOutputMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_AUDIOOUTPUTMODE_OFFSET))(this);
		}

		::System::Void set_audioOutputMode(::UnityEngine::Video::VideoAudioOutputMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoAudioOutputMode))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_AUDIOOUTPUTMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_canSetDirectAudioVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETDIRECTAUDIOVOLUME_OFFSET))(this);
		}

		::System::Single GetDirectAudioVolume(::System::UInt16 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETDIRECTAUDIOVOLUME_OFFSET))(this, a1);
		}

		::System::Void SetDirectAudioVolume(::System::UInt16 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SETDIRECTAUDIOVOLUME_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetDirectAudioMute(::System::UInt16 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETDIRECTAUDIOMUTE_OFFSET))(this, a1);
		}

		::System::Void SetDirectAudioMute(::System::UInt16 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SETDIRECTAUDIOMUTE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AudioSource* GetTargetAudioSource(::System::UInt16 a1)
		{
			return ((::UnityEngine::AudioSource*(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETTARGETAUDIOSOURCE_OFFSET))(this, a1);
		}

		::System::Void SetTargetAudioSource(::System::UInt16 a1, ::UnityEngine::AudioSource* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::UnityEngine::AudioSource*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SETTARGETAUDIOSOURCE_OFFSET))(this, a1, a2);
		}

		::System::Void add_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_PREPARECOMPLETED_OFFSET))(this, a1);
		}

		::System::Void remove_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_PREPARECOMPLETED_OFFSET))(this, a1);
		}

		::System::Void add_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_LOOPPOINTREACHED_OFFSET))(this, a1);
		}

		::System::Void remove_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_LOOPPOINTREACHED_OFFSET))(this, a1);
		}

		::System::Void add_started(::UnityEngine::Video::VideoPlayer_EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_STARTED_OFFSET))(this, a1);
		}

		::System::Void remove_started(::UnityEngine::Video::VideoPlayer_EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_STARTED_OFFSET))(this, a1);
		}

		::System::Void add_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_FRAMEDROPPED_OFFSET))(this, a1);
		}

		::System::Void remove_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_FRAMEDROPPED_OFFSET))(this, a1);
		}

		::System::Void add_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_ErrorEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_ERRORRECEIVED_OFFSET))(this, a1);
		}

		::System::Void remove_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_ErrorEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_ERRORRECEIVED_OFFSET))(this, a1);
		}

		::System::Void add_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_SEEKCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void remove_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_SEEKCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void add_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_TimeEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_CLOCKRESYNCOCCURRED_OFFSET))(this, a1);
		}

		::System::Void remove_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_TimeEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_CLOCKRESYNCOCCURRED_OFFSET))(this, a1);
		}

		::System::Boolean get_sendFrameReadyEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SENDFRAMEREADYEVENTS_OFFSET))(this);
		}

		::System::Void set_sendFrameReadyEvents(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SENDFRAMEREADYEVENTS_OFFSET))(this, a1);
		}

		::System::Void add_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_FRAMEREADY_OFFSET))(this, a1);
		}

		::System::Void remove_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_FRAMEREADY_OFFSET))(this, a1);
		}

		static ::System::Void InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEPREPARECOMPLETEDCALLBACK_INTERNAL_OFFSET))(a1);
		}

		static ::System::Void InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEFRAMEREADYCALLBACK_INTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKELOOPPOINTREACHEDCALLBACK_INTERNAL_OFFSET))(a1);
		}

		static ::System::Void InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKESTARTEDCALLBACK_INTERNAL_OFFSET))(a1);
		}

		static ::System::Void InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEFRAMEDROPPEDCALLBACK_INTERNAL_OFFSET))(a1);
		}

		static ::System::Void InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEERRORRECEIVEDCALLBACK_INTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKESEEKCOMPLETEDCALLBACK_INTERNAL_OFFSET))(a1);
		}

		static ::System::Void InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKECLOCKRESYNCOCCURREDCALLBACK_INTERNAL_OFFSET))(a1, a2);
		}
	};
}
