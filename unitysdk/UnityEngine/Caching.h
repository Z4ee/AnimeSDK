#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Cache.h"

#define UNITYENGINE_CACHING_GET_CURRENTCACHEFORWRITING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A42D200)
#define UNITYENGINE_CACHING_GET_CURRENTCACHEFORWRITING_OFFSET UNITYSDK_OFFSET(0x1A42D1E0)

namespace UnityEngine
{
	inline static constexpr unsigned int Caching_TypeDefinitionIndex = 3850;

	class Caching : public ::System::Object
	{
	public:
		static ::UnityEngine::Cache get_currentCacheForWriting()
		{
			return ((::UnityEngine::Cache(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_GET_CURRENTCACHEFORWRITING_OFFSET))();
		}

		static ::System::Void get_currentCacheForWriting_Injected(::UnityEngine::Cache& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Cache&))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_GET_CURRENTCACHEFORWRITING_INJECTED_OFFSET))(ret);
		}
	};
}
