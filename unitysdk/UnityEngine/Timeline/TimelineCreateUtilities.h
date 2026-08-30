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

#define UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_CREATEANIMATIONCLIPFORTRACK_OFFSET UNITYSDK_OFFSET(0x1ECB5280)
#define UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_GENERATEUNIQUEACTORNAME_OFFSET UNITYSDK_OFFSET(0x1ECD0810)
#define UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_SAVEASSETINTOOBJECT_OFFSET UNITYSDK_OFFSET(0x1ECC5140)
#define UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_VALIDATEPARENTTRACK_OFFSET UNITYSDK_OFFSET(0x1ECD04D0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineCreateUtilities_TypeDefinitionIndex = 37583;

	class TimelineCreateUtilities : public ::System::Object
	{
	public:
		static ::System::String* GenerateUniqueActorName(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_GENERATEUNIQUEACTORNAME_OFFSET))(a1, a2);
		}

		static ::System::Void SaveAssetIntoObject(::UnityEngine::Object* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_SAVEASSETINTOOBJECT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::AnimationClip* CreateAnimationClipForTrack(::System::String* a1, ::UnityEngine::Timeline::TrackAsset* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::AnimationClip*(*)(::System::String*, ::UnityEngine::Timeline::TrackAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_CREATEANIMATIONCLIPFORTRACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ValidateParentTrack(::UnityEngine::Timeline::TrackAsset* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TrackAsset*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_VALIDATEPARENTTRACK_OFFSET))(a1, a2);
		}
	};
}
