#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WaterInteractiveObjectType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }
namespace UnityEngine::Rendering::Universal { class WaterInteractionManager_WaterInteractiveRenderItem; }
namespace UnityEngine::Rendering::Universal { class WaterInteractionVolume; }
namespace UnityEngine::Rendering::Universal { class WaterInteractiveObject; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_BOUNDSINTERSECTSVOLUME_OFFSET UNITYSDK_OFFSET(0x1CF15C30)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_CHECKANDCLEARNEEDRESETWATERHEIGHTMAPFLAG_OFFSET UNITYSDK_OFFSET(0x1CF16990)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_CHECKANDCLEARSTATICBOUNDARYDIRTYFLAG_OFFSET UNITYSDK_OFFSET(0x1CF169E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1CEFFD40)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETACTIVEVOLUMEWATERHEIGHT_OFFSET UNITYSDK_OFFSET(0x1CF14D50)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETACTIVEVOLUME_OFFSET UNITYSDK_OFFSET(0x1CF14D10)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHORTHOFAR_OFFSET UNITYSDK_OFFSET(0x1CF17A20)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHORTHONEAR_OFFSET UNITYSDK_OFFSET(0x1CF179D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHPROJMATRIX_OFFSET UNITYSDK_OFFSET(0x1CF17A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1CF17AF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHVIEWCENTER_OFFSET UNITYSDK_OFFSET(0x1CF17960)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHVIEWMATRIX_OFFSET UNITYSDK_OFFSET(0x1CF170D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDYNAMICOBJECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1CF17010)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDYNAMICOBJECTS_OFFSET UNITYSDK_OFFSET(0x1CF15060)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETINTERACTIONRENDERCENTER_OFFSET UNITYSDK_OFFSET(0x1CF16690)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETINTERACTIONRENDERMAX_OFFSET UNITYSDK_OFFSET(0x1CF13260)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETINTERACTIONRENDERMIN_OFFSET UNITYSDK_OFFSET(0x1CF12FB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETINTERACTIONRENDERRANGE_OFFSET UNITYSDK_OFFSET(0x1CF16750)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETINTERACTIONRENDERSIZE_OFFSET UNITYSDK_OFFSET(0x1CF134E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETRENDERCENTEROFFSET_OFFSET UNITYSDK_OFFSET(0x1CF16630)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETSTATICBOUNDARYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CF17070)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETSTATICBOUNDARYOBJECTS_OFFSET UNITYSDK_OFFSET(0x1CF150A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETUPDATERATE_OFFSET UNITYSDK_OFFSET(0x1CF14ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETWATERINTERACTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x1CF168E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_CLEAROBJECTDEPTHMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF154C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_DAMPING_OFFSET UNITYSDK_OFFSET(0x1CF158A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CEFFC50)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_INTERACTHEIGHTNORMALMULTI_OFFSET UNITYSDK_OFFSET(0x1CF15C10)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_INTERACTHEIGHTVERTEXMULTI_OFFSET UNITYSDK_OFFSET(0x1CF15BF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_INTERACTIONHEIGHTMINMAX_OFFSET UNITYSDK_OFFSET(0x1CF15B70)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_INTERACTIONPARAMS_OFFSET UNITYSDK_OFFSET(0x1CF15A40)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_PROPAGATSPEED_OFFSET UNITYSDK_OFFSET(0x1CF15970)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_WATERINTERACTIONOBJECTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF150E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_WATERINTERACTIONON_OFFSET UNITYSDK_OFFSET(0x1CF16150)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_HASVIEWCENTERMOVED_OFFSET UNITYSDK_OFFSET(0x1CF13920)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_ISRENDERERNEEDINTERACTION_OFFSET UNITYSDK_OFFSET(0x1CF16590)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_MARKSTATICBOUNDARYDIRTY_OFFSET UNITYSDK_OFFSET(0x1CF138D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_NEEDDRAWWATERINTERSECTIONPASS_OFFSET UNITYSDK_OFFSET(0x1CF15EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_POSININVOLUME_OFFSET UNITYSDK_OFFSET(0x1CF15D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_REGISTERINTERACTIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1CF16A90)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_REGISTERVOLUME_OFFSET UNITYSDK_OFFSET(0x1CF142F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x1CF14BB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_SETACTIVEVOLUME_OFFSET UNITYSDK_OFFSET(0x1CF14240)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_SETDEPTHRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1CF14130)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_SETDEPTHVIEWCENTER_OFFSET UNITYSDK_OFFSET(0x1CF13E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_SETINTERACTIONRENDERCENTER_OFFSET UNITYSDK_OFFSET(0x1CF166F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UNREGISTERINTERACTIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1CF16DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UNREGISTERVOLUME_OFFSET UNITYSDK_OFFSET(0x1CF144A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATEACTIVEVOLUME_OFFSET UNITYSDK_OFFSET(0x1CF14660)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATEDEPTHVIEWCENTER_OFFSET UNITYSDK_OFFSET(0x1CF13970)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATEDEPTHVIEWMATRIXIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1CF17160)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATEINTERACTIONRENDERCENTER_OFFSET UNITYSDK_OFFSET(0x1CF13660)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATEINTERACTIONRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1CF13F20)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CF16A30)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF17B30)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF12CC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterInteractionManager_TypeDefinitionIndex = 27575;

	class WaterInteractionManager : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterPropagatSpeed()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterInteractionManager_TypeDefinitionIndex)->GetStaticField(0x22DE0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterDamping()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterInteractionManager_TypeDefinitionIndex)->GetStaticField(0x22DE8);
		}
		static ::UnityEngine::Rendering::Universal::WaterInteractionManager** StaticGet_m_Instance()
		{
			return (::UnityEngine::Rendering::Universal::WaterInteractionManager**)Il2CppClass::FromTypeDefinitionIndex(WaterInteractionManager_TypeDefinitionIndex)->GetStaticField(0x22DF0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterInteractionIntensity()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterInteractionManager_TypeDefinitionIndex)->GetStaticField(0x22DF8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterInteractHeightMultiplier()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterInteractionManager_TypeDefinitionIndex)->GetStaticField(0x22E00);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_WaterInteractionMapMaxSize()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterInteractionManager_TypeDefinitionIndex)->GetStaticField(0x22E08);
		}
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::WaterInteractiveObject*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>*>* m_StaticBoundaryMap; // 0x10
		::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::WaterInteractionVolume*>* m_RegisteredVolumes; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::WaterInteractiveObject*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>*>* m_DynamicObjectsMap; // 0x20
		::UnityEngine::Rendering::Universal::WaterInteractionVolume* m_ActiveVolume; // 0x28
		::UnityEngine::Material* m_WaterInteractionObjectMaterialInstance; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>* m_RegisteredStaticRenderers; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>* m_RegisteredDynamicRenderers; // 0x40
		::UnityEngine::Material* m_ClearObjectDepthMaterialInstance; // 0x48
		::System::Single m_DepthOrthoFar; // 0x50
		::System::Single m_DepthOrthoNear; // 0x54
		::UnityEngine::Vector3 m_InteractionRenderCenter; // 0x58
		::System::Int32 m_MaxStaticBoundaries; // 0x64
		::UnityEngine::Vector2Int m_DepthResolution; // 0x68
		::UnityEngine::Vector3 m_RenderCenterOffset; // 0x70
		::UnityEngine::Vector3 m_DepthViewCenter; // 0x7C
		::System::Boolean m_DepthViewMatrixDirty; // 0x88
		::System::Boolean m_NeedResetWaterHeightMap; // 0x89
		::System::Boolean m_HasViewCenterMoved; // 0x8A
		::System::Boolean m_StaticBoundaryDirty; // 0x8B
		::System::Int32 m_MaxDynamicObjects; // 0x8C
		::System::Single m_InteractionRenderCenterUpdateTimeDelta; // 0x90
		::System::Single m_InteractionRenderCenterDistanceMoved; // 0x94
		::UnityEngine::Matrix4x4 m_DepthViewMatrix; // 0x98
		::UnityEngine::Vector3 m_PrevInteractionRenderCenter; // 0xD8
		::UnityEngine::Matrix4x4 m_DepthProjMatrix; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::WaterInteractionManager* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::WaterInteractionManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_INSTANCE_OFFSET))();
		}

		::UnityEngine::Vector3 GetInteractionRenderMin()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETINTERACTIONRENDERMIN_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetInteractionRenderMax()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETINTERACTIONRENDERMAX_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetInteractionRenderSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETINTERACTIONRENDERSIZE_OFFSET))(this);
		}

		::System::Void UpdateInteractionRenderCenter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATEINTERACTIONRENDERCENTER_OFFSET))(this);
		}

		::System::Boolean HasViewCenterMoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_HASVIEWCENTERMOVED_OFFSET))(this);
		}

		::System::Void UpdateDepthViewCenter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATEDEPTHVIEWCENTER_OFFSET))(this);
		}

		::System::Void UpdateInteractionResolution()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATEINTERACTIONRESOLUTION_OFFSET))(this);
		}

		::System::Void SetActiveVolume(::UnityEngine::Rendering::Universal::WaterInteractionVolume* volume)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WaterInteractionVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_SETACTIVEVOLUME_OFFSET))(this, volume);
		}

		::System::Void RegisterVolume(::UnityEngine::Rendering::Universal::WaterInteractionVolume* volume)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WaterInteractionVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_REGISTERVOLUME_OFFSET))(this, volume);
		}

		::System::Void UnregisterVolume(::UnityEngine::Rendering::Universal::WaterInteractionVolume* volume)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WaterInteractionVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UNREGISTERVOLUME_OFFSET))(this, volume);
		}

		::System::Boolean UpdateActiveVolume(::UnityEngine::Vector3 playerPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATEACTIVEVOLUME_OFFSET))(this, playerPosition);
		}

		::UnityEngine::Rendering::Universal::WaterInteractionVolume* GetActiveVolume()
		{
			return ((::UnityEngine::Rendering::Universal::WaterInteractionVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETACTIVEVOLUME_OFFSET))(this);
		}

		::System::Single GetActiveVolumeWaterHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETACTIVEVOLUMEWATERHEIGHT_OFFSET))(this);
		}

		::System::Single GetUpdateRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETUPDATERATE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::WaterInteractiveObject*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>*>* GetDynamicObjects()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::WaterInteractiveObject*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDYNAMICOBJECTS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::WaterInteractiveObject*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>*>* GetStaticBoundaryObjects()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::WaterInteractiveObject*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETSTATICBOUNDARYOBJECTS_OFFSET))(this);
		}

		::UnityEngine::Material* get_WaterInteractionObjectMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_WATERINTERACTIONOBJECTMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Material* get_ClearObjectDepthMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_CLEAROBJECTDEPTHMATERIAL_OFFSET))(this);
		}

		::System::Single get_Damping()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_DAMPING_OFFSET))(this);
		}

		::System::Single get_PropagatSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_PROPAGATSPEED_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_InteractionParams()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_INTERACTIONPARAMS_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_InteractionHeightMinMax()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_INTERACTIONHEIGHTMINMAX_OFFSET))(this);
		}

		::System::Single get_InteractHeightVertexMulti()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_INTERACTHEIGHTVERTEXMULTI_OFFSET))(this);
		}

		::System::Single get_InteractHeightNormalMulti()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_INTERACTHEIGHTNORMALMULTI_OFFSET))(this);
		}

		::System::Boolean BoundsIntersectsVolume(::UnityEngine::Bounds bound)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_BOUNDSINTERSECTSVOLUME_OFFSET))(this, bound);
		}

		::System::Boolean PosInInVolume(::UnityEngine::Vector3 pos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_POSININVOLUME_OFFSET))(this, pos);
		}

		::System::Boolean NeedDrawWaterIntersectionPass(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_NEEDDRAWWATERINTERSECTIONPASS_OFFSET))(this, cameraData, globalConfig);
		}

		::System::Boolean IsRendererNeedInteraction(::UnityEngine::Bounds bounds)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_ISRENDERERNEEDINTERACTION_OFFSET))(this, bounds);
		}

		::System::Boolean get_WaterInteractionOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_WATERINTERACTIONON_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetRenderCenterOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETRENDERCENTEROFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetInteractionRenderCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETINTERACTIONRENDERCENTER_OFFSET))(this);
		}

		::System::Void SetInteractionRenderCenter(::UnityEngine::Vector3 center)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_SETINTERACTIONRENDERCENTER_OFFSET))(this, center);
		}

		::UnityEngine::Vector2 GetInteractionRenderRange()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETINTERACTIONRENDERRANGE_OFFSET))(this);
		}

		::System::Single GetWaterInteractionIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETWATERINTERACTIONINTENSITY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_RESET_OFFSET))(this);
		}

		::System::Boolean CheckAndClearNeedResetWaterHeightMapFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_CHECKANDCLEARNEEDRESETWATERHEIGHTMAPFLAG_OFFSET))(this);
		}

		::System::Boolean CheckAndClearStaticBoundaryDirtyFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_CHECKANDCLEARSTATICBOUNDARYDIRTYFLAG_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void MarkStaticBoundaryDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_MARKSTATICBOUNDARYDIRTY_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WaterInteractiveObjectType RegisterInteractiveObject(::UnityEngine::Rendering::Universal::WaterInteractiveObject* obj, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>* renderers, ::UnityEngine::Rendering::Universal::WaterInteractiveObjectType objectType)
		{
			return ((::UnityEngine::Rendering::Universal::WaterInteractiveObjectType(*)(::PVOID, ::UnityEngine::Rendering::Universal::WaterInteractiveObject*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>*, ::UnityEngine::Rendering::Universal::WaterInteractiveObjectType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_REGISTERINTERACTIVEOBJECT_OFFSET))(this, obj, renderers, objectType);
		}

		::System::Void UnregisterInteractiveObject(::UnityEngine::Rendering::Universal::WaterInteractiveObject* obj, ::UnityEngine::Rendering::Universal::WaterInteractiveObjectType objectType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WaterInteractiveObject*, ::UnityEngine::Rendering::Universal::WaterInteractiveObjectType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UNREGISTERINTERACTIVEOBJECT_OFFSET))(this, obj, objectType);
		}

		::System::Int32 GetDynamicObjectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDYNAMICOBJECTCOUNT_OFFSET))(this);
		}

		::System::Int32 GetStaticBoundaryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETSTATICBOUNDARYCOUNT_OFFSET))(this);
		}

		::System::Void SetDepthViewCenter(::UnityEngine::Vector3 center)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_SETDEPTHVIEWCENTER_OFFSET))(this, center);
		}

		::System::Void SetDepthResolution(::UnityEngine::Vector2Int resolution)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_SETDEPTHRESOLUTION_OFFSET))(this, resolution);
		}

		::UnityEngine::Matrix4x4 GetDepthViewMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHVIEWMATRIX_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetDepthViewCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHVIEWCENTER_OFFSET))(this);
		}

		::System::Single GetDepthOrthoNear()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHORTHONEAR_OFFSET))(this);
		}

		::System::Single GetDepthOrthoFar()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHORTHOFAR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetDepthProjMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHPROJMATRIX_OFFSET))(this);
		}

		::UnityEngine::Vector2Int GetDepthResolution()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHRESOLUTION_OFFSET))(this);
		}

		::System::Void UpdateDepthViewMatrixIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATEDEPTHVIEWMATRIXIFNEEDED_OFFSET))(this);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_CLEANUP_OFFSET))(this);
		}
	};
}
