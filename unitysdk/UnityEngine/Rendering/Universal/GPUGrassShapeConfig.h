#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSSHAPECONFIG_CLEARINSTANCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B07CDF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSSHAPECONFIG_GETCURRENTMESH_OFFSET UNITYSDK_OFFSET(0x1B07D0F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSSHAPECONFIG_GET_MATERIALFORLOD1_OFFSET UNITYSDK_OFFSET(0x1B07CAD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSSHAPECONFIG_GET_MATERIALFORLOD2_OFFSET UNITYSDK_OFFSET(0x1B07CC60)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSSHAPECONFIG_GET_MATERIALWITHDITHERON_OFFSET UNITYSDK_OFFSET(0x1B07C920)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSSHAPECONFIG_INITLOD_OFFSET UNITYSDK_OFFSET(0x1B07CE90)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSSHAPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B07D160)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassShapeConfig_TypeDefinitionIndex = 30244;

	class GPUGrassShapeConfig : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* lod0; // 0x10
		::UnityEngine::Mesh* lod1; // 0x18
		::UnityEngine::Mesh* lod2; // 0x20
		::UnityEngine::Mesh* shadowProxy; // 0x28
		::UnityEngine::Material* material; // 0x30
		::UnityEngine::Material* _lod1M; // 0x38
		::UnityEngine::Material* _lod2M; // 0x40
		::UnityEngine::Material* _matWithDitherOn; // 0x48
		::System::Boolean enableBlend; // 0x50
		::System::Boolean enableCameraDither; // 0x51
		::System::Single baseSize; // 0x54
		::System::Single sizeRandom; // 0x58
		::System::Single alignment; // 0x5C
		::System::Single alignmentRandom; // 0x60
		::System::Single posRandom; // 0x64
		::System::Single baseBend; // 0x68
		::System::Single bendRandom; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSSHAPECONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* get_materialWithDitherOn()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSSHAPECONFIG_GET_MATERIALWITHDITHERON_OFFSET))(this);
		}

		::UnityEngine::Material* get_materialForLod1()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSSHAPECONFIG_GET_MATERIALFORLOD1_OFFSET))(this);
		}

		::UnityEngine::Material* get_materialForLod2()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSSHAPECONFIG_GET_MATERIALFORLOD2_OFFSET))(this);
		}

		::System::Void ClearInstanceMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSSHAPECONFIG_CLEARINSTANCEMATERIAL_OFFSET))(this);
		}

		::System::Void InitLod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSSHAPECONFIG_INITLOD_OFFSET))(this);
		}

		::UnityEngine::Mesh* GetCurrentMesh(::System::Int32 maxLodLevel)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSSHAPECONFIG_GETCURRENTMESH_OFFSET))(this, maxLodLevel);
		}
	};
}
