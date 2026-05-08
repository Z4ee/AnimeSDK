#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_RENDERING_GETSHAREDMATERIALSSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x94DA90)
#define UNITYENGINE_RENDERING_GETSHAREDMATERIALSSCOPE_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNITYENGINE_RENDERING_GETSHAREDMATERIALSSCOPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0798C0)
#define UNITYENGINE_RENDERING_GETSHAREDMATERIALSSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x94DA80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GetSharedMaterialsScope_TypeDefinitionIndex = 29782;

	struct alignas(8) GetSharedMaterialsScope
	{
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_m_samplerGetSharedMaterialConstructor()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(GetSharedMaterialsScope_TypeDefinitionIndex)->GetStaticField(0x23A70);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_m_samplerGetSharedMaterialDispose()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(GetSharedMaterialsScope_TypeDefinitionIndex)->GetStaticField(0x23A78);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _materials_k__BackingField; // 0x10
		::UnityEngine::Renderer* m_cachedRenderer; // 0x18

		::System::Void _ctor(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GETSHAREDMATERIALSSCOPE__CTOR_OFFSET))(this, renderer);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GETSHAREDMATERIALSSCOPE__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* get_materials()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GETSHAREDMATERIALSSCOPE_GET_MATERIALS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GETSHAREDMATERIALSSCOPE_DISPOSE_OFFSET))(this);
		}
	};
}
