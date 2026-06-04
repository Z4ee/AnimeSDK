#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/PassType.h"
#include "unitysdk/UnityEngine/ShaderVariantCollection_ShaderVariant.h"

namespace System { class String; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_SHADERVARIANTCOLLECTION_ADDVARIANT_OFFSET UNITYSDK_OFFSET(0x1B2D68A0)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1B2D68E0)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_GETSHADERWITHIDX_OFFSET UNITYSDK_OFFSET(0x1B2D6900)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_GETSHADER_OFFSET UNITYSDK_OFFSET(0x1B2D68B0)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_GET_SHADERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2D6890)
#define UNITYENGINE_SHADERVARIANTCOLLECTION_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B2D68C0)
#define UNITYENGINE_SHADERVARIANTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D68D0)

namespace UnityEngine
{
	inline static constexpr unsigned int ShaderVariantCollection_TypeDefinitionIndex = 4368;

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

		::System::Boolean AddVariant(::UnityEngine::Shader* a1, ::UnityEngine::Rendering::PassType a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Shader*, ::UnityEngine::Rendering::PassType, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_ADDVARIANT_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Shader* GetShader(::System::Int32 a1)
		{
			return ((::UnityEngine::Shader*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_GETSHADER_OFFSET))(this, a1);
		}

		static ::System::Void Internal_Create(::UnityEngine::ShaderVariantCollection* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ShaderVariantCollection*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_INTERNAL_CREATE_OFFSET))(a1);
		}

		::System::Boolean Add(::UnityEngine::ShaderVariantCollection_ShaderVariant a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ShaderVariantCollection_ShaderVariant))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_ADD_OFFSET))(this, a1);
		}

		::UnityEngine::Shader* GetShaderWithIdx(::System::Int32 a1)
		{
			return ((::UnityEngine::Shader*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERVARIANTCOLLECTION_GETSHADERWITHIDX_OFFSET))(this, a1);
		}
	};
}
