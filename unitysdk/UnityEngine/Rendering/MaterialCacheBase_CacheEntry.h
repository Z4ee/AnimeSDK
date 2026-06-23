#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERING_MATERIALCACHEBASE_CACHEENTRY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BDAA700)
#define UNITYENGINE_RENDERING_MATERIALCACHEBASE_CACHEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDAA7A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MaterialCacheBase_CacheEntry_TypeDefinitionIndex = 27119;

	class MaterialCacheBase_CacheEntry : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* materials; // 0x10
		::System::Int32 version; // 0x18
		::System::Int32 rendererId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALCACHEBASE_CACHEENTRY__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALCACHEBASE_CACHEENTRY_CLEAR_OFFSET))(this);
		}
	};
}
