#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/MaterialCacheBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_MATERIALCACHE_GETMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CEEBC50)
#define UNITYENGINE_RENDERING_MATERIALCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEEBBF0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MaterialCache_TypeDefinitionIndex = 26468;

	class MaterialCache : public ::UnityEngine::Rendering::MaterialCacheBase
	{
	public:
		::System::Void _ctor(::System::Int32 maxSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALCACHE__CTOR_OFFSET))(this, maxSize);
		}

		::System::Void GetMaterials(::UnityEngine::Renderer* renderer, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* materials)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALCACHE_GETMATERIALS_OFFSET))(this, renderer, materials);
		}
	};
}
