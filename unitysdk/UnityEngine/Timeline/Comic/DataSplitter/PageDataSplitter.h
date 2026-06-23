#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Comic/DataSplitter/DataSplitterBase_1.h"

namespace UnityEngine::Timeline::Comic::DataSplitter { class PageData; }

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATASPLITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8FD50)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int PageDataSplitter_TypeDefinitionIndex = 32470;

	class PageDataSplitter : public ::UnityEngine::Timeline::Comic::DataSplitter::DataSplitterBase_1<::UnityEngine::Timeline::Comic::DataSplitter::PageData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATASPLITTER__CTOR_OFFSET))(this);
		}
	};
}
