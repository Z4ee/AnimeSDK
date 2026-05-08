#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/KeyEventBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class SplitScreenEvent_CustomImgPosModifyInfo; }

#define UNITYENGINE_TIMELINE_SPLITSCREENEVENT_GETEDITORSHOWNAME_OFFSET UNITYSDK_OFFSET(0x1C449720)
#define UNITYENGINE_TIMELINE_SPLITSCREENEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C449760)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SplitScreenEvent_TypeDefinitionIndex = 30781;

	class SplitScreenEvent : public ::UnityEngine::Timeline::KeyEventBase
	{
	public:
		::System::Int32 animIndex; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::SplitScreenEvent_CustomImgPosModifyInfo*>* imgPosModifyInfos; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SPLITSCREENEVENT__CTOR_OFFSET))(this);
		}

		::System::String* GetEditorShowName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SPLITSCREENEVENT_GETEDITORSHOWNAME_OFFSET))(this);
		}
	};
}
