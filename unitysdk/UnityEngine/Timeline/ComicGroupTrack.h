#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/GroupTrack.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class EventTriggerTrack; }
namespace UnityEngine::Timeline { class ImgSplitScreenGroupPlayableAsset; }
namespace UnityEngine::Timeline { class ImgSplitScreenGroupTrack; }
namespace UnityEngine::Timeline { class PauseWaitTrack; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_COMICGROUPTRACK_GETTRACKDEFAULTNAME_OFFSET UNITYSDK_OFFSET(0x1FB20410)
#define UNITYENGINE_TIMELINE_COMICGROUPTRACK_GET_AUTOPLAYCONTROLTRACK_OFFSET UNITYSDK_OFFSET(0x1FB20AD0)
#define UNITYENGINE_TIMELINE_COMICGROUPTRACK_GET_MAININFO_OFFSET UNITYSDK_OFFSET(0x1FB209C0)
#define UNITYENGINE_TIMELINE_COMICGROUPTRACK_GET_MAINTRACK_OFFSET UNITYSDK_OFFSET(0x1FB20900)
#define UNITYENGINE_TIMELINE_COMICGROUPTRACK_GET_REALEND_OFFSET UNITYSDK_OFFSET(0x1FB208B0)
#define UNITYENGINE_TIMELINE_COMICGROUPTRACK_GET_REALSTART_OFFSET UNITYSDK_OFFSET(0x1FB207D0)
#define UNITYENGINE_TIMELINE_COMICGROUPTRACK_GET_SPLITSCREENCLIPS_OFFSET UNITYSDK_OFFSET(0x1FB20B10)
#define UNITYENGINE_TIMELINE_COMICGROUPTRACK_GET_TRIGGERTRACK_OFFSET UNITYSDK_OFFSET(0x1FB20A80)
#define UNITYENGINE_TIMELINE_COMICGROUPTRACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB20D40)
#define UNITYENGINE_TIMELINE_COMICGROUPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB20C60)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ComicGroupTrack_TypeDefinitionIndex = 32940;

	class ComicGroupTrack : public ::UnityEngine::Timeline::GroupTrack
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_m_mapType2DefaultName()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ComicGroupTrack_TypeDefinitionIndex)->GetStaticField(0x284A0);
		}
		static ::System::Int32* StaticGet_s_ComicTrackDefaultCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ComicGroupTrack_TypeDefinitionIndex)->GetStaticField(0x8060);
		}
		// static const ::System::String* WWISE_AUDIO_TRACK_NAME; // 0x0
		// static const ::System::String* BGM_TRACK_NAME; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>* _uiScreenOffset; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICGROUPTRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICGROUPTRACK__CCTOR_OFFSET))();
		}

		static ::System::String* GetTrackDefaultName(::System::Type* trackType)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICGROUPTRACK_GETTRACKDEFAULTNAME_OFFSET))(trackType);
		}

		::System::Double get_RealStart()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICGROUPTRACK_GET_REALSTART_OFFSET))(this);
		}

		::System::Double get_RealEnd()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICGROUPTRACK_GET_REALEND_OFFSET))(this);
		}

		::UnityEngine::Timeline::ImgSplitScreenGroupTrack* get_MainTrack()
		{
			return ((::UnityEngine::Timeline::ImgSplitScreenGroupTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICGROUPTRACK_GET_MAINTRACK_OFFSET))(this);
		}

		::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset* get_MainInfo()
		{
			return ((::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICGROUPTRACK_GET_MAININFO_OFFSET))(this);
		}

		::UnityEngine::Timeline::EventTriggerTrack* get_TriggerTrack()
		{
			return ((::UnityEngine::Timeline::EventTriggerTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICGROUPTRACK_GET_TRIGGERTRACK_OFFSET))(this);
		}

		::UnityEngine::Timeline::PauseWaitTrack* get_AutoPlayControlTrack()
		{
			return ((::UnityEngine::Timeline::PauseWaitTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICGROUPTRACK_GET_AUTOPLAYCONTROLTRACK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* get_SplitScreenClips()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICGROUPTRACK_GET_SPLITSCREENCLIPS_OFFSET))(this);
		}
	};
}
