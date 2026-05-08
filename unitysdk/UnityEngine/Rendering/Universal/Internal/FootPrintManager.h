#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/FootPrintManager_CachedFootPrintRenderItem.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/FootPrintManager_FootPrintRenderItem.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/FootPrintManager_FootPrintSpawnerType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }
namespace UnityEngine::Rendering::Universal::Internal { class FootPrintManager_FootPrintArray; }
namespace UnityEngine::Rendering::Universal::Internal { class FootPrintSpawner; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_ADDTONPCFOOTPRINTQUEUE_OFFSET UNITYSDK_OFFSET(0x1B07F850)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_CLEARCACHEDDATA_OFFSET UNITYSDK_OFFSET(0x1B07DF40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_CLEARTARGETHOLDER_OFFSET UNITYSDK_OFFSET(0x1B07F0D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_DRAWFOOTPRINT_OFFSET UNITYSDK_OFFSET(0x1B081000)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_DUMPFOOTPRINTPASSMASK_OFFSET UNITYSDK_OFFSET(0x1B080560)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B07DE50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_NEEDDRAWFOOTPRINTPASS_OFFSET UNITYSDK_OFFSET(0x1B080D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_TICKNPCFOOTPRINTDATA_OFFSET UNITYSDK_OFFSET(0x1B07F990)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_TRYBINDFOOTPRINTSPAWNER_OFFSET UNITYSDK_OFFSET(0x1B082CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_TRYBINDWHEELPRINTSPAWNER_OFFSET UNITYSDK_OFFSET(0x1B0822D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_TRYSPAWNCOMMONFOOTPRINT_OFFSET UNITYSDK_OFFSET(0x1B07FE50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_TRYSPAWNMAINCHARACTERFOOTPRINT_OFFSET UNITYSDK_OFFSET(0x1B07FD30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B083BF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B07DC60)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FootPrintManager_TypeDefinitionIndex = 30493;

	class FootPrintManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sampler_TrySpawnMainCharacterFootPrint()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(FootPrintManager_TypeDefinitionIndex)->GetStaticField(0x22C80);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sampler_LateUpdateFootPrintDrawData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(FootPrintManager_TypeDefinitionIndex)->GetStaticField(0x22C88);
		}
		static ::UnityEngine::Rendering::Universal::Internal::FootPrintManager** StaticGet__instance()
		{
			return (::UnityEngine::Rendering::Universal::Internal::FootPrintManager**)Il2CppClass::FromTypeDefinitionIndex(FootPrintManager_TypeDefinitionIndex)->GetStaticField(0x22C90);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sampler_TrySpawnNPCFootPrint()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(FootPrintManager_TypeDefinitionIndex)->GetStaticField(0x22C98);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sampler_TryBindNPCFootPrint()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(FootPrintManager_TypeDefinitionIndex)->GetStaticField(0x22CA0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sampler_UpdateFootPrintDrawData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(FootPrintManager_TypeDefinitionIndex)->GetStaticField(0x22CA8);
		}
		static ::System::Int32* StaticGet__FootParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FootPrintManager_TypeDefinitionIndex)->GetStaticField(0x57B0);
		}
		static ::System::Boolean* StaticGet_enableNPCFootPrint()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FootPrintManager_TypeDefinitionIndex)->GetStaticField(0x57B4);
		}
		static ::System::Boolean* StaticGet_s_EnableDebugLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FootPrintManager_TypeDefinitionIndex)->GetStaticField(0x57B5);
		}
		// static const ::System::Int32 MAX_NPC_FOOT_PRINT_NUM = 0x64; // 0x0
		// static const ::System::Int32 kMaxFootPrintBatchCountForNPC = 0xC8; // 0x0
		::Il2CppArray<::UnityEngine::Vector4>* m_FootParamsForNPC; // 0x10
		::Il2CppArray<::UnityEngine::Matrix4x4>* m_LocalToWorldMatrixArrayForNPC; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::Rendering::Universal::Internal::FootPrintSpawner*>* cachedWheelPrintData; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::FootPrintSpawner*>* FootPrintSpawners; // 0x28
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintArray*>* cachedFootPrintData; // 0x30
		::Il2CppArray<::UnityEngine::Rendering::Universal::Internal::FootPrintManager_CachedFootPrintRenderItem>* m_CandidateNPCFootPrintCpuDates; // 0x38
		::System::Collections::Generic::Queue_1<::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintRenderItem>* m_NPCFootPrintCpuDates; // 0x40
		::Il2CppArray<::UnityEngine::MaterialPropertyBlock*>* m_MaterialPropertyBlockForNPC; // 0x48
		::System::Int32 m_CandidateNPCFootPrintCpuDatesCount; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::Internal::FootPrintManager* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::FootPrintManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void ClearCachedData(::System::Boolean clearAll)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_CLEARCACHEDDATA_OFFSET))(this, clearAll);
		}

		::System::Void ClearTargetHolder(::UnityEngine::GameObject* holder)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_CLEARTARGETHOLDER_OFFSET))(this, holder);
		}

		::System::Void AddToNpcFootPrintQueue(::UnityEngine::Vector3 footPosition, ::UnityEngine::Quaternion rotation, ::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintSpawnerType type, ::System::Boolean needMirror)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintSpawnerType, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_ADDTONPCFOOTPRINTQUEUE_OFFSET))(this, footPosition, rotation, type, needMirror);
		}

		::System::Void TickNpcFootPrintData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_TICKNPCFOOTPRINTDATA_OFFSET))(this);
		}

		::System::Void TrySpawnMainCharacterFootPrint(::UnityEngine::GameObject* entityGO, ::System::Boolean isLeft, ::System::Boolean isInZone)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_TRYSPAWNMAINCHARACTERFOOTPRINT_OFFSET))(this, entityGO, isLeft, isInZone);
		}

		::System::Void DumpFootPrintPassMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_DUMPFOOTPRINTPASSMASK_OFFSET))(this);
		}

		::System::Boolean NeedDrawFootPrintPass(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_NEEDDRAWFOOTPRINTPASS_OFFSET))(this, cameraData, globalConfig);
		}

		::System::Void DrawFootPrint(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 footPrintRTScaleOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_DRAWFOOTPRINT_OFFSET))(this, cmd, footPrintRTScaleOffset);
		}

		::System::Void TryBindWheelPrintSpawner(::UnityEngine::GameObject* entityGO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_TRYBINDWHEELPRINTSPAWNER_OFFSET))(this, entityGO);
		}

		::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintArray* TryBindFootPrintSpawner(::UnityEngine::GameObject* entityGO)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintArray*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_TRYBINDFOOTPRINTSPAWNER_OFFSET))(this, entityGO);
		}

		::System::Void TrySpawnCommonFootPrint(::UnityEngine::GameObject* entityGO, ::System::Boolean isLeft, ::System::Boolean isInZone)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_TRYSPAWNCOMMONFOOTPRINT_OFFSET))(this, entityGO, isLeft, isInZone);
		}
	};
}
