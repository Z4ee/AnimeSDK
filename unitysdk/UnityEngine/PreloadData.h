#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_PRELOADDATA_PRELOADDATADONTSTRIPME_OFFSET UNITYSDK_OFFSET(0x1A467DF0)

namespace UnityEngine
{
	inline static constexpr unsigned int PreloadData_TypeDefinitionIndex = 4197;

	class PreloadData : public ::UnityEngine::Object
	{
	public:
		::System::Void PreloadDataDontStripMe()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PRELOADDATA_PRELOADDATADONTSTRIPME_OFFSET))(this);
		}
	};
}
