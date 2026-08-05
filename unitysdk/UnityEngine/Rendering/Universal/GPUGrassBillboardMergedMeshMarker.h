#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDMERGEDMESHMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3013D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassBillboardMergedMeshMarker_TypeDefinitionIndex = 27981;

	class GPUGrassBillboardMergedMeshMarker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Mesh* bakedMesh; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* bakedMaterials; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDMERGEDMESHMARKER__CTOR_OFFSET))(this);
		}
	};
}
