#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_RENDERING_GETMATERIALSSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A3170)
#define UNITYENGINE_RENDERING_GETMATERIALSSCOPE_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x259D70)
#define UNITYENGINE_RENDERING_GETMATERIALSSCOPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5EE650)
#define UNITYENGINE_RENDERING_GETMATERIALSSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A3160)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GetMaterialsScope_TypeDefinitionIndex = 27384;

	struct alignas(8) GetMaterialsScope
	{
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_m_samplerGetMaterialDispose()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(GetMaterialsScope_TypeDefinitionIndex)->GetStaticField(0x23990);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_m_samplerGetMaterialConstructor()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(GetMaterialsScope_TypeDefinitionIndex)->GetStaticField(0x23998);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _materials_k__BackingField; // 0x10
		::System::Boolean m_getShared; // 0x18
		::UnityEngine::Renderer* m_cachedRenderer; // 0x20

		::System::Void _ctor(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GETMATERIALSSCOPE__CTOR_OFFSET))(this, renderer);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GETMATERIALSSCOPE__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* get_materials()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GETMATERIALSSCOPE_GET_MATERIALS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GETMATERIALSSCOPE_DISPOSE_OFFSET))(this);
		}
	};
}
