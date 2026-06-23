#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSDATA_TEXTURERESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A48B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PostProcessData_TextureResources_TypeDefinitionIndex = 26730;

	class PostProcessData_TextureResources : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Texture2D*>* blueNoise16LTex; // 0x10
		::Il2CppArray<::UnityEngine::Vector2Int>* blueNoise16TexLSizes; // 0x18
		::Il2CppArray<::UnityEngine::Texture2D*>* filmGrainTex; // 0x20
		::Il2CppArray<::UnityEngine::Vector2Int>* filmGrainTexSizes; // 0x28
		::UnityEngine::Texture2D* smaaAreaTex; // 0x30
		::UnityEngine::Texture2D* smaaSearchTex; // 0x38
		::UnityEngine::Texture2D* noiseTex128; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSDATA_TEXTURERESOURCES__CTOR_OFFSET))(this);
		}
	};
}
