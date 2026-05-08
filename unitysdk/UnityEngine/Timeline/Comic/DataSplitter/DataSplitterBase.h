#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_DATASPLITTERBASE_CLEARIMP_OFFSET UNITYSDK_OFFSET(0x1C288F50)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_DATASPLITTERBASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C288F40)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_DATASPLITTERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C288F60)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int DataSplitterBase_TypeDefinitionIndex = 30910;

	class DataSplitterBase : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_DATASPLITTERBASE__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_DATASPLITTERBASE_CLEAR_OFFSET))(this);
		}

		::System::Void ClearImp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_DATASPLITTERBASE_CLEARIMP_OFFSET))(this);
		}
	};
}
