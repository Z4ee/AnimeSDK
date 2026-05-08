#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Comic/DataSplitter/DataSplitterBase_1.h"

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_INTSPLITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA18560)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int IntSplitter_TypeDefinitionIndex = 30917;

	class IntSplitter : public ::UnityEngine::Timeline::Comic::DataSplitter::DataSplitterBase_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_INTSPLITTER__CTOR_OFFSET))(this);
		}
	};
}
