#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FE460)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterResources_TypeDefinitionIndex = 26796;

	class WaterResources : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Texture2D* defaultFoamRamp; // 0x18
		::UnityEngine::Texture2D* defaultFoamMap; // 0x20
		::UnityEngine::Texture2D* defaultSurfaceMap; // 0x28
		::UnityEngine::Material* defaultSeaMaterial; // 0x30
		::Il2CppArray<::UnityEngine::Mesh*>* defaultWaterMeshes; // 0x38
		::System::Boolean useBumpMap; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRESOURCES__CTOR_OFFSET))(this);
		}
	};
}
