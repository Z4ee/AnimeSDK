#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoundingSphere.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalProjector; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalSystem_CullRequest_Set; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalSystem_CullResult_Set; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalSystem_DecalHandle; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalSystem_TextureScaleBias; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_ADDDECAL_OFFSET UNITYSDK_OFFSET(0x1D5F3130)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_ASSIGNCURRENTBATCHES_OFFSET UNITYSDK_OFFSET(0x1D5F4460)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_BEGINCULL_OFFSET UNITYSDK_OFFSET(0x1D5F3EC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_CREATEDRAWDATA_OFFSET UNITYSDK_OFFSET(0x1D5F4790)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_ENDCULL_OFFSET UNITYSDK_OFFSET(0x1D5F50C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_GETDECALPROJECTBOUNDINGSPHERE_OFFSET UNITYSDK_OFFSET(0x1D5F2630)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D5F58C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_GET_DRAWORDER_OFFSET UNITYSDK_OFFSET(0x1D5F5980)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_GET_KEYMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D5F58B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_INITIALIZEMATERIALVALUES_OFFSET UNITYSDK_OFFSET(0x1D5F2240)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_ISDRAWN_OFFSET UNITYSDK_OFFSET(0x1D5F4620)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_MOVECACHEDDATA_OFFSET UNITYSDK_OFFSET(0x1D5F3960)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_NEEDRENDERDECAL_OFFSET UNITYSDK_OFFSET(0x1D5F5270)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_QUERYCULLRESULTS_OFFSET UNITYSDK_OFFSET(0x1D5F4220)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_REFRESHDRAWORDER_OFFSET UNITYSDK_OFFSET(0x1D5F58D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_REMOVEDECAL_OFFSET UNITYSDK_OFFSET(0x1D5F3E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_RENDERDECAL_OFFSET UNITYSDK_OFFSET(0x1D5F53F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_SETCULLRESULT_OFFSET UNITYSDK_OFFSET(0x1D5F5990)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_UPDATECACHEDDATA_OFFSET UNITYSDK_OFFSET(0x1D5F2960)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5F5B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F2380)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DecalSystem_DecalSet_TypeDefinitionIndex = 26877;

	class DecalSystem_DecalSet : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__DrawOrderShderId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DecalSystem_DecalSet_TypeDefinitionIndex)->GetStaticField(0x7290);
		}
		::Il2CppArray<::UnityEngine::Matrix4x4>* m_CachedDecalToWorld; // 0x10
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Matrix4x4>*>* m_DecalToWorld; // 0x18
		::UnityEngine::Rendering::Universal::Internal::DecalSystem_TextureScaleBias* m_Mask; // 0x20
		::Il2CppArray<::System::Int32>* m_ResultIndices; // 0x28
		::UnityEngine::MaterialPropertyBlock* m_PropertyBlock; // 0x30
		::Il2CppArray<::UnityEngine::BoundingSphere>* m_BoundingSpheres; // 0x38
		::UnityEngine::Rendering::Universal::Internal::DecalSystem_TextureScaleBias* m_Normal; // 0x40
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Vector4>*>* m_ExtraParams; // 0x48
		::Il2CppArray<::UnityEngine::Vector4>* m_CachedExtraParams; // 0x50
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Matrix4x4>*>* m_NormalToWorld; // 0x58
		::Il2CppArray<::UnityEngine::Vector2>* m_CachedDrawDistances; // 0x60
		::UnityEngine::Rendering::Universal::Internal::DecalSystem_TextureScaleBias* m_Diffuse; // 0x68
		::UnityEngine::Material* m_Material; // 0x70
		::Il2CppArray<::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle*>* m_Handles; // 0x78
		::Il2CppArray<::System::Single>* m_CachedEmissionIntensity; // 0x80
		::Il2CppArray<::UnityEngine::Matrix4x4>* m_CachedNormalToWorld; // 0x88
		::Il2CppArray<::System::Boolean>* m_CachedAnimationToggle; // 0x90
		::Il2CppArray<::System::Int32>* m_CachedLayerMask; // 0x98
		::Il2CppArray<::UnityEngine::Vector4>* m_CachedUVScaleBias; // 0xA0
		::System::Int32 m_InstanceCount; // 0xA8
		::System::Int32 m_NumResults; // 0xAC
		::System::Int32 _DrawOrder; // 0xB0
		::System::Int32 m_DecalsCount; // 0xB4
		::UnityEngine::Vector2Int MinMaxSiblingIndex; // 0xB8

		::System::Void _ctor(::UnityEngine::Material* material, ::System::Single normalIntensity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET__CTOR_OFFSET))(this, material, normalIntensity);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET__CCTOR_OFFSET))();
		}

		::System::Void InitializeMaterialValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_INITIALIZEMATERIALVALUES_OFFSET))(this);
		}

		::UnityEngine::BoundingSphere GetDecalProjectBoundingSphere(::UnityEngine::Matrix4x4 decalToWorld)
		{
			return ((::UnityEngine::BoundingSphere(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_GETDECALPROJECTBOUNDINGSPHERE_OFFSET))(this, decalToWorld);
		}

		::System::Void UpdateCachedData(::UnityEngine::Matrix4x4 localToWorld, ::UnityEngine::Quaternion rotation, ::UnityEngine::Matrix4x4 sizeOffset, ::System::Single drawDistance, ::System::Single moveSpeed, ::UnityEngine::Vector4 uvScaleBias, ::System::Single normalIntensity, ::System::Single emissionIntensity, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle* handle, ::System::Int32 layerMask, ::System::Single fadeFactor, ::UnityEngine::Rendering::Universal::Internal::DecalProjector* projector)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Quaternion, ::UnityEngine::Matrix4x4, ::System::Single, ::System::Single, ::UnityEngine::Vector4, ::System::Single, ::System::Single, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle*, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::Universal::Internal::DecalProjector*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_UPDATECACHEDDATA_OFFSET))(this, localToWorld, rotation, sizeOffset, drawDistance, moveSpeed, uvScaleBias, normalIntensity, emissionIntensity, handle, layerMask, fadeFactor, projector);
		}

		::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle* AddDecal(::UnityEngine::Matrix4x4 localToWorld, ::UnityEngine::Quaternion rotation, ::UnityEngine::Matrix4x4 sizeOffset, ::System::Single drawDistance, ::System::Single moveSpeed, ::UnityEngine::Vector4 uvScaleBias, ::System::Single normalIntensity, ::System::Single emissionIntensity, ::System::Int32 instanceId, ::System::Int32 layerMask, ::System::Single fadeFactor, ::UnityEngine::Rendering::Universal::Internal::DecalProjector* projector)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle*(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Quaternion, ::UnityEngine::Matrix4x4, ::System::Single, ::System::Single, ::UnityEngine::Vector4, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::Universal::Internal::DecalProjector*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_ADDDECAL_OFFSET))(this, localToWorld, rotation, sizeOffset, drawDistance, moveSpeed, uvScaleBias, normalIntensity, emissionIntensity, instanceId, layerMask, fadeFactor, projector);
		}

		::System::Void MoveCachedData(::System::Int32 sourceIndex, ::System::Int32 targetIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_MOVECACHEDDATA_OFFSET))(this, sourceIndex, targetIndex);
		}

		::System::Void RemoveDecal(::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle* handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_REMOVEDECAL_OFFSET))(this, handle);
		}

		::System::Void BeginCull(::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullRequest_Set* cullRequest)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullRequest_Set*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_BEGINCULL_OFFSET))(this, cullRequest);
		}

		::System::Int32 QueryCullResults(::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullRequest_Set* cullRequest, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult_Set* cullResult)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullRequest_Set*, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult_Set*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_QUERYCULLRESULTS_OFFSET))(this, cullRequest, cullResult);
		}

		::System::Void AssignCurrentBatches(::Il2CppArray<::UnityEngine::Matrix4x4>*& decalToWorldBatch, ::Il2CppArray<::UnityEngine::Matrix4x4>*& normalToWorldBatch, ::Il2CppArray<::UnityEngine::Vector4>*& extraParams, ::System::Int32 batchCount)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Matrix4x4>*&, ::Il2CppArray<::UnityEngine::Matrix4x4>*&, ::Il2CppArray<::UnityEngine::Vector4>*&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_ASSIGNCURRENTBATCHES_OFFSET))(this, decalToWorldBatch, normalToWorldBatch, extraParams, batchCount);
		}

		::System::Boolean IsDrawn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_ISDRAWN_OFFSET))(this);
		}

		::System::Void CreateDrawData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_CREATEDRAWDATA_OFFSET))(this);
		}

		::System::Void EndCull(::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullRequest_Set* request)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullRequest_Set*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_ENDCULL_OFFSET))(this, request);
		}

		::System::Boolean needRenderDecal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_NEEDRENDERDECAL_OFFSET))(this);
		}

		::System::Void RenderDecal(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 passOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_RENDERDECAL_OFFSET))(this, cmd, passOffset);
		}

		::UnityEngine::Material* get_KeyMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_GET_KEYMATERIAL_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_GET_COUNT_OFFSET))(this);
		}

		::System::Void RefreshDrawOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_REFRESHDRAWORDER_OFFSET))(this);
		}

		::System::Int32 get_DrawOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_GET_DRAWORDER_OFFSET))(this);
		}

		::System::Void SetCullResult(::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult_Set* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult_Set*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALSET_SETCULLRESULT_OFFSET))(this, value);
		}
	};
}
