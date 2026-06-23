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
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }
namespace UnityEngine::Rendering::Universal { class WaterInteractionManager_WaterInteractiveRenderItem; }
namespace UnityEngine::Rendering::Universal { class WaterInteractionVolume; }
namespace UnityEngine::Rendering::Universal { class WaterInteractiveObject; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_BOUNDSINTERSECTSVOLUME_OFFSET UNITYSDK_OFFSET(0x1BDDA390)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_CHECKANDCLEARNEEDRESETWATERHEIGHTMAPFLAG_OFFSET UNITYSDK_OFFSET(0x1BDDB220)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_CHECKANDCLEARSTATICBOUNDARYDIRTYFLAG_OFFSET UNITYSDK_OFFSET(0x1BDDB270)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1BDC42D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETACTIVEVOLUMEWATERHEIGHT_OFFSET UNITYSDK_OFFSET(0x1BDD94D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETACTIVEVOLUME_OFFSET UNITYSDK_OFFSET(0x1BDD9490)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHORTHOFAR_OFFSET UNITYSDK_OFFSET(0x1BDDC280)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHORTHONEAR_OFFSET UNITYSDK_OFFSET(0x1BDDC230)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHPROJMATRIX_OFFSET UNITYSDK_OFFSET(0x1BDDC2D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1BDDC350)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHVIEWCENTER_OFFSET UNITYSDK_OFFSET(0x1BDDC1C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDEPTHVIEWMATRIX_OFFSET UNITYSDK_OFFSET(0x1BDDB960)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDYNAMICOBJECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDDB8A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETDYNAMICOBJECTS_OFFSET UNITYSDK_OFFSET(0x1BDD97E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETINTERACTIONRENDERCENTER_OFFSET UNITYSDK_OFFSET(0x1BDDAD90)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETINTERACTIONRENDERMAX_OFFSET UNITYSDK_OFFSET(0x1BDD83D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETINTERACTIONRENDERMIN_OFFSET UNITYSDK_OFFSET(0x1BDD8130)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETINTERACTIONRENDERRANGE_OFFSET UNITYSDK_OFFSET(0x1BDDAE70)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETINTERACTIONRENDERSIZE_OFFSET UNITYSDK_OFFSET(0x1BDD8650)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETRENDERCENTEROFFSET_OFFSET UNITYSDK_OFFSET(0x1BDDAD30)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETSTATICBOUNDARYCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDDB900)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETSTATICBOUNDARYOBJECTS_OFFSET UNITYSDK_OFFSET(0x1BDD9820)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETUPDATERATE_OFFSET UNITYSDK_OFFSET(0x1BDD9650)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GETWATERINTERACTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x1BDDB000)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_CLEAROBJECTDEPTHMATERIAL_OFFSET UNITYSDK_OFFSET(0x1BDD9C30)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_DAMPING_OFFSET UNITYSDK_OFFSET(0x1BDDA000)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BDC41E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_INTERACTHEIGHTNORMALMULTI_OFFSET UNITYSDK_OFFSET(0x1BDDA370)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_INTERACTHEIGHTVERTEXMULTI_OFFSET UNITYSDK_OFFSET(0x1BDDA350)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_INTERACTIONHEIGHTMINMAX_OFFSET UNITYSDK_OFFSET(0x1BDDA2D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_INTERACTIONPARAMS_OFFSET UNITYSDK_OFFSET(0x1BDDA1A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_PROPAGATSPEED_OFFSET UNITYSDK_OFFSET(0x1BDDA0D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_WATERINTERACTIONOBJECTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1BDD9860)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_GET_WATERINTERACTIONON_OFFSET UNITYSDK_OFFSET(0x1BDDA850)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_HASVIEWCENTERMOVED_OFFSET UNITYSDK_OFFSET(0x1BDD8AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_ISRENDERERNEEDINTERACTION_OFFSET UNITYSDK_OFFSET(0x1BDDAC90)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_MARKSTATICBOUNDARYDIRTY_OFFSET UNITYSDK_OFFSET(0x1BDD8A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_NEEDDRAWWATERINTERSECTIONPASS_OFFSET UNITYSDK_OFFSET(0x1BDDA640)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_POSININVOLUME_OFFSET UNITYSDK_OFFSET(0x1BDDA4F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_REGISTERINTERACTIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BDDB320)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x1BDDB0B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_SETACTIVEVOLUME_OFFSET UNITYSDK_OFFSET(0x1BDD9440)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_SETDEPTHRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1BDD9320)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_SETDEPTHVIEWCENTER_OFFSET UNITYSDK_OFFSET(0x1BDD9050)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_SETINTERACTIONRENDERCENTER_OFFSET UNITYSDK_OFFSET(0x1BDDAE00)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UNREGISTERINTERACTIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BDDB680)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATEDEPTHVIEWCENTER_OFFSET UNITYSDK_OFFSET(0x1BDD8B10)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATEDEPTHVIEWMATRIXIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1BDDB9E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATEINTERACTIONRENDERCENTER_OFFSET UNITYSDK_OFFSET(0x1BDD87D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATEINTERACTIONRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1BDD9110)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BDDB2C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDDC3A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD7ED0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterInteractionManager_TypeDefinitionIndex = 26338;

	class WaterInteractionManager : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterPropagatSpeed()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterInteractionManager_TypeDefinitionIndex)->GetStaticField(0x215C0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_WaterInteractionMapMaxSize()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterInteractionManager_TypeDefinitionIndex)->GetStaticField(0x215C8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterDamping()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterInteractionManager_TypeDefinitionIndex)->GetStaticField(0x215D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterInteractHeightMultiplier()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterInteractionManager_TypeDefinitionIndex)->GetStaticField(0x215D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterInteractionIntensity()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterInteractionManager_TypeDefinitionIndex)->GetStaticField(0x215E0);
		}
		static ::UnityEngine::Rendering::Universal::WaterInteractionManager** StaticGet_m_Instance()
		{
			return (::UnityEngine::Rendering::Universal::WaterInteractionManager**)Il2CppClass::FromTypeDefinitionIndex(WaterInteractionManager_TypeDefinitionIndex)->GetStaticField(0x215E8);
		}
		::UnityEngine::Material* m_ClearObjectDepthMaterialInstance; // 0x10
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::WaterInteractiveObject*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>*>* m_StaticBoundaryMap; // 0x18
		::UnityEngine::Rendering::Universal::WaterInteractionVolume* m_ActiveVolume; // 0x20
		::UnityEngine::Material* m_WaterInteractionObjectMaterialInstance; // 0x28
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::WaterInteractiveObject*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>*>* m_DynamicObjectsMap; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>* m_RegisteredStaticRenderers; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>* m_RegisteredDynamicRenderers; // 0x40
		::UnityEngine::Vector3 m_RenderCenterOffset; // 0x48
		::UnityEngine::Matrix4x4 m_DepthProjMatrix; // 0x54
		::UnityEngine::Vector3 m_InteractionRenderCenter; // 0x94
		::UnityEngine::Vector3 m_DepthViewCenter; // 0xA0
		::System::Single m_DepthOrthoFar; // 0xAC
		::UnityEngine::Vector3 m_PrevInteractionRenderCenter; // 0xB0
		::System::Boolean m_StaticBoundaryDirty; // 0xBC
		::System::Boolean m_DepthViewMatrixDirty; // 0xBD
		::System::Boolean m_NeedResetWaterHeightMap; // 0xBE
		::System::Boolean m_HasViewCenterMoved; // 0xBF
		::System::Int32 m_MaxDynamicObjects; // 0xC0
		::System::Single m_InteractionRenderCenterUpdateTimeDelta; // 0xC4
		::UnityEngine::Vector2Int m_DepthResolution; // 0xC8
		::System::Single m_DepthOrthoNear; // 0xD0
		::UnityEngine::Matrix4x4 m_DepthViewMatrix; // 0xD4
		::System::Single m_InteractionRenderCenterDistanceMoved; // 0x114
		::System::Int32 m_MaxStaticBoundaries; // 0x118

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
