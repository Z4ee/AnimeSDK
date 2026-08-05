#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_PRELOADDATA_PRELOADDATADONTSTRIPME_OFFSET UNITYSDK_OFFSET(0x1EE2A670)
#define UNITYENGINE_PRELOADDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE2A680)

namespace UnityEngine
{
	inline static constexpr unsigned int PreloadData_TypeDefinitionIndex = 5399;

	class PreloadData : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PRELOADDATA__CTOR_OFFSET))(this);
		}

		::System::Void PreloadDataDontStripMe()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PRELOADDATA_PRELOADDATADONTSTRIPME_OFFSET))(this);
		}
	};
}
