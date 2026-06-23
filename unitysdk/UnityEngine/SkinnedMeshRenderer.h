#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/LoopSubdivSettings.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/Rendering/LightProbeUsage.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
#include "unitysdk/UnityEngine/SkinQuality.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class LightProbeProxyVolume; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_SKINNEDMESHRENDERER_ALIGNLODMESH_OFFSET UNITYSDK_OFFSET(0x1DA9C1B0)
#define UNITYENGINE_SKINNEDMESHRENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0x1DA9BFE0)
#define UNITYENGINE_SKINNEDMESHRENDERER_CLEARCACHEDMESHDATA_OFFSET UNITYSDK_OFFSET(0x1DA9C1E0)
#define UNITYENGINE_SKINNEDMESHRENDERER_DRAWCACHEDMESH_1_OFFSET UNITYSDK_OFFSET(0x1DA9C2A0)
#define UNITYENGINE_SKINNEDMESHRENDERER_DRAWCACHEDMESH_2_OFFSET UNITYSDK_OFFSET(0x1DA9C330)
#define UNITYENGINE_SKINNEDMESHRENDERER_DRAWCACHEDMESH_3_OFFSET UNITYSDK_OFFSET(0x1DA9C290)
#define UNITYENGINE_SKINNEDMESHRENDERER_DRAWCACHEDMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DA9C400)
#define UNITYENGINE_SKINNEDMESHRENDERER_DRAWCACHEDMESH_OFFSET UNITYSDK_OFFSET(0x1DA9C200)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETBLENDSHAPEWEIGHT_OFFSET UNITYSDK_OFFSET(0x1DA9BFC0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETCACHEDMESH_OFFSET UNITYSDK_OFFSET(0x1DA9C1C0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETISLOOPSUBDIVISIONALLOWED_OFFSET UNITYSDK_OFFSET(0x1DA9C080)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETLOCALAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DA9C040)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETLOCALAABB_OFFSET UNITYSDK_OFFSET(0x1DA9BFF0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETLOOPSUBDIVSETTINGS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DA9C110)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETLOOPSUBDIVSETTINGS_OFFSET UNITYSDK_OFFSET(0x1DA9C0B0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1DA9BF50)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_ENABLECOMPACTCOMPUTESKINNINGOUTPUT_OFFSET UNITYSDK_OFFSET(0x1DA9BED0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_FORCEMATRIXRECALCULATIONPERRENDER_OFFSET UNITYSDK_OFFSET(0x1DA9BEF0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1DA9C120)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x1DA9BE90)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_ROOTBONE_OFFSET UNITYSDK_OFFSET(0x1DA9BF30)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0x1DA9BF70)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_SKINNEDMOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x1DA9BF90)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x1DA9BF10)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_UPDATEWHENOFFSCREEN_OFFSET UNITYSDK_OFFSET(0x1DA9BEB0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GLOBALOVERRIDEENABLECOMPACTCOMPUTESKINNINGOUTPUT_OFFSET UNITYSDK_OFFSET(0x1DA9C1A0)
#define UNITYENGINE_SKINNEDMESHRENDERER_RELEASEALLCACHEDMESH_OFFSET UNITYSDK_OFFSET(0x1DA9C1F0)
#define UNITYENGINE_SKINNEDMESHRENDERER_RELEASECACHEDMESH_OFFSET UNITYSDK_OFFSET(0x1DA9C1D0)
#define UNITYENGINE_SKINNEDMESHRENDERER_RESETMOTIONVECTORSTATE_OFFSET UNITYSDK_OFFSET(0x1DA9BFB0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SETBLENDSHAPEWEIGHT_OFFSET UNITYSDK_OFFSET(0x1DA9BFD0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SETISLOOPSUBDIVISIONALLOWED_OFFSET UNITYSDK_OFFSET(0x1DA9C070)
#define UNITYENGINE_SKINNEDMESHRENDERER_SETLOCALAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DA9C060)
#define UNITYENGINE_SKINNEDMESHRENDERER_SETLOCALAABB_OFFSET UNITYSDK_OFFSET(0x1DA9C050)
#define UNITYENGINE_SKINNEDMESHRENDERER_SETLOOPSUBDIVSETTINGS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DA9C0A0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SETLOOPSUBDIVSETTINGS_OFFSET UNITYSDK_OFFSET(0x1DA9C090)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_BONES_OFFSET UNITYSDK_OFFSET(0x1DA9BF60)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_ENABLECOMPACTCOMPUTESKINNINGOUTPUT_OFFSET UNITYSDK_OFFSET(0x1DA9BEE0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_FORCEMATRIXRECALCULATIONPERRENDER_OFFSET UNITYSDK_OFFSET(0x1DA9BF00)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1DA9C170)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_QUALITY_OFFSET UNITYSDK_OFFSET(0x1DA9BEA0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_ROOTBONE_OFFSET UNITYSDK_OFFSET(0x1DA9BF40)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0x1DA9BF80)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_SKINNEDMOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x1DA9BFA0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x1DA9BF20)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_UPDATEWHENOFFSCREEN_OFFSET UNITYSDK_OFFSET(0x1DA9BEC0)
#define UNITYENGINE_SKINNEDMESHRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9C410)

