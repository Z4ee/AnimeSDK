#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/PassType.h"
#include "unitysdk/UnityEngine/ShaderVariantCollection_ShaderVariant.h"

namespace System { class String; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_SHADERVARIANTCOLLECTION_ADDVARIANT_OFFSET UNITYSDK_OFFSET(0x1A485E60)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1A485EA0)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_GETSHADERWITHIDX_OFFSET UNITYSDK_OFFSET(0x1A485EC0)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_GETSHADER_OFFSET UNITYSDK_OFFSET(0x1A485E70)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_GET_SHADERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A485E50)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1A485E80)
#define UNITYENGINE_SHADERVARIANTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A485E90)

namespace UnityEngine
{
	inline static constexpr unsigned int ShaderVariantCollection_TypeDefinitionIndex = 4194;

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

		::System::Boolean AddVariant(::UnityEngine::Shader* shader, ::UnityEngine::Rendering::PassType passType, ::Il2CppArray<::System::String*>* keywords)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Shader*, ::UnityEngine::Rendering::PassType, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_ADDVARIANT_OFFSET))(this, shader, passType, keywords);
		}

		::UnityEngine::Shader* GetShader(::System::Int32 shaderIdx)
		{
			return ((::UnityEngine::Shader*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_GETSHADER_OFFSET))(this, shaderIdx);
		}

		static ::System::Void Internal_Create(::UnityEngine::ShaderVariantCollection* svc)
		{
			return ((::System::Void(*)(::UnityEngine::ShaderVariantCollection*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_INTERNAL_CREATE_OFFSET))(svc);
		}

		::System::Boolean Add(::UnityEngine::ShaderVariantCollection_ShaderVariant variant)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ShaderVariantCollection_ShaderVariant))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_ADD_OFFSET))(this, variant);
		}

		::UnityEngine::Shader* GetShaderWithIdx(::System::Int32 shaderIdx)
		{
			return ((::UnityEngine::Shader*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_GETSHADERWITHIDX_OFFSET))(this, shaderIdx);
		}
	};
}
