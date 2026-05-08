#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Comic/DataSplitter/DataSplitterBase_1.h"

namespace UnityEngine::Timeline::Comic::DataSplitter { class BGMPageInfo; }

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFOSPLITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C404EB0)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int BGMPageInfoSplitter_TypeDefinitionIndex = 30914;

	class BGMPageInfoSplitter : public ::UnityEngine::Timeline::Comic::DataSplitter::DataSplitterBase_1<::UnityEngine::Timeline::Comic::DataSplitter::BGMPageInfo*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFOSPLITTER__CTOR_OFFSET))(this);
		}
	};
}
