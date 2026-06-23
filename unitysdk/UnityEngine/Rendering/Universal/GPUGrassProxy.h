#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rendering/ShadowDrawingSettings.h"
#include "unitysdk/UnityEngine/Rendering/Universal/CachedGrassRenderItemData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GPUGrassInstanceData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GPUGrassProxy_GPUGrassBillboardData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GPUGrassProxy_GroupBaseData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GpuGrassShadowType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GrassType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class GPUGrassBillboardBakeAsset; }
namespace UnityEngine::Rendering::Universal { class GPUGrassBillboardTarget; }
namespace UnityEngine::Rendering::Universal { class GPUGrassProxy_GroupData; }
namespace UnityEngine::Rendering::Universal { class GPUGrassSettings; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_APPLYBILLBOARDBAKETARGETSTOSCATTERDATA_OFFSET UNITYSDK_OFFSET(0x1B8776C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_APPLYBILLBOARDORIGINALMATERIALANDSCALE_OFFSET UNITYSDK_OFFSET(0x1B882990)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_APPLYBILLBOARDPLACEHOLDERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B882ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_APPLYBILLBOARDSOURCERENDERERMATERIALSTATE_OFFSET UNITYSDK_OFFSET(0x1B882690)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_AREBILLBOARDMATERIALARRAYSEQUAL_OFFSET UNITYSDK_OFFSET(0x1B875940)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_AREBILLBOARDMATERIALSALLPLACEHOLDER_OFFSET UNITYSDK_OFFSET(0x1B875640)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_BILLBOARDBINDINGKEYSMATCH_OFFSET UNITYSDK_OFFSET(0x1B8773A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_BINDBILLBOARDPOSITIONBUFFERTOMATERIALS_OFFSET UNITYSDK_OFFSET(0x1B87A630)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_BUILDBILLBOARDGROUPINSTANCELOOKUPCACHES_OFFSET UNITYSDK_OFFSET(0x1B87D820)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_BUILDBILLBOARDPROGRESSIVEGROUPORDER_OFFSET UNITYSDK_OFFSET(0x1B8847E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_BUILDBILLBOARDVISIBLEGROUPORDERBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B87C810)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CACHEBILLBOARDTARGETORIGINALMATERIALSIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1B875390)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CANUSEBOUNDSOURCEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1B87BC40)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CHECKBILLBOARDVISIBLEBYBOUNDSOURCEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1B87BDE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CHECKBILLBOARDVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B87A9C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CHECKBUFFERVALID_OFFSET UNITYSDK_OFFSET(0x1B87E7A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CHECKINDIRECTDRAWDATA_OFFSET UNITYSDK_OFFSET(0x1B88D500)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CHECKISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B88A1F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CLEARRUNTIMEBILLBOARDTARGETREGISTRATIONS_OFFSET UNITYSDK_OFFSET(0x1B873DD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_COLLECTALLOWEDBINDINGKEYSFORBAKEASSET_OFFSET UNITYSDK_OFFSET(0x1B8760E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_COMPUTEBILLBOARDBAKEGROUPCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8772D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_COMPUTEBILLBOARDLODTARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x1B87E880)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWBILLBOARDGRASSFORSOFTEDGE_OFFSET UNITYSDK_OFFSET(0x1B881D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWBILLBOARDGRASSSHADOW_OFFSET UNITYSDK_OFFSET(0x1B881CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWBILLBOARDGRASS_OFFSET UNITYSDK_OFFSET(0x1B87E9D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWBILLBOARDINSTANCESBYMATERIALANDLOD_OFFSET UNITYSDK_OFFSET(0x1B87F170)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWGPUGRASSFORSOFTEDGE_OFFSET UNITYSDK_OFFSET(0x1B88D240)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWGPUGRASSSHADOW_OFFSET UNITYSDK_OFFSET(0x1B88C4A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWGPUGRASS_OFFSET UNITYSDK_OFFSET(0x1B88CF50)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWMESHWITHINDIRECTDRAW_OFFSET UNITYSDK_OFFSET(0x1B88DD50)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWWITHBATCH_OFFSET UNITYSDK_OFFSET(0x1B88C6A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ENSUREBILLBOARDBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B885AA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ENSUREBILLBOARDDISTANCEPLACEHOLDERMATERIALRESOLVED_OFFSET UNITYSDK_OFFSET(0x1B870F80)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ENSUREBILLBOARDLOD1PRECOMPUTEDINDICES_OFFSET UNITYSDK_OFFSET(0x1B884740)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ENSUREBILLBOARDLOD2PRECOMPUTEDINDICES_OFFSET UNITYSDK_OFFSET(0x1B884790)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ENSUREBILLBOARDPROGRESSIVELODDATA_OFFSET UNITYSDK_OFFSET(0x1B87DD30)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ENSUREBILLBOARDQUADMESH_OFFSET UNITYSDK_OFFSET(0x1B887040)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ENSUREBILLBOARDSOURCERENDERERORIGINALSTATECACHED_OFFSET UNITYSDK_OFFSET(0x1B8834F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_EXTRACTUNIFORMSCALEFROMMATRIX_OFFSET UNITYSDK_OFFSET(0x1B8846B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDBAKEASSETMIGRATIONWARNING_OFFSET UNITYSDK_OFFSET(0x1B870E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDBATCHCOUNTPERDRAW_OFFSET UNITYSDK_OFFSET(0x1B880320)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDCOREBYTESPERINSTANCEESTIMATE_OFFSET UNITYSDK_OFFSET(0x1B884170)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDCULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B87BB60)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDDISTANCEPLACEHOLDERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B882E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDDRAWMATERIALBYINDEX_OFFSET UNITYSDK_OFFSET(0x1B87F0E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDDRAWMESH_OFFSET UNITYSDK_OFFSET(0x1B87B410)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDGROUPSORTCENTERWS_OFFSET UNITYSDK_OFFSET(0x1B883ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDINSTANCEDATAFORDRAW_1_OFFSET UNITYSDK_OFFSET(0x1B881260)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDINSTANCEDATAFORDRAW_OFFSET UNITYSDK_OFFSET(0x1B884330)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDLODCOUNTRATIO_OFFSET UNITYSDK_OFFSET(0x1B87E800)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1B87EF70)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDMATERIALINDEXFORINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B880400)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDMATERIALSWITCHSTAGEFORGROUP_OFFSET UNITYSDK_OFFSET(0x1B882020)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDMAXDRAWCOUNT_OFFSET UNITYSDK_OFFSET(0x1B87D740)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDRUNTIMEINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x1B87D670)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDSAFESLICECOUNT_OFFSET UNITYSDK_OFFSET(0x1B87E720)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDSOURCEVISIBLESCALEFORGROUP_OFFSET UNITYSDK_OFFSET(0x1B8820B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETGROUPBASEDATA_OFFSET UNITYSDK_OFFSET(0x1B887640)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B889A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_HASANYBILLBOARDDRAWMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B87B580)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_HASBILLBOARDBAKEASSETMIGRATIONWARNING_OFFSET UNITYSDK_OFFSET(0x1B870E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_HASBILLBOARDBAKEASSETWORKFLOWTARGETINSCENE_OFFSET UNITYSDK_OFFSET(0x1B876BB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_HASBILLBOARDINSTANCESFORGROUP_OFFSET UNITYSDK_OFFSET(0x1B882130)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_INITBILLBOARDGRASS_OFFSET UNITYSDK_OFFSET(0x1B870F00)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ISBILLBOARDBAKEASSETVALID_OFFSET UNITYSDK_OFFSET(0x1B875F60)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ISBILLBOARDMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1B883E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ISBILLBOARDPLACEHOLDERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B875730)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ISBILLBOARDSOURCERENDERERVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B881D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_MARKBILLBOARDDIRTYANDREBUILD_OFFSET UNITYSDK_OFFSET(0x1B871350)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_NEEDREBUILDBILLBOARDDATA_OFFSET UNITYSDK_OFFSET(0x1B8851F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_NORMALIZEBILLBOARDBINDINGKEY_OFFSET UNITYSDK_OFFSET(0x1B877490)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ONDISABLEMESHGRASS_OFFSET UNITYSDK_OFFSET(0x1B88ADB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B88AD00)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ONENABLEMESHGRASS_OFFSET UNITYSDK_OFFSET(0x1B889B40)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B889A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ONPROXYDISABLEFORBILLBOARDTARGETBINDING_OFFSET UNITYSDK_OFFSET(0x1B873090)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ONPROXYENABLEFORBILLBOARDTARGETBINDING_OFFSET UNITYSDK_OFFSET(0x1B872950)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREBILLBOARDDRAWDATA_OFFSET UNITYSDK_OFFSET(0x1B87CAF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREGPUDRAWDATA_OFFSET UNITYSDK_OFFSET(0x1B88BA30)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREGROUPDATAFORCUSTOMGRASS_OFFSET UNITYSDK_OFFSET(0x1B8890E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREGROUPDATAFORMASKGRASS_OFFSET UNITYSDK_OFFSET(0x1B888C30)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1B887820)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REBUILDBILLBOARDDATABYBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B879C00)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REBUILDBILLBOARDDATAIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1B8713A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REFRESHBILLBOARDBOUNDSFROMSCATTER_OFFSET UNITYSDK_OFFSET(0x1B886A50)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REFRESHBILLBOARDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B885290)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REFRESHBILLBOARDGROUPBOUNDSFROMINSTANCES_OFFSET UNITYSDK_OFFSET(0x1B886150)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REFRESHBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1B8881F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REFRESHRUNTIMEBILLBOARDTARGETREGISTRATIONS_OFFSET UNITYSDK_OFFSET(0x1B872D30)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REGISTERBILLBOARDTARGETRUNTIME_OFFSET UNITYSDK_OFFSET(0x1B873F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REGISTERRUNTIMEBILLBOARDTARGET_OFFSET UNITYSDK_OFFSET(0x1B874340)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RELEASEBILLBOARDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1B87A2B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESETBILLBOARDTRANSIENTINSTANCEDATA_OFFSET UNITYSDK_OFFSET(0x1B87A560)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESETGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1B888A00)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESETTEMPGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1B889590)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESOLVEBILLBOARDBOUNDSOURCERENDERER_OFFSET UNITYSDK_OFFSET(0x1B879EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESOLVEBILLBOARDGLOBALMATERIALINDEX_OFFSET UNITYSDK_OFFSET(0x1B877070)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESOLVEBILLBOARDTARGETBYSOURCERENDERER_OFFSET UNITYSDK_OFFSET(0x1B875A40)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESTOREALLBILLBOARDSOURCERENDERERMATERIALS_OFFSET UNITYSDK_OFFSET(0x1B8733B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESTOREALLBILLBOARDTARGETORIGINALMATERIALSINSCENE_OFFSET UNITYSDK_OFFSET(0x1B873930)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESTOREBILLBOARDDATAFROMBAKEASSET_OFFSET UNITYSDK_OFFSET(0x1B879B70)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESTOREBILLBOARDSOURCERENDERERTOORIGINALSTATE_OFFSET UNITYSDK_OFFSET(0x1B882270)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B889A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_SHOULDKEEPBILLBOARDLODSAMPLE_OFFSET UNITYSDK_OFFSET(0x1B880AA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_SHOULDUSEBILLBOARDORIGINALMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B8821F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_SYNCBILLBOARDSOURCERENDERERBINDING_OFFSET UNITYSDK_OFFSET(0x1B875120)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_SYNCCACHEDDATARENDERDATATOINSTANCEDATA_OFFSET UNITYSDK_OFFSET(0x1B889BC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_TRANSFORMDIRECTIONBYMATRIX_OFFSET UNITYSDK_OFFSET(0x1B884250)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_TRYCOLLECTBILLBOARDBAKETARGETSFROMSCENE_OFFSET UNITYSDK_OFFSET(0x1B8766F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_TRYFILLBILLBOARDBATCHINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B8804A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_TRYGETBILLBOARDINSTANCESHADERTRANSFORMDATA_OFFSET UNITYSDK_OFFSET(0x1B880B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UNREGISTERBILLBOARDTARGETRUNTIME_OFFSET UNITYSDK_OFFSET(0x1B874870)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UNREGISTERRUNTIMEBILLBOARDTARGET_OFFSET UNITYSDK_OFFSET(0x1B874C60)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UPDATEALLBILLBOARDSOURCERENDERERMATERIALSBYPROXYSTATE_OFFSET UNITYSDK_OFFSET(0x1B87B800)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UPDATEBILLBOARDGRASS_OFFSET UNITYSDK_OFFSET(0x1B87A5E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UPDATEBILLBOARDSOURCERENDERERMATERIALFORGROUP_OFFSET UNITYSDK_OFFSET(0x1B87C560)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UPDATEMESHGRASS_OFFSET UNITYSDK_OFFSET(0x1B88AF70)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UPDATETEXTURESTREAMINGFAKER_OFFSET UNITYSDK_OFFSET(0x1B88B2F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B88AEF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_USETRANSIENTBILLBOARDINSTANCEDATA_OFFSET UNITYSDK_OFFSET(0x1B884130)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B88E9A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88E140)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassProxy_TypeDefinitionIndex = 26556;

	class GPUGrassProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::GPUGrassProxy*>** StaticGet_s_BillboardBindingProxyRegistry()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::GPUGrassProxy*>**)Il2CppClass::FromTypeDefinitionIndex(GPUGrassProxy_TypeDefinitionIndex)->GetStaticField(0x21D50);
		}
		static ::Il2CppArray<::UnityEngine::Matrix4x4>** StaticGet_m_LocalToWorldMatrixArrayForGPUGrass()
		{
			return (::Il2CppArray<::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(GPUGrassProxy_TypeDefinitionIndex)->GetStaticField(0x21D58);
		}
		static ::Il2CppArray<::UnityEngine::Matrix4x4>** StaticGet_m_GPUGrassParams()
		{
			return (::Il2CppArray<::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(GPUGrassProxy_TypeDefinitionIndex)->GetStaticField(0x21D60);
		}
		static ::System::Int32* StaticGet__EnableBillboardPropertyId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GPUGrassProxy_TypeDefinitionIndex)->GetStaticField(0x6B40);
		}
		static ::System::Int32* StaticGet__GrassInstanceBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GPUGrassProxy_TypeDefinitionIndex)->GetStaticField(0x6B44);
		}
		static ::System::Int32* StaticGet__GPUGrassParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GPUGrassProxy_TypeDefinitionIndex)->GetStaticField(0x6B48);
		}
		// static const ::System::Int32 kBillboardBatchCountDesktop = 0x3E8; // 0x0
		// static const ::System::Int32 kBillboardBatchCountMobile = 0xFA; // 0x0
		// static const ::System::Int32 kBillboardMaxDrawCountMobile = 0x2710; // 0x0
		// static const ::System::String* kBillboardShaderName; // 0x0
		// static const ::System::String* kBillboardDistancePlaceholderMaterialPath; // 0x0
		// static const ::System::String* kBillboardDistancePlaceholderMaterialName; // 0x0
		// static const ::System::Int32 kEstimatedBillboardDataBytesPerInstance = 0x4C; // 0x0
		// static const ::System::Int32 kEstimatedBillboardIndexBytesPerInstance = 0xC; // 0x0
		// static const ::System::Boolean USE_INDIRECT_DRAW; // 0x0
		// static const ::System::Int32 kMaxGPUGrassBatchCount = 0xFA; // 0x0
		::System::Boolean billboardUseTransientInstanceData; // 0x18
		::System::Boolean billboardBindSourceVisibility; // 0x19
		::System::Single billboardCullingDistanceDesktop; // 0x1C
		::System::Single billboardCullingDistanceMobile; // 0x20
		::System::Single billboardSideSurfaceNormalOffset; // 0x24
		::System::Single billboardHorizontalSurfaceHeightOffset; // 0x28
		::System::Single billboardSurfaceEdgeInset; // 0x2C
		::System::Single billboardSurfaceNoiseStrength; // 0x30
		::System::Single billboardLod1DistanceFactor; // 0x34
		::System::Single billboardLod1CountRatio; // 0x38
		::System::Single billboardLod2DistanceFactor; // 0x3C
		::System::Single billboardLod2CountRatio; // 0x40
		::UnityEngine::ComputeBuffer* m_BillboardArgsBuffer; // 0x48
		::UnityEngine::ComputeBuffer* m_BillboardPositionBuffer; // 0x50
		::UnityEngine::Bounds m_BillboardBounds; // 0x58
		::UnityEngine::Mesh* m_BillboardQuadMesh; // 0x70
		::Il2CppArray<::UnityEngine::Matrix4x4>* m_BillboardLocalToWorldMatrixBatch; // 0x78
		::Il2CppArray<::UnityEngine::Matrix4x4>* m_BillboardGpuParamsBatch; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* m_BillboardPropertyBlocks; // 0x88
		::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassProxy_GPUGrassBillboardData>* m_BillboardInstanceData; // 0x90
		::Il2CppArray<::UnityEngine::Vector3>* m_BillboardTransientLocalPositions; // 0x98
		::Il2CppArray<::UnityEngine::Vector3>* m_BillboardTransientLocalSurfaceNormals; // 0xA0
		::Il2CppArray<::System::Single>* m_BillboardTransientSizes; // 0xA8
		::Il2CppArray<::System::Single>* m_BillboardTransientYaws; // 0xB0
		::Il2CppArray<::System::Int32>* m_BillboardInstanceMaterialIndices; // 0xB8
		::Il2CppArray<::System::Int32>* m_BillboardInstanceGroupIndices; // 0xC0
		::Il2CppArray<::UnityEngine::Bounds>* m_BillboardGroupBounds; // 0xC8
		::Il2CppArray<::System::Boolean>* m_BillboardGroupBoundsValid; // 0xD0
		::Il2CppArray<::System::Boolean>* m_BillboardGroupVisibleFlags; // 0xD8
		::Il2CppArray<::System::Boolean>* m_BillboardGroupBillboardDrawFlags; // 0xE0
		::System::Int32 m_BillboardVisibleCount; // 0xE8
		::System::Int32 m_BillboardVisibleCountLod0; // 0xEC
		::System::Int32 m_BillboardVisibleCountLod1; // 0xF0
		::System::Int32 m_BillboardVisibleCountLod2; // 0xF4
		::System::Int32 m_BillboardPreparedLodBias; // 0xF8
		::System::Single m_BillboardLodSplitDistanceSqr; // 0xFC
		::System::Single m_BillboardLodSplitDistanceSqr2; // 0x100
		::System::Int32 m_BillboardProxyLodLevel; // 0x104
		::System::Boolean m_BillboardProxyAllowDraw; // 0x108
		::Il2CppArray<::System::Int32>* m_BillboardGroupLodLevels; // 0x110
		::Il2CppArray<::System::Int32>* m_BillboardGroupInstanceStarts; // 0x118
		::Il2CppArray<::System::Int32>* m_BillboardGroupInstanceCounts; // 0x120
		::Il2CppArray<::System::Int32>* m_BillboardGroupInstanceOrderedIndices; // 0x128
		::Il2CppArray<::System::Int32>* m_BillboardGroupLod1Starts; // 0x130
		::Il2CppArray<::System::Int32>* m_BillboardGroupLod1Counts; // 0x138
		::Il2CppArray<::System::Int32>* m_BillboardGroupLod1OrderedIndices; // 0x140
		::Il2CppArray<::System::Int32>* m_BillboardGroupLod2Starts; // 0x148
		::Il2CppArray<::System::Int32>* m_BillboardGroupLod2Counts; // 0x150
		::Il2CppArray<::System::Int32>* m_BillboardGroupLod2OrderedIndices; // 0x158
		::Il2CppArray<::System::Int32>* m_BillboardVisibleGroupOrder; // 0x160
		::Il2CppArray<::System::Single>* m_BillboardVisibleGroupDistanceSqr; // 0x168
		::System::Int32 m_BillboardVisibleGroupOrderCount; // 0x170
		::Il2CppArray<::System::Int32>* m_BillboardGroupPreparedDrawCounts; // 0x178
		::System::Int32 m_BillboardPreparedProxyTargetKeepCount; // 0x180
		::System::Single m_BillboardCachedLod1Decay; // 0x184
		::System::Single m_BillboardCachedLod2Decay; // 0x188
		::System::Boolean m_BillboardDirty; // 0x18C
		::Il2CppArray<::UnityEngine::Vector3>* m_BillboardSurfaceScatterLocalPositions; // 0x190
		::Il2CppArray<::UnityEngine::Vector3>* m_BillboardSurfaceScatterLocalNormals; // 0x198
		::Il2CppArray<::System::Int32>* m_BillboardSurfaceScatterGroupIndices; // 0x1A0
		::Il2CppArray<::System::Int32>* m_BillboardSurfaceScatterMaterialIndices; // 0x1A8
		::Il2CppArray<::System::Single>* m_BillboardScatterGroupSizeMins; // 0x1B0
		::Il2CppArray<::System::Single>* m_BillboardScatterGroupSizeMaxs; // 0x1B8
		::Il2CppArray<::System::Single>* m_BillboardScatterGroupSourceVisibleScales; // 0x1C0
		::Il2CppArray<::System::Int32>* m_BillboardScatterGroupMaterialSwitchStages; // 0x1C8
		::Il2CppArray<::UnityEngine::Material*>* m_BillboardBakedMaterials; // 0x1D0
		::Il2CppArray<::UnityEngine::Renderer*>* m_BillboardScatterGroupSourceRenderers; // 0x1D8
		::Il2CppArray<::System::String*>* m_BillboardScatterGroupBindingKeys; // 0x1E0
		::UnityEngine::Material* m_BillboardDistancePlaceholderMaterial; // 0x1E8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Renderer*>* m_BillboardRuntimeBindingRendererByKey; // 0x1F0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget*>* m_BillboardRuntimeBindingTargetByKey; // 0x1F8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget*>* m_BillboardRuntimeBindingTargetByRenderer; // 0x200
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* m_BillboardSourceOriginalMaterials; // 0x208
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Vector3>* m_BillboardSourceOriginalLocalScales; // 0x210
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Boolean>* m_BillboardSourcePlaceholderStates; // 0x218
		::System::Boolean m_BillboardTriedResolvePlaceholderMaterial; // 0x220
		::Il2CppArray<::System::UInt32>* m_BillboardIndirectArgsData; // 0x228
		::UnityEngine::Bounds m_BoundingBox; // 0x230
		::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupData*>* _tempGroupDataList; // 0x248
		::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupData*>* _tempGroupDataListLevel2; // 0x250
		::UnityEngine::Rendering::Universal::GrassType grassType; // 0x258
		::UnityEngine::Rendering::Universal::GPUGrassSettings* m_GrassSettings; // 0x260
		::System::Int32 maxCount; // 0x268
		::UnityEngine::Rendering::Universal::GpuGrassShadowType grassShadowType; // 0x26C
		::Il2CppArray<::UnityEngine::Rendering::Universal::CachedGrassRenderItemData>* cachedGrassRenderItemData; // 0x270
		::Il2CppArray<::UnityEngine::Rendering::Universal::CachedGrassRenderItemData>* cachedCustomGrassRenderItemData; // 0x278
		::System::Single brushDensity; // 0x280
		::System::Int32 localLodBias; // 0x284
		::System::Single globalWindIntensity; // 0x288
		::System::Boolean disableEdit; // 0x28C
		::System::String* grassMaskTextureName; // 0x290
		::UnityEngine::Material* billboardMaterial; // 0x298
		::UnityEngine::Mesh* billboardMesh; // 0x2A0
		::UnityEngine::ComputeShader* billboardComputeShader; // 0x2A8
		::UnityEngine::Vector2 billboardSizeRange; // 0x2B0
		::UnityEngine::Vector3 billboardBoxCenter; // 0x2B8
		::UnityEngine::Vector3 billboardBoxSize; // 0x2C4
		::System::Int32 billboardCount; // 0x2D0
		::System::Int32 billboardRandomSeed; // 0x2D4
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupData*>* m_ValidGroupDataList; // 0x2D8
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupData*>* m_ValidGroupDataListLevel2; // 0x2E0
		::System::Single m_GroupCeilSize; // 0x2E8
		::UnityEngine::ComputeBuffer* m_IndirectDrawArgsForLod0; // 0x2F0
		::UnityEngine::ComputeBuffer* m_IndirectDrawArgsForLod1; // 0x2F8
		::UnityEngine::ComputeBuffer* m_IndirectDrawArgsForLod2; // 0x300
		::UnityEngine::ComputeBuffer* m_GPUGrassDataForLod0; // 0x308
		::UnityEngine::ComputeBuffer* m_GPUGrassDataForLod1; // 0x310
		::UnityEngine::ComputeBuffer* m_GPUGrassDataForLod2; // 0x318
		::Il2CppArray<::System::UInt32>* m_IndirectDrawArgsData; // 0x320
		::Il2CppArray<::System::UInt32>* m_IndirectDrawArgsDataForLod1; // 0x328
		::Il2CppArray<::System::UInt32>* m_IndirectDrawArgsDataForLod2; // 0x330
		::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassInstanceData>* m_GrassInstanceData; // 0x338
		::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassInstanceData>* m_VisibleGrassInstanceDataForLod0; // 0x340
		::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassInstanceData>* m_VisibleGrassInstanceDataForLod1; // 0x348
		::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassInstanceData>* m_VisibleGrassInstanceDataForLod2; // 0x350
		::System::Boolean _IsVisible_k__BackingField; // 0x358
		::System::Int32 visibleGroupCount; // 0x35C
		::UnityEngine::Matrix4x4 preLocalToWorldMatrix; // 0x360
		::System::Single preGroupCeilSize; // 0x3A0
		::System::Single m_TSTickTimes; // 0x3A4
		::System::Boolean m_TSFakerIsVisiable; // 0x3A8
		::UnityEngine::Vector2 cachedBendValue; // 0x3AC
		::System::Int32 sumLod0Index; // 0x3B4
		::System::Int32 sumLod1Index; // 0x3B8
		::System::Int32 sumLod2Index; // 0x3BC
		::UnityEngine::GameObject* m_TextureStreamingFaker; // 0x3C0
		::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* propertyBlocks; // 0x3C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY__CCTOR_OFFSET))();
		}

		::System::String* GetBillboardBakeAssetMigrationWarning()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDBAKEASSETMIGRATIONWARNING_OFFSET))(this);
		}

		::System::Boolean HasBillboardBakeAssetMigrationWarning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_HASBILLBOARDBAKEASSETMIGRATIONWARNING_OFFSET))(this);
		}

		::System::Void InitBillboardGrass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_INITBILLBOARDGRASS_OFFSET))(this);
		}

		::System::Void MarkBillboardDirtyAndRebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_MARKBILLBOARDDIRTYANDREBUILD_OFFSET))(this);
		}

		::System::Void OnProxyEnableForBillboardTargetBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ONPROXYENABLEFORBILLBOARDTARGETBINDING_OFFSET))(this);
		}

		::System::Void OnProxyDisableForBillboardTargetBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ONPROXYDISABLEFORBILLBOARDTARGETBINDING_OFFSET))(this);
		}

		static ::System::Void RegisterBillboardTargetRuntime(::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget* target)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REGISTERBILLBOARDTARGETRUNTIME_OFFSET))(target);
		}

		static ::System::Void UnregisterBillboardTargetRuntime(::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget* target)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UNREGISTERBILLBOARDTARGETRUNTIME_OFFSET))(target);
		}

		::System::Void RefreshRuntimeBillboardTargetRegistrations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REFRESHRUNTIMEBILLBOARDTARGETREGISTRATIONS_OFFSET))(this);
		}

		::System::Void ClearRuntimeBillboardTargetRegistrations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CLEARRUNTIMEBILLBOARDTARGETREGISTRATIONS_OFFSET))(this);
		}

		::System::Void RegisterRuntimeBillboardTarget(::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REGISTERRUNTIMEBILLBOARDTARGET_OFFSET))(this, target);
		}

		::System::Void UnregisterRuntimeBillboardTarget(::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UNREGISTERRUNTIMEBILLBOARDTARGET_OFFSET))(this, target);
		}

		::System::Void SyncBillboardSourceRendererBinding(::System::String* bindingKey, ::UnityEngine::Renderer* sourceRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_SYNCBILLBOARDSOURCERENDERERBINDING_OFFSET))(this, bindingKey, sourceRenderer);
		}

		::System::Void CacheBillboardTargetOriginalMaterialsIfNeeded(::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget* target, ::UnityEngine::Renderer* sourceRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CACHEBILLBOARDTARGETORIGINALMATERIALSIFNEEDED_OFFSET))(this, target, sourceRenderer);
		}

		static ::System::Boolean IsBillboardPlaceholderMaterial(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ISBILLBOARDPLACEHOLDERMATERIAL_OFFSET))(material);
		}

		static ::System::Boolean AreBillboardMaterialsAllPlaceholder(::Il2CppArray<::UnityEngine::Material*>* materials)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_AREBILLBOARDMATERIALSALLPLACEHOLDER_OFFSET))(materials);
		}

		static ::System::Boolean AreBillboardMaterialArraysEqual(::Il2CppArray<::UnityEngine::Material*>* lhs, ::Il2CppArray<::UnityEngine::Material*>* rhs)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_AREBILLBOARDMATERIALARRAYSEQUAL_OFFSET))(lhs, rhs);
		}

		::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget* ResolveBillboardTargetBySourceRenderer(::UnityEngine::Renderer* sourceRenderer)
		{
			return ((::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESOLVEBILLBOARDTARGETBYSOURCERENDERER_OFFSET))(this, sourceRenderer);
		}

		static ::System::Boolean IsBillboardBakeAssetValid(::UnityEngine::Rendering::Universal::GPUGrassBillboardBakeAsset* bakeAsset)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::Universal::GPUGrassBillboardBakeAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ISBILLBOARDBAKEASSETVALID_OFFSET))(bakeAsset);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* CollectAllowedBindingKeysForBakeAsset(::UnityEngine::Rendering::Universal::GPUGrassBillboardBakeAsset* bakeAsset)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID, ::UnityEngine::Rendering::Universal::GPUGrassBillboardBakeAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_COLLECTALLOWEDBINDINGKEYSFORBAKEASSET_OFFSET))(this, bakeAsset);
		}

		::System::Boolean TryCollectBillboardBakeTargetsFromScene(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget*>*& bakeTargets)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_TRYCOLLECTBILLBOARDBAKETARGETSFROMSCENE_OFFSET))(this, bakeTargets);
		}

		::System::Boolean HasBillboardBakeAssetWorkflowTargetInScene()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_HASBILLBOARDBAKEASSETWORKFLOWTARGETINSCENE_OFFSET))(this);
		}

		static ::System::Int32 ResolveBillboardGlobalMaterialIndex(::UnityEngine::Material* material, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* bakedMaterials, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Int32>* materialToGlobalIndex)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESOLVEBILLBOARDGLOBALMATERIALINDEX_OFFSET))(material, bakedMaterials, materialToGlobalIndex);
		}

		static ::System::Int32 ComputeBillboardBakeGroupCount(::Il2CppArray<::System::Single>* localGroupSizeMins, ::Il2CppArray<::System::Single>* localGroupSizeMaxs, ::Il2CppArray<::System::Single>* localGroupSourceVisibleScales, ::Il2CppArray<::System::Int32>* localGroupMaterialSwitchStages, ::Il2CppArray<::System::String*>* localGroupBindingKeys)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_COMPUTEBILLBOARDBAKEGROUPCOUNT_OFFSET))(localGroupSizeMins, localGroupSizeMaxs, localGroupSourceVisibleScales, localGroupMaterialSwitchStages, localGroupBindingKeys);
		}

		static ::System::Boolean BillboardBindingKeysMatch(::System::String* lhs, ::System::String* rhs)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_BILLBOARDBINDINGKEYSMATCH_OFFSET))(lhs, rhs);
		}

		static ::System::String* NormalizeBillboardBindingKey(::System::String* bindingKey)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_NORMALIZEBILLBOARDBINDINGKEY_OFFSET))(bindingKey);
		}

		::System::Boolean ApplyBillboardBakeTargetsToScatterData(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget*>* bakeTargets)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::GPUGrassBillboardTarget*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_APPLYBILLBOARDBAKETARGETSTOSCATTERDATA_OFFSET))(this, bakeTargets);
		}

		::System::Boolean RestoreBillboardDataFromBakeAsset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESTOREBILLBOARDDATAFROMBAKEASSET_OFFSET))(this);
		}

		::System::Void RebuildBillboardDataByBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REBUILDBILLBOARDDATABYBOUNDS_OFFSET))(this);
		}

		::UnityEngine::Renderer* ResolveBillboardBoundSourceRenderer(::System::Int32 groupIndex)
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESOLVEBILLBOARDBOUNDSOURCERENDERER_OFFSET))(this, groupIndex);
		}

		::System::Void ReleaseBillboardResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RELEASEBILLBOARDRESOURCES_OFFSET))(this);
		}

		::System::Void UpdateBillboardGrass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UPDATEBILLBOARDGRASS_OFFSET))(this);
		}

		::System::Boolean CheckBillboardVisible(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 cameraPosition, ::Il2CppArray<::UnityEngine::Plane>* planes, ::System::Single distanceCullingBias)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Plane>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CHECKBILLBOARDVISIBLE_OFFSET))(this, camera, cameraPosition, planes, distanceCullingBias);
		}

		::System::Void PrepareBillboardDrawData(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 globalLodBias)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREBILLBOARDDRAWDATA_OFFSET))(this, cmd, globalLodBias);
		}

		::System::Void DrawBillboardGrass(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean enableDither)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWBILLBOARDGRASS_OFFSET))(this, cmd, enableDither);
		}

		::System::Void DrawBillboardInstancesByMaterialAndLod(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Mesh* mesh, ::UnityEngine::Material* mat, ::System::Int32 materialIndex, ::System::Int32 lodLevel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWBILLBOARDINSTANCESBYMATERIALANDLOD_OFFSET))(this, cmd, mesh, mat, materialIndex, lodLevel);
		}

		::System::Boolean TryFillBillboardBatchInstance(::System::Int32 instanceIndex, ::System::Boolean useShaderInstanceTransform, ::UnityEngine::Matrix4x4& proxyLocalToWorldMatrix, ::System::Int32 batchFill)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::UnityEngine::Matrix4x4&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_TRYFILLBILLBOARDBATCHINSTANCE_OFFSET))(this, instanceIndex, useShaderInstanceTransform, proxyLocalToWorldMatrix, batchFill);
		}

		::System::Void DrawBillboardGrassShadow(::UnityEngine::Rendering::ShadowDrawingSettings& settings, ::System::Int32 sliceIndex, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::GpuGrassShadowType globalShadowType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShadowDrawingSettings&, ::System::Int32, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::GpuGrassShadowType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWBILLBOARDGRASSSHADOW_OFFSET))(this, settings, sliceIndex, cmd, globalShadowType);
		}

		::System::Void DrawBillboardGrassForSoftEdge(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean enableDither)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWBILLBOARDGRASSFORSOFTEDGE_OFFSET))(this, cmd, enableDither);
		}

		::System::Boolean CanUseBoundSourceVisibility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CANUSEBOUNDSOURCEVISIBILITY_OFFSET))(this);
		}

		::System::Boolean CheckBillboardVisibleByBoundSourceVisibility(::System::Boolean layerVisible, ::UnityEngine::Vector3 cameraPosition, ::System::Single cullingDistSqr)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CHECKBILLBOARDVISIBLEBYBOUNDSOURCEVISIBILITY_OFFSET))(this, layerVisible, cameraPosition, cullingDistSqr);
		}

		static ::System::Boolean IsBillboardSourceRendererVisible(::UnityEngine::Renderer* sourceRenderer)
		{
			return ((::System::Boolean(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ISBILLBOARDSOURCERENDERERVISIBLE_OFFSET))(sourceRenderer);
		}

		::System::Int32 GetBillboardMaterialSwitchStageForGroup(::System::Int32 groupIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDMATERIALSWITCHSTAGEFORGROUP_OFFSET))(this, groupIndex);
		}

		::System::Single GetBillboardSourceVisibleScaleForGroup(::System::Int32 groupIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDSOURCEVISIBLESCALEFORGROUP_OFFSET))(this, groupIndex);
		}

		::System::Boolean HasBillboardInstancesForGroup(::System::Int32 groupIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_HASBILLBOARDINSTANCESFORGROUP_OFFSET))(this, groupIndex);
		}

		static ::System::Boolean ShouldUseBillboardOriginalMaterial(::System::Boolean distanceVisible, ::System::Int32 lodLevel, ::System::Int32 switchStage)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_SHOULDUSEBILLBOARDORIGINALMATERIAL_OFFSET))(distanceVisible, lodLevel, switchStage);
		}

		::System::Void UpdateBillboardSourceRendererMaterialForGroup(::UnityEngine::Renderer* sourceRenderer, ::System::Int32 groupIndex, ::System::Boolean distanceVisible, ::System::Int32 lodLevel, ::System::Boolean& allowBillboardDraw)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UPDATEBILLBOARDSOURCERENDERERMATERIALFORGROUP_OFFSET))(this, sourceRenderer, groupIndex, distanceVisible, lodLevel, allowBillboardDraw);
		}

		::System::Boolean UpdateAllBillboardSourceRendererMaterialsByProxyState(::System::Boolean distanceVisible, ::System::Int32 lodLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UPDATEALLBILLBOARDSOURCERENDERERMATERIALSBYPROXYSTATE_OFFSET))(this, distanceVisible, lodLevel);
		}

		::System::Void ApplyBillboardSourceRendererMaterialState(::UnityEngine::Renderer* sourceRenderer, ::System::Boolean useOriginalMaterial, ::System::Single sourceVisibleScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_APPLYBILLBOARDSOURCERENDERERMATERIALSTATE_OFFSET))(this, sourceRenderer, useOriginalMaterial, sourceVisibleScale);
		}

		::System::Void EnsureBillboardSourceRendererOriginalStateCached(::UnityEngine::Renderer* sourceRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ENSUREBILLBOARDSOURCERENDERERORIGINALSTATECACHED_OFFSET))(this, sourceRenderer);
		}

		::System::Void ApplyBillboardPlaceholderMaterial(::UnityEngine::Renderer* sourceRenderer, ::UnityEngine::Material* placeholderMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_APPLYBILLBOARDPLACEHOLDERMATERIAL_OFFSET))(this, sourceRenderer, placeholderMaterial);
		}

		::System::Void ApplyBillboardOriginalMaterialAndScale(::UnityEngine::Renderer* sourceRenderer, ::System::Single sourceVisibleScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_APPLYBILLBOARDORIGINALMATERIALANDSCALE_OFFSET))(this, sourceRenderer, sourceVisibleScale);
		}

		::System::Void RestoreBillboardSourceRendererToOriginalState(::UnityEngine::Renderer* sourceRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESTOREBILLBOARDSOURCERENDERERTOORIGINALSTATE_OFFSET))(this, sourceRenderer);
		}

		::System::Void RestoreAllBillboardTargetOriginalMaterialsInScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESTOREALLBILLBOARDTARGETORIGINALMATERIALSINSCENE_OFFSET))(this);
		}

		::System::Void RestoreAllBillboardSourceRendererMaterials(::System::Boolean clearCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESTOREALLBILLBOARDSOURCERENDERERMATERIALS_OFFSET))(this, clearCache);
		}

		::System::Void EnsureBillboardDistancePlaceholderMaterialResolved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ENSUREBILLBOARDDISTANCEPLACEHOLDERMATERIALRESOLVED_OFFSET))(this);
		}

		::UnityEngine::Material* GetBillboardDistancePlaceholderMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDDISTANCEPLACEHOLDERMATERIAL_OFFSET))(this);
		}

		static ::System::Boolean IsBillboardMobilePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ISBILLBOARDMOBILEPLATFORM_OFFSET))();
		}

		static ::System::Int32 GetBillboardBatchCountPerDraw()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDBATCHCOUNTPERDRAW_OFFSET))();
		}

		::System::Int32 GetBillboardMaxDrawCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDMAXDRAWCOUNT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBillboardGroupSortCenterWS(::System::Int32 groupIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDGROUPSORTCENTERWS_OFFSET))(this, groupIndex);
		}

		::System::Void BuildBillboardVisibleGroupOrderByDistance(::UnityEngine::Vector3 cameraPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_BUILDBILLBOARDVISIBLEGROUPORDERBYDISTANCE_OFFSET))(this, cameraPosition);
		}

		::System::Single GetBillboardCullingDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDCULLINGDISTANCE_OFFSET))(this);
		}

		::System::Boolean HasAnyBillboardDrawMaterial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_HASANYBILLBOARDDRAWMATERIAL_OFFSET))(this);
		}

		::System::Int32 GetBillboardMaterialCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDMATERIALCOUNT_OFFSET))(this);
		}

		::UnityEngine::Material* GetBillboardDrawMaterialByIndex(::System::Int32 materialIndex)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDDRAWMATERIALBYINDEX_OFFSET))(this, materialIndex);
		}

		::System::Int32 GetBillboardMaterialIndexForInstance(::System::Int32 instanceIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDMATERIALINDEXFORINSTANCE_OFFSET))(this, instanceIndex);
		}

		::System::Boolean UseTransientBillboardInstanceData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_USETRANSIENTBILLBOARDINSTANCEDATA_OFFSET))(this);
		}

		::System::Int32 GetBillboardRuntimeInstanceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDRUNTIMEINSTANCECOUNT_OFFSET))(this);
		}

		::System::Int64 GetBillboardCoreBytesPerInstanceEstimate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDCOREBYTESPERINSTANCEESTIMATE_OFFSET))(this);
		}

		::System::Void ResetBillboardTransientInstanceData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESETBILLBOARDTRANSIENTINSTANCEDATA_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 TransformDirectionByMatrix(::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Vector3 direction)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_TRANSFORMDIRECTIONBYMATRIX_OFFSET))(matrix, direction);
		}

		::UnityEngine::Rendering::Universal::GPUGrassProxy_GPUGrassBillboardData GetBillboardInstanceDataForDraw(::System::Int32 instanceIndex)
		{
			return ((::UnityEngine::Rendering::Universal::GPUGrassProxy_GPUGrassBillboardData(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDINSTANCEDATAFORDRAW_OFFSET))(this, instanceIndex);
		}

		::UnityEngine::Rendering::Universal::GPUGrassProxy_GPUGrassBillboardData GetBillboardInstanceDataForDraw_1(::System::Int32 instanceIndex, ::UnityEngine::Matrix4x4& proxyLocalToWorldMatrix)
		{
			return ((::UnityEngine::Rendering::Universal::GPUGrassProxy_GPUGrassBillboardData(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDINSTANCEDATAFORDRAW_1_OFFSET))(this, instanceIndex, proxyLocalToWorldMatrix);
		}

		::System::Boolean TryGetBillboardInstanceShaderTransformData(::System::Int32 instanceIndex, ::UnityEngine::Matrix4x4& proxyLocalToWorldMatrix, ::UnityEngine::Vector3& centerWS, ::System::Single& size, ::UnityEngine::Vector3& surfaceNormalWS)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&, ::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_TRYGETBILLBOARDINSTANCESHADERTRANSFORMDATA_OFFSET))(this, instanceIndex, proxyLocalToWorldMatrix, centerWS, size, surfaceNormalWS);
		}

		static ::System::Single ExtractUniformScaleFromMatrix(::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Single(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_EXTRACTUNIFORMSCALEFROMMATRIX_OFFSET))(matrix);
		}

		::System::Void BindBillboardPositionBufferToMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_BINDBILLBOARDPOSITIONBUFFERTOMATERIALS_OFFSET))(this);
		}

		::System::Single GetBillboardLodCountRatio(::System::Int32 lodIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDLODCOUNTRATIO_OFFSET))(this, lodIndex);
		}

		::System::Void BuildBillboardGroupInstanceLookupCaches(::System::Int32 instanceCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_BUILDBILLBOARDGROUPINSTANCELOOKUPCACHES_OFFSET))(this, instanceCount);
		}

		::System::Void EnsureBillboardLod1PrecomputedIndices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ENSUREBILLBOARDLOD1PRECOMPUTEDINDICES_OFFSET))(this);
		}

		::System::Void EnsureBillboardLod2PrecomputedIndices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ENSUREBILLBOARDLOD2PRECOMPUTEDINDICES_OFFSET))(this);
		}

		::System::Void EnsureBillboardProgressiveLodData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ENSUREBILLBOARDPROGRESSIVELODDATA_OFFSET))(this);
		}

		static ::System::Void BuildBillboardProgressiveGroupOrder(::System::Int32 sourceStart, ::System::Int32 sourceCount, ::System::Int32 lod1Count, ::System::Int32 lod2Count, ::Il2CppArray<::System::Int32>* sourceOrderedIndices, ::Il2CppArray<::System::Int32>* outOrderedIndices)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_BUILDBILLBOARDPROGRESSIVEGROUPORDER_OFFSET))(sourceStart, sourceCount, lod1Count, lod2Count, sourceOrderedIndices, outOrderedIndices);
		}

		static ::System::Int32 ComputeBillboardLodTargetCount(::System::Int32 sourceCount, ::System::Single ratio)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_COMPUTEBILLBOARDLODTARGETCOUNT_OFFSET))(sourceCount, ratio);
		}

		static ::System::Int32 GetBillboardSafeSliceCount(::System::Int32 sliceStart, ::System::Int32 sliceCount, ::System::Int32 sourceLength)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDSAFESLICECOUNT_OFFSET))(sliceStart, sliceCount, sourceLength);
		}

		static ::System::Boolean ShouldKeepBillboardLodSample(::System::Int32 seenCount, ::System::Int32 sourceCount, ::System::Int32 targetCount)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_SHOULDKEEPBILLBOARDLODSAMPLE_OFFSET))(seenCount, sourceCount, targetCount);
		}

		::System::Void RebuildBillboardDataIfNeeded(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REBUILDBILLBOARDDATAIFNEEDED_OFFSET))(this, force);
		}

		::System::Boolean NeedRebuildBillboardData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_NEEDREBUILDBILLBOARDDATA_OFFSET))(this);
		}

		::System::Void RefreshBillboardBounds(::System::Single maxSizeExpand, ::UnityEngine::Mesh* drawMesh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REFRESHBILLBOARDBOUNDS_OFFSET))(this, maxSizeExpand, drawMesh);
		}

		::System::Void RefreshBillboardBoundsFromScatter(::Il2CppArray<::UnityEngine::Vector3>* localPositions, ::System::Single maxSizeExpand, ::UnityEngine::Mesh* drawMesh)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REFRESHBILLBOARDBOUNDSFROMSCATTER_OFFSET))(this, localPositions, maxSizeExpand, drawMesh);
		}

		::System::Void RefreshBillboardGroupBoundsFromInstances(::Il2CppArray<::UnityEngine::Vector4>* positionData, ::System::Single maxSizeExpand, ::UnityEngine::Mesh* drawMesh)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Single, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REFRESHBILLBOARDGROUPBOUNDSFROMINSTANCES_OFFSET))(this, positionData, maxSizeExpand, drawMesh);
		}

		::System::Void EnsureBillboardBuffers(::System::Int32 targetCount, ::Il2CppArray<::UnityEngine::Vector4>* positionData, ::UnityEngine::Mesh* drawMesh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ENSUREBILLBOARDBUFFERS_OFFSET))(this, targetCount, positionData, drawMesh);
		}

		::UnityEngine::Mesh* GetBillboardDrawMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETBILLBOARDDRAWMESH_OFFSET))(this);
		}

		::System::Void EnsureBillboardQuadMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ENSUREBILLBOARDQUADMESH_OFFSET))(this);
		}

		::System::Void GetGroupBaseData(::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupBaseData& groupBaseData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupBaseData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETGROUPBASEDATA_OFFSET))(this, groupBaseData);
		}

		::System::Void PrepareGroupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREGROUPDATA_OFFSET))(this);
		}

		::System::Void ResetGroupData(::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupBaseData groupBaseData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupBaseData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESETGROUPDATA_OFFSET))(this, groupBaseData);
		}

		::System::Void ResetTempGroupData(::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupData*>* tempDataList, ::System::Int32 xGridCount, ::System::Int32 yGridCount, ::UnityEngine::Vector3 groupSize, ::UnityEngine::Vector3 min)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupData*>*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESETTEMPGROUPDATA_OFFSET))(this, tempDataList, xGridCount, yGridCount, groupSize, min);
		}

		::System::Void PrepareGroupDataForMaskGrass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREGROUPDATAFORMASKGRASS_OFFSET))(this);
		}

		::System::Void PrepareGroupDataForCustomGrass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREGROUPDATAFORCUSTOMGRASS_OFFSET))(this);
		}

		static ::System::Boolean CheckBufferValid(::UnityEngine::ComputeBuffer*& buffer)
		{
			return ((::System::Boolean(*)(::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CHECKBUFFERVALID_OFFSET))(buffer);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_SET_ISVISIBLE_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnEnableMeshGrass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ONENABLEMESHGRASS_OFFSET))(this);
		}

		::System::Boolean CheckIsVisible(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 cameraPosition, ::Il2CppArray<::UnityEngine::Plane>* planes, ::System::Single distanceCullingBias)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Plane>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CHECKISVISIBLE_OFFSET))(this, camera, cameraPosition, planes, distanceCullingBias);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDisableMeshGrass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ONDISABLEMESHGRASS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateMeshGrass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UPDATEMESHGRASS_OFFSET))(this);
		}

		::System::Void PrepareGPUDrawData(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 cachedGlobalLodBias)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREGPUDRAWDATA_OFFSET))(this, cmd, cachedGlobalLodBias);
		}

		::System::Void DrawGPUGrassShadow(::UnityEngine::Rendering::ShadowDrawingSettings& settings, ::System::Int32 sliceIndex, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::GpuGrassShadowType globalShadowType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShadowDrawingSettings&, ::System::Int32, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::GpuGrassShadowType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWGPUGRASSSHADOW_OFFSET))(this, settings, sliceIndex, cmd, globalShadowType);
		}

		::System::Void DrawGPUGrass(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean enableDither)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWGPUGRASS_OFFSET))(this, cmd, enableDither);
		}

		::System::Void DrawGPUGrassForSoftEdge(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean enableDither)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWGPUGRASSFORSOFTEDGE_OFFSET))(this, cmd, enableDither);
		}

		::System::Void UpdateTextureStreamingFaker(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UPDATETEXTURESTREAMINGFAKER_OFFSET))(this, material);
		}

		::System::Void CheckIndirectDrawData(::System::Int32 sumCount, ::UnityEngine::ComputeBuffer*& gpuGrassDta, ::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassInstanceData>* cpuGrassData, ::System::Int32 inputStride, ::UnityEngine::ComputeBuffer*& gpuIndirectArgs, ::Il2CppArray<::System::UInt32>* cpuIndirectArgs, ::UnityEngine::Mesh* mesh, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*&, ::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassInstanceData>*, ::System::Int32, ::UnityEngine::ComputeBuffer*&, ::Il2CppArray<::System::UInt32>*, ::UnityEngine::Mesh*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CHECKINDIRECTDRAWDATA_OFFSET))(this, sumCount, gpuGrassDta, cpuGrassData, inputStride, gpuIndirectArgs, cpuIndirectArgs, mesh, material);
		}

		::System::Void DrawMeshWithIndirectDraw(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 sumCount, ::UnityEngine::ComputeBuffer* gpuGrassData, ::UnityEngine::ComputeBuffer* indirectDrawArgs, ::UnityEngine::Mesh* mesh, ::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::UnityEngine::ComputeBuffer*, ::UnityEngine::Mesh*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWMESHWITHINDIRECTDRAW_OFFSET))(this, cmd, sumCount, gpuGrassData, indirectDrawArgs, mesh, mat);
		}

		::System::Void DrawWithBatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 sumCount, ::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassInstanceData>* grassData, ::UnityEngine::Mesh* mesh, ::UnityEngine::Material* mat, ::System::Int32 passIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassInstanceData>*, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWWITHBATCH_OFFSET))(this, cmd, sumCount, grassData, mesh, mat, passIndex);
		}

		::System::Void SyncCachedDataRenderDataToInstanceData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_SYNCCACHEDDATARENDERDATATOINSTANCEDATA_OFFSET))(this);
		}

		::System::Void RefreshBoundingBox(::UnityEngine::Vector3 extendBoundSize, ::UnityEngine::Vector3 extendBoundCenter)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REFRESHBOUNDINGBOX_OFFSET))(this, extendBoundSize, extendBoundCenter);
		}
	};
}
