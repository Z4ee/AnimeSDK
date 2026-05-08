#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class EventTriggerMarker; }
namespace UnityEngine::Timeline { class TimelineAsset; }

#define UNITYENGINE_TIMELINE_COMICEVENTBASE_EDITORICONISUNITYINNER_OFFSET UNITYSDK_OFFSET(0x1BFAC100)
#define UNITYENGINE_TIMELINE_COMICEVENTBASE_GETEDITORICONPATH_OFFSET UNITYSDK_OFFSET(0x1BFAC0F0)
#define UNITYENGINE_TIMELINE_COMICEVENTBASE_GETEDITORSHOWNAME_OFFSET UNITYSDK_OFFSET(0x1BFAC0B0)
#define UNITYENGINE_TIMELINE_COMICEVENTBASE_GET_HASMARKERINFO_OFFSET UNITYSDK_OFFSET(0x1BFABBD0)
#define UNITYENGINE_TIMELINE_COMICEVENTBASE_GET_ISEDIT_OFFSET UNITYSDK_OFFSET(0x1BFABBC0)
#define UNITYENGINE_TIMELINE_COMICEVENTBASE_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1BFABCE0)
#define UNITYENGINE_TIMELINE_COMICEVENTBASE_ONISEDITCHANGE_OFFSET UNITYSDK_OFFSET(0x1BFABBB0)
#define UNITYENGINE_TIMELINE_COMICEVENTBASE_ONTAGDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1BFABD30)
#define UNITYENGINE_TIMELINE_COMICEVENTBASE_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1BFABD20)
#define UNITYENGINE_TIMELINE_COMICEVENTBASE_TAGSSHOWIF_OFFSET UNITYSDK_OFFSET(0x1BFAC0A0)
#define UNITYENGINE_TIMELINE_COMICEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFAC110)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ComicEventBase_TypeDefinitionIndex = 30772;

	class ComicEventBase : public ::System::Object
	{
	public:
		::UnityEngine::Timeline::EventTriggerMarker* marker; // 0x10
		::UnityEngine::Timeline::TimelineAsset* tlAsset; // 0x18
		::System::String* _guid; // 0x20
		::System::Boolean _isEdit; // 0x28
		::MoleMole::ComicImgPart belongType; // 0x2C
		::System::Double delay; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* tags; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICEVENTBASE__CTOR_OFFSET))(this);
		}

		::System::Void OnIsEditChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICEVENTBASE_ONISEDITCHANGE_OFFSET))(this);
		}

		::System::Boolean get_IsEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICEVENTBASE_GET_ISEDIT_OFFSET))(this);
		}

		::System::Boolean get_HasMarkerInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICEVENTBASE_GET_HASMARKERINFO_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICEVENTBASE_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICEVENTBASE_SET_KEY_OFFSET))(this, value);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* OnTagDropDown()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICEVENTBASE_ONTAGDROPDOWN_OFFSET))(this);
		}

		::System::Boolean TagsShowIf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICEVENTBASE_TAGSSHOWIF_OFFSET))(this);
		}

		::System::String* GetEditorShowName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICEVENTBASE_GETEDITORSHOWNAME_OFFSET))(this);
		}

		::System::String* GetEditorIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICEVENTBASE_GETEDITORICONPATH_OFFSET))(this);
		}

		::System::Boolean EditorIconIsUnityInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICEVENTBASE_EDITORICONISUNITYINNER_OFFSET))(this);
		}
	};
}
