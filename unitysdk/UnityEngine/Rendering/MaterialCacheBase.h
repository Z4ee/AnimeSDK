#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ObjectPool_1; }
namespace UnityEngine::Rendering { class MaterialCacheBase_CacheEntry; }

#define UNITYENGINE_RENDERING_MATERIALCACHEBASE_ADDUSINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1C412690)
#define UNITYENGINE_RENDERING_MATERIALCACHEBASE_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1C412D70)
#define UNITYENGINE_RENDERING_MATERIALCACHEBASE_CLEARNOTUSING_OFFSET UNITYSDK_OFFSET(0x1C4128A0)
#define UNITYENGINE_RENDERING_MATERIALCACHEBASE_GET_OFFSET UNITYSDK_OFFSET(0x1C4122F0)
#define UNITYENGINE_RENDERING_MATERIALCACHEBASE_REDUCEUSINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1C4127D0)
#define UNITYENGINE_RENDERING_MATERIALCACHEBASE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C412740)
#define UNITYENGINE_RENDERING_MATERIALCACHEBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C413010)
#define UNITYENGINE_RENDERING_MATERIALCACHEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C412110)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MaterialCacheBase_TypeDefinitionIndex = 27305;

	class MaterialCacheBase : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ObjectPool_1<::UnityEngine::Rendering::MaterialCacheBase_CacheEntry*>** StaticGet_m_pool()
		{
			return (::UnityEngine::NAPRenderPipeline0::ObjectPool_1<::UnityEngine::Rendering::MaterialCacheBase_CacheEntry*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialCacheBase_TypeDefinitionIndex)->GetStaticField(0x23B80);
		}
		// static const ::System::Int32 INIT_CAPACITY = 0x100; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* m_cacheMap; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::MaterialCacheBase_CacheEntry*>* m_cacheEntries; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* m_usingMap; // 0x20
		::System::Int32 m_maxSize; // 0x28

		::System::Void _ctor(::System::Int32 maxSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALCACHEBASE__CTOR_OFFSET))(this, maxSize);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALCACHEBASE__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Get(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALCACHEBASE_GET_OFFSET))(this, renderer);
		}

		::System::Void Release(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALCACHEBASE_RELEASE_OFFSET))(this, renderer);
		}

		::System::Void AddUsingCount(::System::Int32 rendererId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALCACHEBASE_ADDUSINGCOUNT_OFFSET))(this, rendererId);
		}

		::System::Void ReduceUsingCount(::System::Int32 rendererId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALCACHEBASE_REDUCEUSINGCOUNT_OFFSET))(this, rendererId);
		}

		::System::Void ClearNotUsing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALCACHEBASE_CLEARNOTUSING_OFFSET))(this);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALCACHEBASE_CLEARALL_OFFSET))(this);
		}
	};
}
