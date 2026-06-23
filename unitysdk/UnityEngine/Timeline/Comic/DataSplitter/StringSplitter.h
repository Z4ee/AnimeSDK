#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Comic/DataSplitter/DataSplitterBase_1.h"

namespace System { class String; }

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_STRINGSPLITTER_CLEARIMP_OFFSET UNITYSDK_OFFSET(0x1E4B9B90)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_STRINGSPLITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B9EB0)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int StringSplitter_TypeDefinitionIndex = 32471;

	class StringSplitter : public ::UnityEngine::Timeline::Comic::DataSplitter::DataSplitterBase_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_STRINGSPLITTER__CTOR_OFFSET))(this);
		}

		::System::Void ClearImp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_STRINGSPLITTER_CLEARIMP_OFFSET))(this);
		}
	};
}
