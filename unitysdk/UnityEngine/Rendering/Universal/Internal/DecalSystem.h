#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalProjector; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalSystem_CullRequest; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalSystem_CullResult; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalSystem_DecalHandle; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalSystem_DecalSet; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_ADDDECAL_OFFSET UNITYSDK_OFFSET(0x19AB3340)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_BEGINCULL_OFFSET UNITYSDK_OFFSET(0x19AB4700)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CLEANUP_OFFSET UNITYSDK_OFFSET(0x19AB58D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CREATEDRAWDATA_OFFSET UNITYSDK_OFFSET(0x19AB4DB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_ENDCULL_OFFSET UNITYSDK_OFFSET(0x19AB49F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_GETTEMPQUADMESHFORTEXTURESTREAMINGFAKER_OFFSET UNITYSDK_OFFSET(0x19AB2C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_GETTEMPQUADMESH_OFFSET UNITYSDK_OFFSET(0x19AB26F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_GET_CURRENTCAMERA_OFFSET UNITYSDK_OFFSET(0x19AB26D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_GET_DRAWDISTANCE_OFFSET UNITYSDK_OFFSET(0x19AB26B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19AB21A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_GET_PERCHANELMASK_OFFSET UNITYSDK_OFFSET(0x19AB26C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_ISDECAL_OFFSET UNITYSDK_OFFSET(0x19AB3210)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_LOADCULLRESULTS_OFFSET UNITYSDK_OFFSET(0x19AB4BB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_ONCULLEND_OFFSET UNITYSDK_OFFSET(0x19AB4890)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_ONPRECULLRENDERPASSES_OFFSET UNITYSDK_OFFSET(0x19AB4640)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_QUERYCULLRESULTS_OFFSET UNITYSDK_OFFSET(0x19AB51C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_REFRESHATLAS_OFFSET UNITYSDK_OFFSET(0x19AB2460)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_REMOVEDECAL_OFFSET UNITYSDK_OFFSET(0x19AB3A10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_RENDERINTODBUFFER_OFFSET UNITYSDK_OFFSET(0x19AB5390)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_SET_CURRENTCAMERA_OFFSET UNITYSDK_OFFSET(0x19AB26E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_UPDATECACHEDDATA_1_OFFSET UNITYSDK_OFFSET(0x19AB3F80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_UPDATECACHEDDATA_2_OFFSET UNITYSDK_OFFSET(0x19AB42B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_UPDATECACHEDDATA_OFFSET UNITYSDK_OFFSET(0x19AB3BB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AB5990)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB2370)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DecalSystem_TypeDefinitionIndex = 30346;

	class DecalSystem : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Single>** StaticGet_m_BoundingDistances()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(DecalSystem_TypeDefinitionIndex)->GetStaticField(0x23CE0);
		}
		static ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult** StaticGet_decalCullResults()
		{
			return (::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult**)Il2CppClass::FromTypeDefinitionIndex(DecalSystem_TypeDefinitionIndex)->GetStaticField(0x23CE8);
		}
		static ::UnityEngine::Rendering::Universal::Internal::DecalSystem** StaticGet_m_Instance()
		{
			return (::UnityEngine::Rendering::Universal::Internal::DecalSystem**)Il2CppClass::FromTypeDefinitionIndex(DecalSystem_TypeDefinitionIndex)->GetStaticField(0x23CF0);
		}
		static ::UnityEngine::Mesh** StaticGet_m_DecalMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(DecalSystem_TypeDefinitionIndex)->GetStaticField(0x23CF8);
		}
		static ::System::Int32* StaticGet_m_DecalsVisibleThisFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DecalSystem_TypeDefinitionIndex)->GetStaticField(0x65A0);
		}
		static ::UnityEngine::Vector4* StaticGet_kMin()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(DecalSystem_TypeDefinitionIndex)->GetStaticField(0x65A4);
		}
		static ::System::Boolean* StaticGet_s_EnableLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DecalSystem_TypeDefinitionIndex)->GetStaticField(0x65B4);
		}
		static ::UnityEngine::Vector4* StaticGet_kMax()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(DecalSystem_TypeDefinitionIndex)->GetStaticField(0x65B8);
		}
		// static const ::System::Int32 kInvalidIndex = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 kNullMaterialIndex = 0x7FFFFFFF; // 0x0
		// static const ::System::Int32 kDefaultDrawDistance = 0x3E8; // 0x0
		// static const ::System::Int32 kDecalBlockSize = 0x80; // 0x0
		// static const ::System::Int32 kDrawIndexedBatchSize = 0x46; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalSet*>* m_DecalSets; // 0x10
		::UnityEngine::Texture2D* m_NormalAtlas; // 0x18
		::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullRequest* decalCullRequest; // 0x20
		::UnityEngine::Texture2D* m_DiffuseAtlas; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalSet*>* m_DecalSetsRenderList; // 0x30
		::UnityEngine::Camera* m_Camera; // 0x38
		::System::Boolean m_PrevAllocationSuccess; // 0x40
		::System::Boolean isBlackCanvasOn; // 0x41
		::System::Boolean m_AllocationSuccess; // 0x42

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::Internal::DecalSystem* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::DecalSystem*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_GET_INSTANCE_OFFSET))();
		}

		::System::Void RefreshAtlas(::UnityEngine::Texture2D* diffuse, ::UnityEngine::Texture2D* normal)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_REFRESHATLAS_OFFSET))(this, diffuse, normal);
		}

		::System::Int32 get_DrawDistance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_GET_DRAWDISTANCE_OFFSET))(this);
		}

		::System::Boolean get_perChanelMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_GET_PERCHANELMASK_OFFSET))(this);
		}

		::UnityEngine::Camera* get_CurrentCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_GET_CURRENTCAMERA_OFFSET))(this);
		}

		::System::Void set_CurrentCamera(::UnityEngine::Camera* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_SET_CURRENTCAMERA_OFFSET))(this, value);
		}

		static ::System::Void GetTempQuadMesh(::UnityEngine::Mesh*& quadMesh, ::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max, ::UnityEngine::Vector2 uvScale, ::UnityEngine::Vector2 uvBias)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_GETTEMPQUADMESH_OFFSET))(quadMesh, min, max, uvScale, uvBias);
		}

		static ::System::Void GetTempQuadMeshForTextureStreamingFaker(::UnityEngine::Mesh*& quadMesh, ::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max, ::UnityEngine::Vector2 uvScale, ::UnityEngine::Vector2 uvBias)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_GETTEMPQUADMESHFORTEXTURESTREAMINGFAKER_OFFSET))(quadMesh, min, max, uvScale, uvBias);
		}

		static ::System::Boolean IsDecal(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_ISDECAL_OFFSET))(material);
		}

		::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle* AddDecal(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::UnityEngine::Matrix4x4 sizeOffset, ::System::Single drawDistance, ::System::Single moveSpeed, ::UnityEngine::Vector4 uvScaleBias, ::System::Single normalIntensity, ::System::Single emissionIntensity, ::UnityEngine::Material* material, ::System::Int32 layerMask, ::System::Single fadeFactor, ::UnityEngine::Rendering::Universal::Internal::DecalProjector* projector)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4, ::System::Single, ::System::Single, ::UnityEngine::Vector4, ::System::Single, ::System::Single, ::UnityEngine::Material*, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::Universal::Internal::DecalProjector*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_ADDDECAL_OFFSET))(this, position, rotation, scale, sizeOffset, drawDistance, moveSpeed, uvScaleBias, normalIntensity, emissionIntensity, material, layerMask, fadeFactor, projector);
		}

		::System::Void RemoveDecal(::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle* handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_REMOVEDECAL_OFFSET))(this, handle);
		}

		::System::Void UpdateCachedData(::UnityEngine::Matrix4x4 localToWorld, ::UnityEngine::Quaternion rotation, ::UnityEngine::Matrix4x4 sizeOffset, ::System::Single drawDistance, ::System::Single fadeScale, ::UnityEngine::Vector4 uvScaleBias, ::System::Single normalIntensity, ::System::Single emissionIntensity, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle* handle, ::System::Int32 layerMask, ::System::Single fadeFactor, ::UnityEngine::Rendering::Universal::Internal::DecalProjector* projector)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Quaternion, ::UnityEngine::Matrix4x4, ::System::Single, ::System::Single, ::UnityEngine::Vector4, ::System::Single, ::System::Single, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle*, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::Universal::Internal::DecalProjector*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_UPDATECACHEDDATA_OFFSET))(this, localToWorld, rotation, sizeOffset, drawDistance, fadeScale, uvScaleBias, normalIntensity, emissionIntensity, handle, layerMask, fadeFactor, projector);
		}

		::System::Void UpdateCachedData_1(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Matrix4x4 sizeOffset, ::System::Single drawDistance, ::System::Single fadeScale, ::UnityEngine::Vector4 uvScaleBias, ::System::Single normalIntensity, ::System::Single emissionIntensity, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle* handle, ::System::Int32 layerMask, ::System::Single fadeFactor, ::UnityEngine::Rendering::Universal::Internal::DecalProjector* projector)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Matrix4x4, ::System::Single, ::System::Single, ::UnityEngine::Vector4, ::System::Single, ::System::Single, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle*, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::Universal::Internal::DecalProjector*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_UPDATECACHEDDATA_1_OFFSET))(this, position, rotation, sizeOffset, drawDistance, fadeScale, uvScaleBias, normalIntensity, emissionIntensity, handle, layerMask, fadeFactor, projector);
		}

		::System::Void UpdateCachedData_2(::UnityEngine::Transform* transform, ::UnityEngine::Matrix4x4 sizeOffset, ::System::Single drawDistance, ::System::Single fadeScale, ::UnityEngine::Vector4 uvScaleBias, ::System::Single normalIntensity, ::System::Single emissionIntensity, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle* handle, ::System::Int32 layerMask, ::System::Single fadeFactor, ::UnityEngine::Rendering::Universal::Internal::DecalProjector* projector)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Matrix4x4, ::System::Single, ::System::Single, ::UnityEngine::Vector4, ::System::Single, ::System::Single, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle*, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::Universal::Internal::DecalProjector*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_UPDATECACHEDDATA_2_OFFSET))(this, transform, sizeOffset, drawDistance, fadeScale, uvScaleBias, normalIntensity, emissionIntensity, handle, layerMask, fadeFactor, projector);
		}

		::System::Void OnPreCullRenderPasses(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_ONPRECULLRENDERPASSES_OFFSET))(this, cameraData);
		}

		::System::Void OnCullEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_ONCULLEND_OFFSET))(this);
		}

		::System::Void BeginCull(::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullRequest*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_BEGINCULL_OFFSET))(this, request);
		}

		::System::Int32 QueryCullResults(::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullRequest* decalCullRequest, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult* cullResults)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullRequest*, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_QUERYCULLRESULTS_OFFSET))(this, decalCullRequest, cullResults);
		}

		::System::Void EndCull(::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullRequest* cullRequest, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult* cullResults)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullRequest*, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_ENDCULL_OFFSET))(this, cullRequest, cullResults);
		}

		::System::Void RenderIntoDBuffer(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 passOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_RENDERINTODBUFFER_OFFSET))(this, cmd, passOffset);
		}

		::System::Void CreateDrawData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CREATEDRAWDATA_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CLEANUP_OFFSET))(this);
		}

		::System::Void LoadCullResults(::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult* cullResult)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_LOADCULLRESULTS_OFFSET))(this, cullResult);
		}
	};
}