namespace UnityEngine
{
	inline static constexpr unsigned int SkinnedMeshRenderer_TypeDefinitionIndex = 5254;

	class SkinnedMeshRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER__CTOR_OFFSET))(this);
		}

		::UnityEngine::SkinQuality get_quality()
		{
			return ((::UnityEngine::SkinQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_QUALITY_OFFSET))(this);
		}

		::System::Void set_quality(::UnityEngine::SkinQuality value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_QUALITY_OFFSET))(this, value);
		}

		::System::Boolean get_updateWhenOffscreen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_UPDATEWHENOFFSCREEN_OFFSET))(this);
		}

		::System::Void set_updateWhenOffscreen(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_UPDATEWHENOFFSCREEN_OFFSET))(this, value);
		}

		::System::Boolean get_enableCompactComputeSkinningOutput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_ENABLECOMPACTCOMPUTESKINNINGOUTPUT_OFFSET))(this);
		}

		::System::Void set_enableCompactComputeSkinningOutput(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_ENABLECOMPACTCOMPUTESKINNINGOUTPUT_OFFSET))(this, value);
		}

		::System::Boolean get_forceMatrixRecalculationPerRender()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_FORCEMATRIXRECALCULATIONPERRENDER_OFFSET))(this);
		}

		::System::Void set_forceMatrixRecalculationPerRender(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_FORCEMATRIXRECALCULATIONPERRENDER_OFFSET))(this, value);
		}

		::System::Single get_sortingFudge()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_SORTINGFUDGE_OFFSET))(this);
		}

		::System::Void set_sortingFudge(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_SORTINGFUDGE_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_rootBone()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_ROOTBONE_OFFSET))(this);
		}

		::System::Void set_rootBone(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_ROOTBONE_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Transform*>* get_bones()
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_BONES_OFFSET))(this);
		}

		::System::Void set_bones(::Il2CppArray<::UnityEngine::Transform*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_BONES_OFFSET))(this, value);
		}

		::UnityEngine::Mesh* get_sharedMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_SHAREDMESH_OFFSET))(this);
		}

		::System::Void set_sharedMesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_SHAREDMESH_OFFSET))(this, value);
		}

		::System::Boolean get_skinnedMotionVectors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_SKINNEDMOTIONVECTORS_OFFSET))(this);
		}

		::System::Void set_skinnedMotionVectors(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_SKINNEDMOTIONVECTORS_OFFSET))(this, value);
		}

		::System::Void ResetMotionVectorState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_RESETMOTIONVECTORSTATE_OFFSET))(this);
		}

		::System::Single GetBlendShapeWeight(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETBLENDSHAPEWEIGHT_OFFSET))(this, index);
		}

		::System::Void SetBlendShapeWeight(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SETBLENDSHAPEWEIGHT_OFFSET))(this, index, value);
		}

		::System::Void BakeMesh(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_BAKEMESH_OFFSET))(this, mesh);
		}

		::UnityEngine::Bounds GetLocalAABB()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETLOCALAABB_OFFSET))(this);
		}

		::System::Void SetLocalAABB(::UnityEngine::Bounds b)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SETLOCALAABB_OFFSET))(this, b);
		}

		::System::Void SetIsLoopSubdivisionAllowed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SETISLOOPSUBDIVISIONALLOWED_OFFSET))(this, value);
		}

		::System::Boolean GetIsLoopSubdivisionAllowed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETISLOOPSUBDIVISIONALLOWED_OFFSET))(this);
		}

		::System::Void SetLoopSubdivSettings(::UnityEngine::LoopSubdivSettings settings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LoopSubdivSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SETLOOPSUBDIVSETTINGS_OFFSET))(this, settings);
		}

		::UnityEngine::LoopSubdivSettings GetLoopSubdivSettings()
		{
			return ((::UnityEngine::LoopSubdivSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETLOOPSUBDIVSETTINGS_OFFSET))(this);
		}

		::UnityEngine::Bounds get_localBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_LOCALBOUNDS_OFFSET))(this);
		}

		::System::Void set_localBounds(::UnityEngine::Bounds value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_LOCALBOUNDS_OFFSET))(this, value);
		}

		static ::System::Void GlobalOverrideEnableCompactComputeSkinningOutput(::System::Int32 mode)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GLOBALOVERRIDEENABLECOMPACTCOMPUTESKINNINGOUTPUT_OFFSET))(mode);
		}

		static ::System::Boolean AlignLodMesh(::UnityEngine::SkinnedMeshRenderer* rendererLod0, ::UnityEngine::SkinnedMeshRenderer* rendererLod1, ::UnityEngine::SkinnedMeshRenderer* rendererLod2, ::UnityEngine::SkinnedMeshRenderer* rendererLod3, ::UnityEngine::Transform* modelLod0, ::UnityEngine::Transform* modelLod1, ::UnityEngine::Transform* modelLod2, ::UnityEngine::Transform* modelLod3)
		{
			return ((::System::Boolean(*)(::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_ALIGNLODMESH_OFFSET))(rendererLod0, rendererLod1, rendererLod2, rendererLod3, modelLod0, modelLod1, modelLod2, modelLod3);
		}

		::System::Int32 GetCachedMesh()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETCACHEDMESH_OFFSET))(this);
		}

		::System::Void ReleaseCachedMesh(::System::Int32 index, ::System::Boolean destroyBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_RELEASECACHEDMESH_OFFSET))(this, index, destroyBuffer);
		}

		::System::Void ClearCachedMeshData(::System::Int32 meshInstanceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_CLEARCACHEDMESHDATA_OFFSET))(this, meshInstanceID);
		}

		::System::Void ReleaseAllCachedMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_RELEASEALLCACHEDMESH_OFFSET))(this);
		}

		::System::Void DrawCachedMesh(::System::Int32 index, ::UnityEngine::Material* material, ::UnityEngine::Matrix4x4 matrix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_DRAWCACHEDMESH_OFFSET))(this, index, material, matrix);
		}

		::System::Void DrawCachedMesh_1(::System::Int32 index, ::UnityEngine::Material* material, ::UnityEngine::Matrix4x4 matrix, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Matrix4x4, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_DRAWCACHEDMESH_1_OFFSET))(this, index, material, matrix, layer);
		}

		::System::Void DrawCachedMesh_2(::System::Int32 index, ::UnityEngine::Material* material, ::UnityEngine::Matrix4x4 matrix, ::System::Int32 layer, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::UnityEngine::Transform* probeAnchor, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Matrix4x4, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Camera*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_DRAWCACHEDMESH_2_OFFSET))(this, index, material, matrix, layer, properties, camera, castShadows, receiveShadows, probeAnchor, lightProbeUsage, lightProbeProxyVolume);
		}

		::System::Void DrawCachedMesh_3(::System::Int32 index, ::System::Int32 submeshIndex, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 layer, ::UnityEngine::Camera* camera, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::UnityEngine::Transform* probeAnchor, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_DRAWCACHEDMESH_3_OFFSET))(this, index, submeshIndex, matrix, material, layer, camera, properties, castShadows, receiveShadows, probeAnchor, lightProbeUsage, lightProbeProxyVolume);
		}

		::System::Void GetLocalAABB_Injected(::UnityEngine::Bounds& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETLOCALAABB_INJECTED_OFFSET))(this, ret);
		}

		::System::Void SetLocalAABB_Injected(::UnityEngine::Bounds& b)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SETLOCALAABB_INJECTED_OFFSET))(this, b);
		}

		::System::Void SetLoopSubdivSettings_Injected(::UnityEngine::LoopSubdivSettings& settings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LoopSubdivSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SETLOOPSUBDIVSETTINGS_INJECTED_OFFSET))(this, settings);
		}

		::System::Void GetLoopSubdivSettings_Injected(::UnityEngine::LoopSubdivSettings& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LoopSubdivSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETLOOPSUBDIVSETTINGS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void DrawCachedMesh_Injected(::System::Int32 index, ::System::Int32 submeshIndex, ::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Material* material, ::System::Int32 layer, ::UnityEngine::Camera* camera, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, ::System::Boolean receiveShadows, ::UnityEngine::Transform* probeAnchor, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Matrix4x4&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, ::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_DRAWCACHEDMESH_INJECTED_OFFSET))(this, index, submeshIndex, matrix, material, layer, camera, properties, castShadows, receiveShadows, probeAnchor, lightProbeUsage, lightProbeProxyVolume);
		}
	};
}
