#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/PassType.h"
#include "unitysdk/UnityEngine/ShaderVariantCollection_ShaderVariant.h"

namespace System { class String; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_SHADERVARIANTCOLLECTION_ADDVARIANT_OFFSET UNITYSDK_OFFSET(0x1B4C8570)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1B4C8630)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B4C85A0)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_CONTAINSVARIANT_OFFSET UNITYSDK_OFFSET(0x1B4C8590)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1B4C8690)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_GET_ISWARMEDUP_OFFSET UNITYSDK_OFFSET(0x1B4C8560)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_GET_SHADERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4C8540)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_GET_VARIANTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4C8550)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B4C85C0)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_REMOVEVARIANT_OFFSET UNITYSDK_OFFSET(0x1B4C8580)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B4C8660)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_WARMUP_OFFSET UNITYSDK_OFFSET(0x1B4C85B0)
#define UNITYENGINE_SHADERVARIANTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C85D0)

namespace UnityEngine
{
	inline static constexpr unsigned int ShaderVariantCollection_TypeDefinitionIndex = 5389;

	class ShaderVariantCollection : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_shaderCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_GET_SHADERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_variantCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_GET_VARIANTCOUNT_OFFSET))(this);
		}

		::System::Boolean get_isWarmedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_GET_ISWARMEDUP_OFFSET))(this);
		}

		::System::Boolean AddVariant(::UnityEngine::Shader* shader, ::UnityEngine::Rendering::PassType passType, ::Il2CppArray<::System::String*>* keywords, ::System::String* pipeline)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Shader*, ::UnityEngine::Rendering::PassType, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_ADDVARIANT_OFFSET))(this, shader, passType, keywords, pipeline);
		}

		::System::Boolean RemoveVariant(::UnityEngine::Shader* shader, ::UnityEngine::Rendering::PassType passType, ::Il2CppArray<::System::String*>* keywords, ::System::String* pipeline)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Shader*, ::UnityEngine::Rendering::PassType, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_REMOVEVARIANT_OFFSET))(this, shader, passType, keywords, pipeline);
		}

		::System::Boolean ContainsVariant(::UnityEngine::Shader* shader, ::UnityEngine::Rendering::PassType passType, ::Il2CppArray<::System::String*>* keywords, ::System::String* pipeline)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Shader*, ::UnityEngine::Rendering::PassType, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_CONTAINSVARIANT_OFFSET))(this, shader, passType, keywords, pipeline);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Void WarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_WARMUP_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::ShaderVariantCollection* svc)
		{
			return ((::System::Void(*)(::UnityEngine::ShaderVariantCollection*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_INTERNAL_CREATE_OFFSET))(svc);
		}

		::System::Boolean Add(::UnityEngine::ShaderVariantCollection_ShaderVariant variant)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ShaderVariantCollection_ShaderVariant))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_ADD_OFFSET))(this, variant);
		}

		::System::Boolean Remove(::UnityEngine::ShaderVariantCollection_ShaderVariant variant)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ShaderVariantCollection_ShaderVariant))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_REMOVE_OFFSET))(this, variant);
		}

		::System::Boolean Contains(::UnityEngine::ShaderVariantCollection_ShaderVariant variant)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ShaderVariantCollection_ShaderVariant))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_CONTAINS_OFFSET))(this, variant);
		}
	};
}
