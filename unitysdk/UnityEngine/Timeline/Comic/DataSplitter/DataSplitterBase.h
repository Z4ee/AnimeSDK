#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_DATASPLITTERBASE_CLEARIMP_OFFSET UNITYSDK_OFFSET(0x1E5A8E40)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_DATASPLITTERBASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E5A8E30)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_DATASPLITTERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A8E50)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int DataSplitterBase_TypeDefinitionIndex = 32461;

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
