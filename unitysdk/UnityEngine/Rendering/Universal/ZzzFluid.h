#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Rendering/CullingResults.h"
#include "unitysdk/UnityEngine/Rendering/DrawingSettings.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData_FluidFXResources; }
namespace UnityEngine::Rendering::Universal { class ZzzFluid_WindSource; }

#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E675BD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_CHECKSOURCEMATERIALRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x1E675890)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_CLEARFLUIDRENDERTARGETS_OFFSET UNITYSDK_OFFSET(0x1E678480)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_CREATEFLUIDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1E675C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_DRAWSOURCEACTOR_OFFSET UNITYSDK_OFFSET(0x1E67AEB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_ENABLEFLUIDRUNTIME_OFFSET UNITYSDK_OFFSET(0x1E677B60)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_GETPLANEPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x1E67B170)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_INSTANCESOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E675490)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E678020)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E675290)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E675100)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1E6753D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1E675430)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1E675350)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1E6751C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_RELEASEFLUIDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1E678300)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_RESETSOURCEMATERIALRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x1E6757B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_SETUPCOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x1E679790)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_SIMULATEFLUID_OFFSET UNITYSDK_OFFSET(0x1E6796D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E678A10)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67C320)
#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID__CTOR_OFFSET UNITYSDK_OFFSET(0x1E67C010)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ZzzFluid_TypeDefinitionIndex = 27533;

	class ZzzFluid : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Mesh** StaticGet_Quad()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(ZzzFluid_TypeDefinitionIndex)->GetStaticField(0x23840);
		}
		static ::UnityEngine::RenderTextureFormat* StaticGet_DefaultRTFormat()
		{
			return (::UnityEngine::RenderTextureFormat*)Il2CppClass::FromTypeDefinitionIndex(ZzzFluid_TypeDefinitionIndex)->GetStaticField(0x7100);
		}
		// static const ::System::Int32 maxWindSource = 0xA; // 0x0
		::Il2CppArray<::UnityEngine::Rendering::Universal::ZzzFluid_WindSource*>* windActors; // 0x18
		::System::Boolean useFluidSourceMaterial; // 0x20
		::UnityEngine::Vector2Int Resolution; // 0x24
		::UnityEngine::Material* outputMaterial; // 0x30
		::System::Single DensityTxtMult; // 0x38
		::System::Single FlowFeedback; // 0x3C
		::UnityEngine::Texture2D* _DensityNoiseTexture; // 0x40
		::System::Single _DensityNoiseAmount; // 0x48
		::System::Single _DensityNoiseSpeed; // 0x4C
		::System::Single _DensityNoiseTile; // 0x50
		::System::Single _EdgeMaskWidth; // 0x54
		::System::Single _FadeDensityAtSimEdge; // 0x58
		::System::Single _Randomize; // 0x5C
		::System::Single _WorldOffsetWeight; // 0x60
		::System::Single _VeloStrength; // 0x64
		::System::Single _VeloOffsetX; // 0x68
		::System::Single _VeloOffsetY; // 0x6C
		::System::Single _Divergence; // 0x70
		::System::Single _VeloAmpNoise; // 0x74
		::UnityEngine::Texture2D* _VeloAmpNoiseTexture; // 0x78
		::System::Single _VeloAmpNoiseSize; // 0x80
		::System::Single _VeloAmpNoiseSpeed; // 0x84
		::System::Single _VeloDirNoise; // 0x88
		::UnityEngine::Texture2D* _VeloDirNoiseTexture; // 0x90
		::System::Single _VeloDirNoiseSize; // 0x98
		::System::Single _VeloDirNoiseSpeed; // 0x9C
		::UnityEngine::Texture2D* _EdgeMaskTexture; // 0xA0
		::System::Single _SimEdgeBouncyness; // 0xA8
		::System::Single _TexelSizeMult; // 0xAC
		::System::Int32 jacobiLoopCount; // 0xB0
		::System::Single ExpPressureFeedbackComponent; // 0xB4
		::System::Single ExpDivergenceFeedbackComponent; // 0xB8
		::System::Single PressureEdgeMasking; // 0xBC
		::UnityEngine::RenderTexture* RT_Composite; // 0xC0
		::UnityEngine::RenderTexture* RT_Advection; // 0xC8
		::UnityEngine::RenderTexture* RT_PressureDivergence; // 0xD0
		::UnityEngine::RenderTexture* RT_PressureDivergenceTemp; // 0xD8
		::UnityEngine::RenderTexture* windSourceTexture; // 0xE0
		::UnityEngine::Material* M_I_Advection; // 0xE8
		::UnityEngine::Material* M_I_Divergence; // 0xF0
		::UnityEngine::Material* pressureCircle1; // 0xF8
		::UnityEngine::Material* pressureCircle2; // 0x100
		::UnityEngine::Material* pressureCircle2Final; // 0x108
		::UnityEngine::Material* M_I_CompositeAndGradient; // 0x110
		::UnityEngine::Material* meshWindSourceMat; // 0x118
		::UnityEngine::Transform* TransformPivot; // 0x120
		::UnityEngine::Transform* SnapTarget; // 0x128
		::UnityEngine::Quaternion TransformOffset; // 0x130
		::System::Int32 downSampleFactor; // 0x140
		::UnityEngine::MeshFilter* MeshFilter; // 0x148
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ZzzFluid_WindSource*>* MeshRendererWindActors; // 0x150
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ZzzFluid_WindSource*>* ContainerWindActors; // 0x158
		::System::Boolean Initialized; // 0x160
		::UnityEngine::Vector3 SnapOffset; // 0x164
		::UnityEngine::Rendering::DrawingSettings m_DrawSetting; // 0x170
		::UnityEngine::Rendering::FilteringSettings m_FilterSettings; // 0x2A8
		::System::Int32 m_SingleRenderIndex; // 0x2C4
		::System::Int32 m_TargetRenderQueue; // 0x2C8
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* m_InstancedSourceMaterials; // 0x2D0
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* m_InstancedTargetMaterials; // 0x2D8
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* m_InstancedSourceMaterialsRenderer; // 0x2E0
		::UnityEngine::Rendering::Universal::ForwardRendererData_FluidFXResources* m_Resource; // 0x2E8
		::System::Boolean isFirstTimeCreated; // 0x2F0
		::System::Boolean m_ResourcesCreated; // 0x2F1
		::System::Single preTime; // 0x2F4
		::UnityEngine::Vector3 preScreenPosition; // 0x2F8
		::UnityEngine::Vector3 preWorldPosition; // 0x304
		::System::Boolean positionIsReady; // 0x310
		::UnityEngine::Camera* targetGameCamera; // 0x318
		::UnityEngine::MaterialPropertyBlock* addInputMatProperties; // 0x320
		::UnityEngine::MaterialPropertyBlock* advectMatProperties; // 0x328
		::UnityEngine::MaterialPropertyBlock* calcVProjectionMatProperties; // 0x330
		::UnityEngine::MaterialPropertyBlock* windSourceMatProperties; // 0x338
		::UnityEngine::MaterialPropertyBlock* calcDivergenceMatProperties; // 0x340
		::UnityEngine::MaterialPropertyBlock* jacobiMatProperties; // 0x348
		::UnityEngine::MaterialPropertyBlock* jacobiUnrollMatProperties; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void InstanceSourceMaterial(::UnityEngine::Renderer* render)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_INSTANCESOURCEMATERIAL_OFFSET))(this, render);
		}

		::System::Void ResetSourceMaterialRenderQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_RESETSOURCEMATERIALRENDERQUEUE_OFFSET))(this);
		}

		::System::Void CheckSourceMaterialRenderQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_CHECKSOURCEMATERIALRENDERQUEUE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_AWAKE_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_ONDESTROY_OFFSET))(this);
		}

		::System::Void CreateFluidResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_CREATEFLUIDRESOURCES_OFFSET))(this);
		}

		::System::Void ReleaseFluidResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_RELEASEFLUIDRESOURCES_OFFSET))(this);
		}

		::System::Void ClearFluidRenderTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_CLEARFLUIDRENDERTARGETS_OFFSET))(this);
		}

		::System::Void EnableFluidRuntime(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_ENABLEFLUIDRUNTIME_OFFSET))(this, camera);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_UPDATE_OFFSET))(this);
		}

		::System::Void SimulateFluid(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CullingResults& cullingResults, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CullingResults&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_SIMULATEFLUID_OFFSET))(this, context, cullingResults, renderingData, cmd);
		}

		::System::Void DrawSourceActor(::UnityEngine::Rendering::CommandBuffer* FluidCommandBuffer, ::UnityEngine::Renderer* renderer, ::System::Boolean useRawMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_DRAWSOURCEACTOR_OFFSET))(this, FluidCommandBuffer, renderer, useRawMaterial);
		}

		::System::Void SetupCommandBuffer(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CullingResults& cullingResults, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* FluidCommandBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CullingResults&, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_SETUPCOMMANDBUFFER_OFFSET))(this, context, cullingResults, camera, FluidCommandBuffer);
		}

		::UnityEngine::Matrix4x4 GetPlaneProjectionMatrix(::UnityEngine::Camera* camera)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_GETPLANEPROJECTIONMATRIX_OFFSET))(this, camera);
		}
	};
}
