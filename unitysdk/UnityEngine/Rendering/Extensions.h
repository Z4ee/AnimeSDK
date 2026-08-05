#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ForwardRendererData_ShaderConfig.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ForwardRendererData_ShaderFeature.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_RENDERING_EXTENSIONS_EDITORDESTROY_OFFSET UNITYSDK_OFFSET(0x1E65EDB0)
#define UNITYENGINE_RENDERING_EXTENSIONS_FINDGAMEOBJECTBYPATH_OFFSET UNITYSDK_OFFSET(0x1E65EF30)
#define UNITYENGINE_RENDERING_EXTENSIONS_FINDINALLCHILDREN_OFFSET UNITYSDK_OFFSET(0x1E65F070)
#define UNITYENGINE_RENDERING_EXTENSIONS_FINDROOTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E65EFD0)
#define UNITYENGINE_RENDERING_EXTENSIONS_GETFULLPATH_OFFSET UNITYSDK_OFFSET(0x1E65EAA0)
#define UNITYENGINE_RENDERING_EXTENSIONS_GETSHADERCONFIG_OFFSET UNITYSDK_OFFSET(0x1E65E3C0)
#define UNITYENGINE_RENDERING_EXTENSIONS_GETSHADERFEATURE_OFFSET UNITYSDK_OFFSET(0x1E65EA00)
#define UNITYENGINE_RENDERING_EXTENSIONS_SETPROPERTYBLOCKEXT_1_OFFSET UNITYSDK_OFFSET(0x1E65E250)
#define UNITYENGINE_RENDERING_EXTENSIONS_SETPROPERTYBLOCKEXT_OFFSET UNITYSDK_OFFSET(0x1E65E0D0)
#define UNITYENGINE_RENDERING_EXTENSIONS_SUPPORTFEATURE_OFFSET UNITYSDK_OFFSET(0x1E65E950)
#define UNITYENGINE_RENDERING_EXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E65F720)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Extensions_TypeDefinitionIndex = 26988;

	class Extensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_FindGameObject()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Extensions_TypeDefinitionIndex)->GetStaticField(0x237F0);
		}
		static ::System::Boolean* StaticGet_optimizeFind()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Extensions_TypeDefinitionIndex)->GetStaticField(0x6F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_EXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Void SetPropertyBlockExt(::UnityEngine::Renderer* renderer, ::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_EXTENSIONS_SETPROPERTYBLOCKEXT_OFFSET))(renderer, mpb, materialIndex);
		}

		static ::System::Void SetPropertyBlockExt_1(::UnityEngine::Renderer* renderer, ::UnityEngine::MaterialPropertyBlock* mpb)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_EXTENSIONS_SETPROPERTYBLOCKEXT_1_OFFSET))(renderer, mpb);
		}

		static ::System::Boolean GetShaderConfig(::UnityEngine::Shader* shader, ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderConfig& config)
		{
			return ((::System::Boolean(*)(::UnityEngine::Shader*, ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_EXTENSIONS_GETSHADERCONFIG_OFFSET))(shader, config);
		}

		static ::System::Boolean SupportFeature(::UnityEngine::Shader* shader, ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature feature)
		{
			return ((::System::Boolean(*)(::UnityEngine::Shader*, ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_EXTENSIONS_SUPPORTFEATURE_OFFSET))(shader, feature);
		}

		static ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature GetShaderFeature(::UnityEngine::Shader* shader)
		{
			return ((::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature(*)(::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_EXTENSIONS_GETSHADERFEATURE_OFFSET))(shader);
		}

		static ::System::String* GetFullPath(::UnityEngine::Transform* transform)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_EXTENSIONS_GETFULLPATH_OFFSET))(transform);
		}

		static ::System::Void EditorDestroy(::UnityEngine::Object* object)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_EXTENSIONS_EDITORDESTROY_OFFSET))(object);
		}

		static ::UnityEngine::GameObject* FindGameObjectByPath(::System::String* path)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_EXTENSIONS_FINDGAMEOBJECTBYPATH_OFFSET))(path);
		}

		static ::UnityEngine::GameObject* FindRootGameObject(::System::String* path)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_EXTENSIONS_FINDROOTGAMEOBJECT_OFFSET))(path);
		}

		static ::UnityEngine::Transform* FindInAllChildren(::UnityEngine::Transform* transform, ::System::String* name)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_EXTENSIONS_FINDINALLCHILDREN_OFFSET))(transform, name);
		}
	};
}
