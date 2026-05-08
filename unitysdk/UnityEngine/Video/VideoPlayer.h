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

#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_CLOCKRESYNCOCCURRED_OFFSET UNITYSDK_OFFSET(0x1C40C8D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_ERRORRECEIVED_OFFSET UNITYSDK_OFFSET(0x1C40C6D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_FRAMEDROPPED_OFFSET UNITYSDK_OFFSET(0x1C40C5D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_FRAMEREADY_OFFSET UNITYSDK_OFFSET(0x1C40C9F0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_LOOPPOINTREACHED_OFFSET UNITYSDK_OFFSET(0x1C40C3D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_PREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C40C2D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_SEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C40C7D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_STARTED_OFFSET UNITYSDK_OFFSET(0x1C40C4D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ENABLEAUDIOTRACK_OFFSET UNITYSDK_OFFSET(0x1C40C220)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOCHANNELCOUNT_OFFSET UNITYSDK_OFFSET(0x1C40C110)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOLANGUAGECODE_OFFSET UNITYSDK_OFFSET(0x1C40C100)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOSAMPLERATE_OFFSET UNITYSDK_OFFSET(0x1C40C120)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETCONTROLLEDAUDIOTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1C40C150)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETDIRECTAUDIOMUTE_OFFSET UNITYSDK_OFFSET(0x1C40C290)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETDIRECTAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1C40C270)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETPLAYBACKSPEEDTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C40E220)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETPLAYBACKSPEEDTHREAD_OFFSET UNITYSDK_OFFSET(0x1C40E210)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETTARGETAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1C40C2B0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1C40BDF0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_AUDIOOUTPUTMODE_OFFSET UNITYSDK_OFFSET(0x1C40C240)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_AUDIOTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1C40C0F0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETDIRECTAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1C40C260)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETPLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1C40BF90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETSKIPONDROP_OFFSET UNITYSDK_OFFSET(0x1C40C050)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETTIMESOURCE_OFFSET UNITYSDK_OFFSET(0x1C40BFE0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETTIME_OFFSET UNITYSDK_OFFSET(0x1C40BF10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSTEP_OFFSET UNITYSDK_OFFSET(0x1C40BF70)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1C40BD30)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CLOCKTIME_OFFSET UNITYSDK_OFFSET(0x1C40BF60)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CONTROLLEDAUDIOTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1C40C140)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CONTROLLEDAUDIOTRACKMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1C40C130)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_EXTERNALREFERENCETIME_OFFSET UNITYSDK_OFFSET(0x1C40C030)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1C40C080)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x1C40C090)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x1C40BF40)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1C40C0C0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x1C40BFC0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1C40BF00)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1C40BEF0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x1C40BE70)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C40C0A0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PIXELASPECTRATIODENOMINATOR_OFFSET UNITYSDK_OFFSET(0x1C40C0E0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PIXELASPECTRATIONUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C40C0D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1C40BFA0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1C40BEA0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1C40BD50)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SENDFRAMEREADYEVENTS_OFFSET UNITYSDK_OFFSET(0x1C40C9D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SKIPONDROP_OFFSET UNITYSDK_OFFSET(0x1C40C060)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1C40BCF0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERA3DLAYOUT_OFFSET UNITYSDK_OFFSET(0x1C40BE30)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERAALPHA_OFFSET UNITYSDK_OFFSET(0x1C40BE10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x1C40BD70)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C40BDD0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x1C40BDB0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C40BD90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1C40BE50)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIMEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C40C010)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIMESOURCE_OFFSET UNITYSDK_OFFSET(0x1C40BFF0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1C40BF20)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_URL_OFFSET UNITYSDK_OFFSET(0x1C40BD10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x1C40BE80)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1C40C0B0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKECLOCKRESYNCOCCURREDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C40DC20)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEERRORRECEIVEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C40D640)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEFRAMEDROPPEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C40D610)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEFRAMEREADYCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C40D020)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKELOOPPOINTREACHEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C40D5B0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEPREPARECOMPLETEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C40CAF0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKESEEKCOMPLETEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C40DBF0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKESTARTEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C40D5E0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ISAUDIOTRACKENABLED_OFFSET UNITYSDK_OFFSET(0x1C40C230)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1C40BED0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x1C40BEC0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_PREPARE_OFFSET UNITYSDK_OFFSET(0x1C40BE60)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_CLOCKRESYNCOCCURRED_OFFSET UNITYSDK_OFFSET(0x1C40C950)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_ERRORRECEIVED_OFFSET UNITYSDK_OFFSET(0x1C40C750)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_FRAMEDROPPED_OFFSET UNITYSDK_OFFSET(0x1C40C650)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_FRAMEREADY_OFFSET UNITYSDK_OFFSET(0x1C40CA70)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_LOOPPOINTREACHED_OFFSET UNITYSDK_OFFSET(0x1C40C450)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_PREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C40C350)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_SEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C40C850)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_STARTED_OFFSET UNITYSDK_OFFSET(0x1C40C550)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SETCONTROLLEDAUDIOTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1C40C210)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SETDIRECTAUDIOMUTE_OFFSET UNITYSDK_OFFSET(0x1C40C2A0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SETDIRECTAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1C40C280)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SETPLAYBACKSPEEDTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C40E200)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SETPLAYBACKSPEEDTHREAD_OFFSET UNITYSDK_OFFSET(0x1C40E1F0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SETTARGETAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1C40C2C0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1C40BE00)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_AUDIOOUTPUTMODE_OFFSET UNITYSDK_OFFSET(0x1C40C250)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1C40BD40)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_CONTROLLEDAUDIOTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1C40C160)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_EXTERNALREFERENCETIME_OFFSET UNITYSDK_OFFSET(0x1C40C040)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_FRAME_OFFSET UNITYSDK_OFFSET(0x1C40BF50)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x1C40BFD0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1C40BFB0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1C40BEB0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1C40BD60)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SENDFRAMEREADYEVENTS_OFFSET UNITYSDK_OFFSET(0x1C40C9E0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SKIPONDROP_OFFSET UNITYSDK_OFFSET(0x1C40C070)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1C40BD00)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERA3DLAYOUT_OFFSET UNITYSDK_OFFSET(0x1C40BE40)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERAALPHA_OFFSET UNITYSDK_OFFSET(0x1C40BE20)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x1C40BD80)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C40BDE0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x1C40BDC0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C40BDA0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIMEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C40C020)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIMESOURCE_OFFSET UNITYSDK_OFFSET(0x1C40C000)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1C40BF30)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_URL_OFFSET UNITYSDK_OFFSET(0x1C40BD20)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x1C40BE90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_STEPFORWARD_OFFSET UNITYSDK_OFFSET(0x1C40BF80)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x1C40BEE0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C40E230)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoPlayer_TypeDefinitionIndex = 25139;

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

		::System::Void set_source(::UnityEngine::Video::VideoSource value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoSource))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SOURCE_OFFSET))(this, value);
		}

		::System::String* get_url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_URL_OFFSET))(this);
		}

		::System::Void set_url(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_URL_OFFSET))(this, value);
		}

		::UnityEngine::Video::VideoClip* get_clip()
		{
			return ((::UnityEngine::Video::VideoClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_clip(::UnityEngine::Video::VideoClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_CLIP_OFFSET))(this, value);
		}

		::UnityEngine::Video::VideoRenderMode get_renderMode()
		{
			return ((::UnityEngine::Video::VideoRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::Video::VideoRenderMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoRenderMode))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_RENDERMODE_OFFSET))(this, value);
		}

		::UnityEngine::Camera* get_targetCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERA_OFFSET))(this);
		}

		::System::Void set_targetCamera(::UnityEngine::Camera* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERA_OFFSET))(this, value);
		}

		::UnityEngine::RenderTexture* get_targetTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETTEXTURE_OFFSET))(this);
		}

		::System::Void set_targetTexture(::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETTEXTURE_OFFSET))(this, value);
		}

		::UnityEngine::Renderer* get_targetMaterialRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET))(this);
		}

		::System::Void set_targetMaterialRenderer(::UnityEngine::Renderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET))(this, value);
		}

		::System::String* get_targetMaterialProperty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET))(this);
		}

		::System::Void set_targetMaterialProperty(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET))(this, value);
		}

		::UnityEngine::Video::VideoAspectRatio get_aspectRatio()
		{
			return ((::UnityEngine::Video::VideoAspectRatio(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ASPECTRATIO_OFFSET))(this);
		}

		::System::Void set_aspectRatio(::UnityEngine::Video::VideoAspectRatio value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoAspectRatio))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_ASPECTRATIO_OFFSET))(this, value);
		}

		::System::Single get_targetCameraAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERAALPHA_OFFSET))(this);
		}

		::System::Void set_targetCameraAlpha(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERAALPHA_OFFSET))(this, value);
		}

		::UnityEngine::Video::Video3DLayout get_targetCamera3DLayout()
		{
			return ((::UnityEngine::Video::Video3DLayout(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERA3DLAYOUT_OFFSET))(this);
		}

		::System::Void set_targetCamera3DLayout(::UnityEngine::Video::Video3DLayout value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::Video3DLayout))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERA3DLAYOUT_OFFSET))(this, value);
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

		::System::Void set_waitForFirstFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET))(this, value);
		}

		::System::Boolean get_playOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PLAYONAWAKE_OFFSET))(this);
		}

		::System::Void set_playOnAwake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_PLAYONAWAKE_OFFSET))(this, value);
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

		::System::Void set_time(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIME_OFFSET))(this, value);
		}

		::System::Int64 get_frame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_FRAME_OFFSET))(this);
		}

		::System::Void set_frame(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_FRAME_OFFSET))(this, value);
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

		::System::Void set_playbackSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET))(this, value);
		}

		::System::Boolean get_isLooping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISLOOPING_OFFSET))(this);
		}

		::System::Void set_isLooping(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_ISLOOPING_OFFSET))(this, value);
		}

		::System::Boolean get_canSetTimeSource()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETTIMESOURCE_OFFSET))(this);
		}

		::UnityEngine::Video::VideoTimeSource get_timeSource()
		{
			return ((::UnityEngine::Video::VideoTimeSource(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIMESOURCE_OFFSET))(this);
		}

		::System::Void set_timeSource(::UnityEngine::Video::VideoTimeSource value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoTimeSource))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIMESOURCE_OFFSET))(this, value);
		}

		::UnityEngine::Video::VideoTimeReference get_timeReference()
		{
			return ((::UnityEngine::Video::VideoTimeReference(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIMEREFERENCE_OFFSET))(this);
		}

		::System::Void set_timeReference(::UnityEngine::Video::VideoTimeReference value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoTimeReference))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIMEREFERENCE_OFFSET))(this, value);
		}

		::System::Double get_externalReferenceTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_EXTERNALREFERENCETIME_OFFSET))(this);
		}

		::System::Void set_externalReferenceTime(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_EXTERNALREFERENCETIME_OFFSET))(this, value);
		}

		::System::Boolean get_canSetSkipOnDrop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETSKIPONDROP_OFFSET))(this);
		}

		::System::Boolean get_skipOnDrop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SKIPONDROP_OFFSET))(this);
		}

		::System::Void set_skipOnDrop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SKIPONDROP_OFFSET))(this, value);
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

		::System::String* GetAudioLanguageCode(::System::UInt16 trackIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOLANGUAGECODE_OFFSET))(this, trackIndex);
		}

		::System::UInt16 GetAudioChannelCount(::System::UInt16 trackIndex)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOCHANNELCOUNT_OFFSET))(this, trackIndex);
		}

		::System::UInt32 GetAudioSampleRate(::System::UInt16 trackIndex)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOSAMPLERATE_OFFSET))(this, trackIndex);
		}

		static ::System::UInt16 get_controlledAudioTrackMaxCount()
		{
			return ((::System::UInt16(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CONTROLLEDAUDIOTRACKMAXCOUNT_OFFSET))();
		}

		::System::UInt16 get_controlledAudioTrackCount()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CONTROLLEDAUDIOTRACKCOUNT_OFFSET))(this);
		}

		::System::Void set_controlledAudioTrackCount(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_CONTROLLEDAUDIOTRACKCOUNT_OFFSET))(this, value);
		}

		::System::UInt16 GetControlledAudioTrackCount()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETCONTROLLEDAUDIOTRACKCOUNT_OFFSET))(this);
		}

		::System::Void SetControlledAudioTrackCount(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SETCONTROLLEDAUDIOTRACKCOUNT_OFFSET))(this, value);
		}

		::System::Void EnableAudioTrack(::System::UInt16 trackIndex, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ENABLEAUDIOTRACK_OFFSET))(this, trackIndex, enabled);
		}

		::System::Boolean IsAudioTrackEnabled(::System::UInt16 trackIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ISAUDIOTRACKENABLED_OFFSET))(this, trackIndex);
		}

		::UnityEngine::Video::VideoAudioOutputMode get_audioOutputMode()
		{
			return ((::UnityEngine::Video::VideoAudioOutputMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_AUDIOOUTPUTMODE_OFFSET))(this);
		}

		::System::Void set_audioOutputMode(::UnityEngine::Video::VideoAudioOutputMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoAudioOutputMode))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_AUDIOOUTPUTMODE_OFFSET))(this, value);
		}

		::System::Boolean get_canSetDirectAudioVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETDIRECTAUDIOVOLUME_OFFSET))(this);
		}

		::System::Single GetDirectAudioVolume(::System::UInt16 trackIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETDIRECTAUDIOVOLUME_OFFSET))(this, trackIndex);
		}

		::System::Void SetDirectAudioVolume(::System::UInt16 trackIndex, ::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SETDIRECTAUDIOVOLUME_OFFSET))(this, trackIndex, volume);
		}

		::System::Boolean GetDirectAudioMute(::System::UInt16 trackIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETDIRECTAUDIOMUTE_OFFSET))(this, trackIndex);
		}

		::System::Void SetDirectAudioMute(::System::UInt16 trackIndex, ::System::Boolean mute)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SETDIRECTAUDIOMUTE_OFFSET))(this, trackIndex, mute);
		}

		::UnityEngine::AudioSource* GetTargetAudioSource(::System::UInt16 trackIndex)
		{
			return ((::UnityEngine::AudioSource*(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETTARGETAUDIOSOURCE_OFFSET))(this, trackIndex);
		}

		::System::Void SetTargetAudioSource(::System::UInt16 trackIndex, ::UnityEngine::AudioSource* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::UnityEngine::AudioSource*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SETTARGETAUDIOSOURCE_OFFSET))(this, trackIndex, source);
		}

		::System::Void add_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_PREPARECOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_PREPARECOMPLETED_OFFSET))(this, value);
		}

		::System::Void add_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_LOOPPOINTREACHED_OFFSET))(this, value);
		}

		::System::Void remove_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_LOOPPOINTREACHED_OFFSET))(this, value);
		}

		::System::Void add_started(::UnityEngine::Video::VideoPlayer_EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_STARTED_OFFSET))(this, value);
		}

		::System::Void remove_started(::UnityEngine::Video::VideoPlayer_EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_STARTED_OFFSET))(this, value);
		}

		::System::Void add_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_FRAMEDROPPED_OFFSET))(this, value);
		}

		::System::Void remove_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_FRAMEDROPPED_OFFSET))(this, value);
		}

		::System::Void add_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_ErrorEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_ERRORRECEIVED_OFFSET))(this, value);
		}

		::System::Void remove_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_ErrorEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_ERRORRECEIVED_OFFSET))(this, value);
		}

		::System::Void add_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_SEEKCOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_EventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_SEEKCOMPLETED_OFFSET))(this, value);
		}

		::System::Void add_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_TimeEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_CLOCKRESYNCOCCURRED_OFFSET))(this, value);
		}

		::System::Void remove_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_TimeEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_CLOCKRESYNCOCCURRED_OFFSET))(this, value);
		}

		::System::Boolean get_sendFrameReadyEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SENDFRAMEREADYEVENTS_OFFSET))(this);
		}

		::System::Void set_sendFrameReadyEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SENDFRAMEREADYEVENTS_OFFSET))(this, value);
		}

		::System::Void add_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_FRAMEREADY_OFFSET))(this, value);
		}

		::System::Void remove_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_FRAMEREADY_OFFSET))(this, value);
		}

		static ::System::Void InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEPREPARECOMPLETEDCALLBACK_INTERNAL_OFFSET))(source);
		}

		static ::System::Void InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer* source, ::System::Int64 frameIdx)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEFRAMEREADYCALLBACK_INTERNAL_OFFSET))(source, frameIdx);
		}

		static ::System::Void InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer* source)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKELOOPPOINTREACHEDCALLBACK_INTERNAL_OFFSET))(source);
		}

		static ::System::Void InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer* source)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKESTARTEDCALLBACK_INTERNAL_OFFSET))(source);
		}

		static ::System::Void InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer* source)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEFRAMEDROPPEDCALLBACK_INTERNAL_OFFSET))(source);
		}

		static ::System::Void InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer* source, ::System::String* errorStr)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEERRORRECEIVEDCALLBACK_INTERNAL_OFFSET))(source, errorStr);
		}

		static ::System::Void InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKESEEKCOMPLETEDCALLBACK_INTERNAL_OFFSET))(source);
		}

		static ::System::Void InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer* source, ::System::Double seconds)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKECLOCKRESYNCOCCURREDCALLBACK_INTERNAL_OFFSET))(source, seconds);
		}

		::System::Void SetPlaybackSpeedThread(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SETPLAYBACKSPEEDTHREAD_OFFSET))(this, value);
		}

		::System::Single GetPlaybackSpeedThread()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETPLAYBACKSPEEDTHREAD_OFFSET))(this);
		}

		static ::System::Void SetPlaybackSpeedThreadInternal(::UnityEngine::Video::VideoPlayer* self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SETPLAYBACKSPEEDTHREADINTERNAL_OFFSET))(self, value);
		}

		static ::System::Single GetPlaybackSpeedThreadInternal(::UnityEngine::Video::VideoPlayer* self)
		{
			return ((::System::Single(*)(::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETPLAYBACKSPEEDTHREADINTERNAL_OFFSET))(self);
		}
	};
}
