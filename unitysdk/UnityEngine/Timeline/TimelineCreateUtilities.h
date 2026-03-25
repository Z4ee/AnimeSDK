#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_CREATEANIMATIONCLIPFORTRACK_OFFSET UNITYSDK_OFFSET(0x1899F4B0)
#define UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_GENERATEUNIQUEACTORNAME_OFFSET UNITYSDK_OFFSET(0x189B7C60)
#define UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_SAVEASSETINTOOBJECT_OFFSET UNITYSDK_OFFSET(0x189AD7B0)
#define UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_VALIDATEPARENTTRACK_OFFSET UNITYSDK_OFFSET(0x189B79A0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineCreateUtilities_TypeDefinitionIndex = 29922;

	class TimelineCreateUtilities : public ::System::Object
	{
	public:
		static ::System::String* GenerateUniqueActorName(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* tracks, ::System::String* name)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_GENERATEUNIQUEACTORNAME_OFFSET))(tracks, name);
		}

		static ::System::Void SaveAssetIntoObject(::UnityEngine::Object* childAsset, ::UnityEngine::Object* masterAsset)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_SAVEASSETINTOOBJECT_OFFSET))(childAsset, masterAsset);
		}

		static ::UnityEngine::AnimationClip* CreateAnimationClipForTrack(::System::String* name, ::UnityEngine::Timeline::TrackAsset* track, ::System::Boolean isLegacy)
		{
			return ((::UnityEngine::AnimationClip*(*)(::System::String*, ::UnityEngine::Timeline::TrackAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_CREATEANIMATIONCLIPFORTRACK_OFFSET))(name, track, isLegacy);
		}

		static ::System::Boolean ValidateParentTrack(::UnityEngine::Timeline::TrackAsset* parent, ::System::Type* childType)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TrackAsset*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_VALIDATEPARENTTRACK_OFFSET))(parent, childType);
		}
	};
}
