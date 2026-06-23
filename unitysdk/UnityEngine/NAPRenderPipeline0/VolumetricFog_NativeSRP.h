#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOG_NATIVESRP_CHECKVISIABLE_OFFSET UNITYSDK_OFFSET(0x1D819060)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOG_NATIVESRP_DRAWLOCALVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1D818B70)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOG_NATIVESRP_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D8192B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOG_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D819300)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumetricFog_NativeSRP_TypeDefinitionIndex = 6008;

	class VolumetricFog_NativeSRP : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Mesh* m_Mesh; // 0x18
		::Il2CppArray<::UnityEngine::Mesh*>* m_Meshes; // 0x20
		::System::Single m_Param_Jittering; // 0x28
		::System::Single m_Param_Dithering; // 0x2C
		::System::Single m_StartFadeOutDistance; // 0x30
		::System::Single m_MaxVisiableDistance; // 0x34
		::System::Boolean m_EnableDistanceCulling; // 0x38
		::System::Single m_Param_IntensityTowardLight; // 0x3C
		::System::Single m_Param_DustIntensity; // 0x40
		::System::Single m_Param_MaxIntensity; // 0x44
		::System::Single m_Param_Step; // 0x48
		::UnityEngine::Color m_Param_Color; // 0x4C
		::UnityEngine::Vector4 densityAndDistortionTilling; // 0x5C
		::UnityEngine::Vector4 panDirectionAndSpeed; // 0x6C
		::UnityEngine::Texture3D* distortionTexture; // 0x80
		::UnityEngine::Texture3D* densityTexture; // 0x88
		::Il2CppArray<::UnityEngine::Vector3>* boundExtensions; // 0x90
		::Il2CppArray<::UnityEngine::Vector3>* boundCenters; // 0x98
		::Il2CppArray<::UnityEngine::Bounds>* bounds; // 0xA0
		::System::Boolean isInEditorMode; // 0xA8
		::System::Int32 proxyType; // 0xAC
		::UnityEngine::Matrix4x4 proxyMatrix; // 0xB0
		::System::Boolean isVisiable; // 0xF0
		::System::Single fadeValue; // 0xF4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOG_NATIVESRP__CTOR_OFFSET))(this);
		}

		::System::Void DrawLocalVolumetricFog(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::MaterialPropertyBlock* cachedPropertyBlock, ::System::Int32 index, ::System::Single globalFogIntensity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOG_NATIVESRP_DRAWLOCALVOLUMETRICFOG_OFFSET))(this, cmd, cachedPropertyBlock, index, globalFogIntensity);
		}

		::System::Boolean CheckVisiable(::UnityEngine::Camera* camera, ::Il2CppArray<::UnityEngine::Plane>* planes, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::Plane>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOG_NATIVESRP_CHECKVISIABLE_OFFSET))(this, camera, planes, index);
		}

		::UnityEngine::Bounds GetBounds(::System::Int32 index)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOG_NATIVESRP_GETBOUNDS_OFFSET))(this, index);
		}
	};
}
