#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC17610)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int BGMPageInfo_TypeDefinitionIndex = 33095;

	class BGMPageInfo : public ::System::Object
	{
	public:
		::System::String* startBGM; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* screenAnimEndBGMs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFO__CTOR_OFFSET))(this);
		}
	};
}
