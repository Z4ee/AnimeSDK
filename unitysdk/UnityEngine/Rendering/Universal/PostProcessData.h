#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine::Rendering::Universal { class PostProcessData_ShaderResources; }
namespace UnityEngine::Rendering::Universal { class PostProcessData_TextureResources; }

#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19F35810)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F35AE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PostProcessData_TypeDefinitionIndex = 29812;

	class PostProcessData : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources* shaders; // 0x18
		::UnityEngine::Rendering::Universal::PostProcessData_TextureResources* textures; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSDATA__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSDATA_ONENABLE_OFFSET))(this);
		}
	};
}
