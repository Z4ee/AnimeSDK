#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class MaterialCache; }
namespace UnityEngine::Rendering { class SharedMaterialCache; }

#define UNITYENGINE_RENDERING_RENDERERMATERIALCACHE_CLEANCACHEREGULARLY_OFFSET UNITYSDK_OFFSET(0x1CC7A070)
#define UNITYENGINE_RENDERING_RENDERERMATERIALCACHE_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1CC7A270)
#define UNITYENGINE_RENDERING_RENDERERMATERIALCACHE_GETRENDERERMATERIALWITHCACHE_OFFSET UNITYSDK_OFFSET(0x1CC7A0F0)
#define UNITYENGINE_RENDERING_RENDERERMATERIALCACHE_GETRENDERERSHAREDMATERIALWITHCACHE_OFFSET UNITYSDK_OFFSET(0x1CC7A150)
#define UNITYENGINE_RENDERING_RENDERERMATERIALCACHE_GET_ENABLECACHE_OFFSET UNITYSDK_OFFSET(0x1CC79D40)
#define UNITYENGINE_RENDERING_RENDERERMATERIALCACHE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CC79DA0)
#define UNITYENGINE_RENDERING_RENDERERMATERIALCACHE_RELEASEMATERIALLIST_OFFSET UNITYSDK_OFFSET(0x1CC7A1B0)
#define UNITYENGINE_RENDERING_RENDERERMATERIALCACHE_RELEASESHAREDMATERIALLIST_OFFSET UNITYSDK_OFFSET(0x1CC7A210)
#define UNITYENGINE_RENDERING_RENDERERMATERIALCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC7A2E0)
#define UNITYENGINE_RENDERING_RENDERERMATERIALCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC79E90)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RendererMaterialCache_TypeDefinitionIndex = 26833;

	class RendererMaterialCache : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::RendererMaterialCache** StaticGet_m_instance()
		{
			return (::UnityEngine::Rendering::RendererMaterialCache**)Il2CppClass::FromTypeDefinitionIndex(RendererMaterialCache_TypeDefinitionIndex)->GetStaticField(0x22BA0);
		}
		static ::System::Boolean* StaticGet_enableCacheConfig()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RendererMaterialCache_TypeDefinitionIndex)->GetStaticField(0x6060);
		}
		// static const ::System::Int32 CACHE_MAX_SIZE = 0x400; // 0x0
		// static const ::System::Single CLEAN_CACHE_TIME; // 0x0
		::UnityEngine::Rendering::SharedMaterialCache* m_sharedMaterialCache; // 0x10
		::UnityEngine::Rendering::MaterialCache* m_materialCache; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERMATERIALCACHE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERMATERIALCACHE__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_EnableCache()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERMATERIALCACHE_GET_ENABLECACHE_OFFSET))();
		}

		static ::UnityEngine::Rendering::RendererMaterialCache* get_instance()
		{
			return ((::UnityEngine::Rendering::RendererMaterialCache*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERMATERIALCACHE_GET_INSTANCE_OFFSET))();
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* GetRendererMaterialWithCache(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERMATERIALCACHE_GETRENDERERMATERIALWITHCACHE_OFFSET))(this, renderer);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* GetRendererSharedMaterialWithCache(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERMATERIALCACHE_GETRENDERERSHAREDMATERIALWITHCACHE_OFFSET))(this, renderer);
		}

		::System::Void ReleaseMaterialList(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERMATERIALCACHE_RELEASEMATERIALLIST_OFFSET))(this, renderer);
		}

		::System::Void ReleaseSharedMaterialList(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERMATERIALCACHE_RELEASESHAREDMATERIALLIST_OFFSET))(this, renderer);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERMATERIALCACHE_CLEARALL_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CleanCacheRegularly()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERMATERIALCACHE_CLEANCACHEREGULARLY_OFFSET))(this);
		}
	};
}
