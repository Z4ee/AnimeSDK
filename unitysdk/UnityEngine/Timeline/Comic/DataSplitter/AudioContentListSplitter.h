#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Comic/DataSplitter/DataSplitterBase_1.h"

namespace MoleMole::Comic { class AudioContent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_AUDIOCONTENTLISTSPLITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC68E80)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int AudioContentListSplitter_TypeDefinitionIndex = 30912;

	class AudioContentListSplitter : public ::UnityEngine::Timeline::Comic::DataSplitter::DataSplitterBase_1<::System::Collections::Generic::List_1<::MoleMole::Comic::AudioContent*>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_AUDIOCONTENTLISTSPLITTER__CTOR_OFFSET))(this);
		}
	};
}
