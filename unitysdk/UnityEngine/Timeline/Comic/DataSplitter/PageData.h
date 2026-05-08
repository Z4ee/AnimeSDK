#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Comic { class AudioContent; }
namespace MoleMole::Comic { class ScreenSplitAnimAudioDataWrapper; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA84500)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int PageData_TypeDefinitionIndex = 30918;

	class PageData : public ::System::Object
	{
	public:
		::System::Boolean useNewVersionAudioConfig_startAudio; // 0x10
		::System::String* startAudio; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Comic::AudioContent*>* startAudioDataList; // 0x20
		::System::Single startAudioDuration; // 0x28
		::System::String* endAudio; // 0x30
		::System::Single endAudioDuration; // 0x38
		::System::Boolean useNewVersionAudioConfig_screenSplitAudio; // 0x3C
		::System::Collections::Generic::List_1<::System::String*>* screenAnimAudios; // 0x40
		::System::Collections::Generic::List_1<::System::Single>* screenAnimAudiosDuration; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::Comic::ScreenSplitAnimAudioDataWrapper*>* screenSplitAnimAudioDataList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATA__CTOR_OFFSET))(this);
		}
	};
}
