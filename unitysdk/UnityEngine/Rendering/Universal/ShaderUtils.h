#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ShaderPathID.h"

namespace System { class String; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS_GETENUMFROMPATH_OFFSET UNITYSDK_OFFSET(0x1C456B40)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS_GETSHADERPATH_OFFSET UNITYSDK_OFFSET(0x1C456A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS_ISLWSHADER_OFFSET UNITYSDK_OFFSET(0x1C456C30)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0x1C456D50)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C456DB0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderUtils_TypeDefinitionIndex = 27691;

	class ShaderUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_ShaderPaths()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ShaderUtils_TypeDefinitionIndex)->GetStaticField(0x23C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS__CCTOR_OFFSET))();
		}

		static ::System::String* GetShaderPath(::UnityEngine::Rendering::Universal::ShaderPathID id)
		{
			return ((::System::String*(*)(::UnityEngine::Rendering::Universal::ShaderPathID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS_GETSHADERPATH_OFFSET))(id);
		}

		static ::UnityEngine::Rendering::Universal::ShaderPathID GetEnumFromPath(::System::String* path)
		{
			return ((::UnityEngine::Rendering::Universal::ShaderPathID(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS_GETENUMFROMPATH_OFFSET))(path);
		}

		static ::System::Boolean IsLWShader(::UnityEngine::Shader* shader)
		{
			return ((::System::Boolean(*)(::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS_ISLWSHADER_OFFSET))(shader);
		}

		static ::System::Void SetKeyword(::System::String* keyword, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS_SETKEYWORD_OFFSET))(keyword, enable);
		}
	};
}
