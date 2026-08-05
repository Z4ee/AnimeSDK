#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/ComicBubbleImgType.h"
#include "unitysdk/UnityEngine/Timeline/KeyEventBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_TIMELINE_BUBBLEEVENT_EDITORICONISUNITYINNER_OFFSET UNITYSDK_OFFSET(0x1EF75E00)
#define UNITYENGINE_TIMELINE_BUBBLEEVENT_GETARROWOUTLENRATE_OFFSET UNITYSDK_OFFSET(0x1EF75CE0)
#define UNITYENGINE_TIMELINE_BUBBLEEVENT_GETARROWOUTLEN_OFFSET UNITYSDK_OFFSET(0x1EF75C90)
#define UNITYENGINE_TIMELINE_BUBBLEEVENT_GETARROWTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1EF75D40)
#define UNITYENGINE_TIMELINE_BUBBLEEVENT_GETEDITORICONPATH_OFFSET UNITYSDK_OFFSET(0x1EF75DC0)
#define UNITYENGINE_TIMELINE_BUBBLEEVENT_GETEDITORSHOWNAME_OFFSET UNITYSDK_OFFSET(0x1EF75D80)
#define UNITYENGINE_TIMELINE_BUBBLEEVENT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1EF75BD0)
#define UNITYENGINE_TIMELINE_BUBBLEEVENT_GETROTATION_OFFSET UNITYSDK_OFFSET(0x1EF75BF0)
#define UNITYENGINE_TIMELINE_BUBBLEEVENT_GETSHOWARROW_OFFSET UNITYSDK_OFFSET(0x1EF75C50)
#define UNITYENGINE_TIMELINE_BUBBLEEVENT_SETARROWOUTLENRATE_OFFSET UNITYSDK_OFFSET(0x1EF75CB0)
#define UNITYENGINE_TIMELINE_BUBBLEEVENT_SETARROWOUTLEN_OFFSET UNITYSDK_OFFSET(0x1EF75C70)
#define UNITYENGINE_TIMELINE_BUBBLEEVENT_SETARROWTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1EF75D10)
#define UNITYENGINE_TIMELINE_BUBBLEEVENT_SETROTATION_OFFSET UNITYSDK_OFFSET(0x1EF75C20)
#define UNITYENGINE_TIMELINE_BUBBLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF75E10)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int BubbleEvent_TypeDefinitionIndex = 32961;

	class BubbleEvent : public ::UnityEngine::Timeline::KeyEventBase
	{
	public:
		// static const ::System::Int32 NO_TALKER_ID = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 NO_NEED_ID = 0xFFFFFFFE; // 0x0
		// static const ::System::String* BUBBLE_CONTENT_GROUP_NAME; // 0x0
		::UnityEngine::Vector2 Position; // 0x40
		::UnityEngine::Vector3 Rotation; // 0x48
		::System::Boolean showArrow; // 0x54
		::System::Boolean arrorUseTargetPosVersion; // 0x55
		::UnityEngine::Vector2 ArrowTargetPosition; // 0x58
		::System::Single CHNsizeDeltaYOutsideFrame_Rate; // 0x60
		::System::Single CHNsizeDeltaYOutsideFrame; // 0x64
		::System::Single CHNFrameWidth; // 0x68
		::System::Single CHNFrameHeight; // 0x6C
		::System::Int32 maxLineCount; // 0x70
		::System::Boolean MoveWhenSplitScreen; // 0x74
		::System::Boolean HideWhenSplitScreen; // 0x75
		::System::Int32 HideWhenSplitScreenIndex; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* extraOffsetOnSplitAnim; // 0x80
		::MoleMole::Comic::ComicBubbleImgType imgType; // 0x88
		::UnityEngine::Timeline::BubbleEvent* femaleBubbleEvent; // 0x90
		::System::String* _talkerName; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEEVENT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetPosition(::System::Boolean isMale)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEEVENT_GETPOSITION_OFFSET))(this, isMale);
		}

		::UnityEngine::Vector3 GetRotation(::System::Boolean isMale)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEEVENT_GETROTATION_OFFSET))(this, isMale);
		}

		::System::Void SetRotation(::System::Boolean isMale, ::UnityEngine::Vector3 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEEVENT_SETROTATION_OFFSET))(this, isMale, val);
		}

		::System::Boolean GetShowArrow(::System::Boolean isMale)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEEVENT_GETSHOWARROW_OFFSET))(this, isMale);
		}

		::System::Void SetArrowOutLen(::System::Boolean isMale, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEEVENT_SETARROWOUTLEN_OFFSET))(this, isMale, val);
		}

		::System::Single GetArrowOutLen(::System::Boolean isMale)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEEVENT_GETARROWOUTLEN_OFFSET))(this, isMale);
		}

		::System::Void SetArrowOutLenRate(::System::Boolean isMale, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEEVENT_SETARROWOUTLENRATE_OFFSET))(this, isMale, val);
		}

		::System::Single GetArrowOutLenRate(::System::Boolean isMale)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEEVENT_GETARROWOUTLENRATE_OFFSET))(this, isMale);
		}

		::System::Void SetArrowTargetPosition(::System::Boolean isMale, ::UnityEngine::Vector2 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEEVENT_SETARROWTARGETPOSITION_OFFSET))(this, isMale, val);
		}

		::UnityEngine::Vector2 GetArrowTargetPosition(::System::Boolean isMale)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEEVENT_GETARROWTARGETPOSITION_OFFSET))(this, isMale);
		}

		::System::String* GetEditorShowName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEEVENT_GETEDITORSHOWNAME_OFFSET))(this);
		}

		::System::String* GetEditorIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEEVENT_GETEDITORICONPATH_OFFSET))(this);
		}

		::System::Boolean EditorIconIsUnityInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEEVENT_EDITORICONISUNITYINNER_OFFSET))(this);
		}
	};
}
