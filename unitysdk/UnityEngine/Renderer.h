#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingMode.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MotionVectorGenerationMode.h"
#include "unitysdk/UnityEngine/Rendering/LightProbeUsage.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionProbeBlendInfo.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionProbeUsage.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngineInternal/LightmapType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RENDERER_ADDRENDERFLAG_OFFSET UNITYSDK_OFFSET(0x1B2C38B0)
#define UNITYENGINE_RENDERER_COPYMATERIALARRAYFIXED_OFFSET UNITYSDK_OFFSET(0x1B2C36E0)
#define UNITYENGINE_RENDERER_COPYMATERIALARRAY_OFFSET UNITYSDK_OFFSET(0x1B2C2DC0)
#define UNITYENGINE_RENDERER_COPYSHAREDMATERIALARRAYFIXED_OFFSET UNITYSDK_OFFSET(0x1B2C36F0)
#define UNITYENGINE_RENDERER_COPYSHAREDMATERIALARRAY_OFFSET UNITYSDK_OFFSET(0x1B2C2DD0)
#define UNITYENGINE_RENDERER_ENABLEQUERYPEROBJ_OFFSET UNITYSDK_OFFSET(0x1B2C3870)
#define UNITYENGINE_RENDERER_GETCLOSESTREFLECTIONPROBESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2C2E80)
#define UNITYENGINE_RENDERER_GETCLOSESTREFLECTIONPROBES_OFFSET UNITYSDK_OFFSET(0x1B2C35F0)
#define UNITYENGINE_RENDERER_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1B2C3810)
#define UNITYENGINE_RENDERER_GETFLOATEX_OFFSET UNITYSDK_OFFSET(0x1B2C3790)
#define UNITYENGINE_RENDERER_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1B2C3780)
#define UNITYENGINE_RENDERER_GETLIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1B2C31B0)
#define UNITYENGINE_RENDERER_GETLIGHTMAPST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C3210)
#define UNITYENGINE_RENDERER_GETLIGHTMAPST_OFFSET UNITYSDK_OFFSET(0x1B2C31D0)
#define UNITYENGINE_RENDERER_GETMATERIALARRAY_OFFSET UNITYSDK_OFFSET(0x1B2C2DB0)
#define UNITYENGINE_RENDERER_GETMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2C3350)
#define UNITYENGINE_RENDERER_GETMATERIALS_1_OFFSET UNITYSDK_OFFSET(0x1B2C3700)
#define UNITYENGINE_RENDERER_GETMATERIALS_OFFSET UNITYSDK_OFFSET(0x1B2C3410)
#define UNITYENGINE_RENDERER_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B2C2D70)
#define UNITYENGINE_RENDERER_GETMATRIX_OFFSET UNITYSDK_OFFSET(0x1B2C37E0)
#define UNITYENGINE_RENDERER_GETPROPERTYBLOCK_1_OFFSET UNITYSDK_OFFSET(0x1B2C2E70)
#define UNITYENGINE_RENDERER_GETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1B2C2E60)
#define UNITYENGINE_RENDERER_GETQUERYVISRATIO_OFFSET UNITYSDK_OFFSET(0x1B2C38A0)
#define UNITYENGINE_RENDERER_GETRENDERKEYWORD_OFFSET UNITYSDK_OFFSET(0x1B2C3770)
#define UNITYENGINE_RENDERER_GETSHAREDMATERIALARRAY_OFFSET UNITYSDK_OFFSET(0x1B2C3360)
#define UNITYENGINE_RENDERER_GETSHAREDMATERIALS_1_OFFSET UNITYSDK_OFFSET(0x1B2C3720)
#define UNITYENGINE_RENDERER_GETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1B2C3500)
#define UNITYENGINE_RENDERER_GETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B2C2D80)
#define UNITYENGINE_RENDERER_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B2C3840)
#define UNITYENGINE_RENDERER_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2C37B0)
#define UNITYENGINE_RENDERER_GET_ALLOWOCCLUSIONWHENDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1B2C3020)
#define UNITYENGINE_RENDERER_GET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C2CF0)
#define UNITYENGINE_RENDERER_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1B2C2CA0)
#define UNITYENGINE_RENDERER_GET_CASTSHADOWS_OFFSET UNITYSDK_OFFSET(0x1B2C2B80)
#define UNITYENGINE_RENDERER_GET_CHECKLIGHTWEIGHTDEACTIVATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2C3600)
#define UNITYENGINE_RENDERER_GET_CHECKLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1B2C3620)
#define UNITYENGINE_RENDERER_GET_DISABLECULLINGRENDERINGLAYERMASKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2C3640)
#define UNITYENGINE_RENDERER_GET_DISABLECULLINGRENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1B2C3660)
#define UNITYENGINE_RENDERER_GET_DOPEROBJQUERY_OFFSET UNITYSDK_OFFSET(0x1B2C3880)
#define UNITYENGINE_RENDERER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B2C2E90)
#define UNITYENGINE_RENDERER_GET_FORCERENDERINGOFF_OFFSET UNITYSDK_OFFSET(0x1B2C2EE0)
#define UNITYENGINE_RENDERER_GET_ISPARTOFSTATICBATCH_OFFSET UNITYSDK_OFFSET(0x1B2C3080)
#define UNITYENGINE_RENDERER_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B2C2EB0)
#define UNITYENGINE_RENDERER_GET_LIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1B2C3240)
#define UNITYENGINE_RENDERER_GET_LIGHTMAPSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B2C3280)
#define UNITYENGINE_RENDERER_GET_LIGHTPROBEPROXYVOLUMEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B2C3170)
#define UNITYENGINE_RENDERER_GET_LIGHTPROBEUSAGE_OFFSET UNITYSDK_OFFSET(0x1B2C2C60)
#define UNITYENGINE_RENDERER_GET_LOCALTOWORLDMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C3160)
#define UNITYENGINE_RENDERER_GET_LOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1B2C3100)
#define UNITYENGINE_RENDERER_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x1B2C3390)
#define UNITYENGINE_RENDERER_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1B2C33B0)
#define UNITYENGINE_RENDERER_GET_MOTIONVECTORGENERATIONMODE_OFFSET UNITYSDK_OFFSET(0x1B2C2C00)
#define UNITYENGINE_RENDERER_GET_MOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x1B2C2BE0)
#define UNITYENGINE_RENDERER_GET_PROBEANCHOR_OFFSET UNITYSDK_OFFSET(0x1B2C3190)
#define UNITYENGINE_RENDERER_GET_RAYTRACINGMODE_OFFSET UNITYSDK_OFFSET(0x1B2C2F60)
#define UNITYENGINE_RENDERER_GET_REALTIMELIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1B2C3260)
#define UNITYENGINE_RENDERER_GET_REALTIMELIGHTMAPSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B2C32E0)
#define UNITYENGINE_RENDERER_GET_RECEIVESHADOWS_OFFSET UNITYSDK_OFFSET(0x1B2C2EC0)
#define UNITYENGINE_RENDERER_GET_REFLECTIONPROBEUSAGE_OFFSET UNITYSDK_OFFSET(0x1B2C2F00)
#define UNITYENGINE_RENDERER_GET_RENDERERPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B2C2F40)
#define UNITYENGINE_RENDERER_GET_RENDERFLAG_OFFSET UNITYSDK_OFFSET(0x1B2C36A0)
#define UNITYENGINE_RENDERER_GET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1B2C2F20)
#define UNITYENGINE_RENDERER_GET_RENDERQUERYTYPE_OFFSET UNITYSDK_OFFSET(0x1B2C3680)
#define UNITYENGINE_RENDERER_GET_SHADOWCASTINGMODE_OFFSET UNITYSDK_OFFSET(0x1B2C2BA0)
#define UNITYENGINE_RENDERER_GET_SHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1B2C33F0)
#define UNITYENGINE_RENDERER_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B2C33D0)
#define UNITYENGINE_RENDERER_GET_SORTINGGROUPID_OFFSET UNITYSDK_OFFSET(0x1B2C2FE0)
#define UNITYENGINE_RENDERER_GET_SORTINGGROUPORDER_OFFSET UNITYSDK_OFFSET(0x1B2C3000)
#define UNITYENGINE_RENDERER_GET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x1B2C2FA0)
#define UNITYENGINE_RENDERER_GET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0x1B2C2F80)
#define UNITYENGINE_RENDERER_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1B2C2FC0)
#define UNITYENGINE_RENDERER_GET_STATICBATCHINDEX_OFFSET UNITYSDK_OFFSET(0x1B2C3060)
#define UNITYENGINE_RENDERER_GET_STATICBATCHROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B2C3040)
#define UNITYENGINE_RENDERER_GET_STREAMINGMIPMAPBIAS_OFFSET UNITYSDK_OFFSET(0x1B2C3370)
#define UNITYENGINE_RENDERER_GET_USELIGHTPROBES_OFFSET UNITYSDK_OFFSET(0x1B2C2C40)
#define UNITYENGINE_RENDERER_GET_VCMASK_OFFSET UNITYSDK_OFFSET(0x1B2C36C0)
#define UNITYENGINE_RENDERER_GET_WORLDTOLOCALMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C30F0)
#define UNITYENGINE_RENDERER_GET_WORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x1B2C3090)
#define UNITYENGINE_RENDERER_HASPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1B2C2E30)
#define UNITYENGINE_RENDERER_INTERNAL_GETPROPERTYBLOCKMATERIALINDEX_OFFSET UNITYSDK_OFFSET(0x1B2C2E20)
#define UNITYENGINE_RENDERER_INTERNAL_GETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1B2C2E00)
#define UNITYENGINE_RENDERER_INTERNAL_SETPROPERTYBLOCKMATERIALINDEX_OFFSET UNITYSDK_OFFSET(0x1B2C2E10)
#define UNITYENGINE_RENDERER_INTERNAL_SETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1B2C2DF0)
#define UNITYENGINE_RENDERER_ISMATKEYWORDENABLE_OFFSET UNITYSDK_OFFSET(0x1B2C3760)
#define UNITYENGINE_RENDERER_REMOVERENDERFLAG_OFFSET UNITYSDK_OFFSET(0x1B2C38C0)
#define UNITYENGINE_RENDERER_SETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C3830)
#define UNITYENGINE_RENDERER_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1B2C3820)
#define UNITYENGINE_RENDERER_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1B2C37A0)
#define UNITYENGINE_RENDERER_SETGROUPCBINDEX_OFFSET UNITYSDK_OFFSET(0x1B2C3860)
#define UNITYENGINE_RENDERER_SETLIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1B2C31C0)
#define UNITYENGINE_RENDERER_SETLIGHTMAPST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C3230)
#define UNITYENGINE_RENDERER_SETLIGHTMAPST_OFFSET UNITYSDK_OFFSET(0x1B2C3220)
#define UNITYENGINE_RENDERER_SETMATERIALARRAY_OFFSET UNITYSDK_OFFSET(0x1B2C2DE0)
#define UNITYENGINE_RENDERER_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B2C2D90)
#define UNITYENGINE_RENDERER_SETMATKEYWORD_OFFSET UNITYSDK_OFFSET(0x1B2C3750)
#define UNITYENGINE_RENDERER_SETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C3800)
#define UNITYENGINE_RENDERER_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x1B2C37F0)
#define UNITYENGINE_RENDERER_SETOVERRIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B2C2D00)
#define UNITYENGINE_RENDERER_SETPROPERTYBLOCK_1_OFFSET UNITYSDK_OFFSET(0x1B2C2E50)
#define UNITYENGINE_RENDERER_SETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1B2C2E40)
#define UNITYENGINE_RENDERER_SETSHAREDMATERIALIFNOTSAME_OFFSET UNITYSDK_OFFSET(0x1B2C2DA0)
#define UNITYENGINE_RENDERER_SETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1B2C3740)
#define UNITYENGINE_RENDERER_SETSTATICBATCHINFO_OFFSET UNITYSDK_OFFSET(0x1B2C3070)
#define UNITYENGINE_RENDERER_SETSTATICLIGHTMAPST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C2D60)
#define UNITYENGINE_RENDERER_SETSTATICLIGHTMAPST_OFFSET UNITYSDK_OFFSET(0x1B2C2D50)
#define UNITYENGINE_RENDERER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B2C3850)
#define UNITYENGINE_RENDERER_SETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C37D0)
#define UNITYENGINE_RENDERER_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2C37C0)
#define UNITYENGINE_RENDERER_SET_ALLOWOCCLUSIONWHENDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1B2C3030)
#define UNITYENGINE_RENDERER_SET_CASTSHADOWS_OFFSET UNITYSDK_OFFSET(0x1B2C2BB0)
#define UNITYENGINE_RENDERER_SET_CHECKLIGHTWEIGHTDEACTIVATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2C3610)
#define UNITYENGINE_RENDERER_SET_CHECKLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1B2C3630)
#define UNITYENGINE_RENDERER_SET_DISABLECULLINGRENDERINGLAYERMASKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2C3650)
#define UNITYENGINE_RENDERER_SET_DISABLECULLINGRENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1B2C3670)
#define UNITYENGINE_RENDERER_SET_DOPEROBJQUERY_OFFSET UNITYSDK_OFFSET(0x1B2C3890)
#define UNITYENGINE_RENDERER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B2C2EA0)
#define UNITYENGINE_RENDERER_SET_FORCERENDERINGOFF_OFFSET UNITYSDK_OFFSET(0x1B2C2EF0)
#define UNITYENGINE_RENDERER_SET_LIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1B2C3250)
#define UNITYENGINE_RENDERER_SET_LIGHTMAPSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B2C32C0)
#define UNITYENGINE_RENDERER_SET_LIGHTPROBEPROXYVOLUMEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B2C3180)
#define UNITYENGINE_RENDERER_SET_LIGHTPROBEUSAGE_OFFSET UNITYSDK_OFFSET(0x1B2C2C90)
#define UNITYENGINE_RENDERER_SET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x1B2C33A0)
#define UNITYENGINE_RENDERER_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1B2C33C0)
#define UNITYENGINE_RENDERER_SET_MOTIONVECTORGENERATIONMODE_OFFSET UNITYSDK_OFFSET(0x1B2C2C30)
#define UNITYENGINE_RENDERER_SET_MOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x1B2C2C10)
#define UNITYENGINE_RENDERER_SET_PROBEANCHOR_OFFSET UNITYSDK_OFFSET(0x1B2C31A0)
#define UNITYENGINE_RENDERER_SET_RAYTRACINGMODE_OFFSET UNITYSDK_OFFSET(0x1B2C2F70)
#define UNITYENGINE_RENDERER_SET_REALTIMELIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1B2C3270)
#define UNITYENGINE_RENDERER_SET_REALTIMELIGHTMAPSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B2C3320)
#define UNITYENGINE_RENDERER_SET_RECEIVESHADOWS_OFFSET UNITYSDK_OFFSET(0x1B2C2ED0)
#define UNITYENGINE_RENDERER_SET_REFLECTIONPROBEUSAGE_OFFSET UNITYSDK_OFFSET(0x1B2C2F10)
#define UNITYENGINE_RENDERER_SET_RENDERERPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B2C2F50)
#define UNITYENGINE_RENDERER_SET_RENDERFLAG_OFFSET UNITYSDK_OFFSET(0x1B2C36B0)
#define UNITYENGINE_RENDERER_SET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1B2C2F30)
#define UNITYENGINE_RENDERER_SET_RENDERQUERYTYPE_OFFSET UNITYSDK_OFFSET(0x1B2C3690)
#define UNITYENGINE_RENDERER_SET_SHADOWCASTINGMODE_OFFSET UNITYSDK_OFFSET(0x1B2C2BD0)
#define UNITYENGINE_RENDERER_SET_SHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1B2C3400)
#define UNITYENGINE_RENDERER_SET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B2C33E0)
#define UNITYENGINE_RENDERER_SET_SORTINGGROUPID_OFFSET UNITYSDK_OFFSET(0x1B2C2FF0)
#define UNITYENGINE_RENDERER_SET_SORTINGGROUPORDER_OFFSET UNITYSDK_OFFSET(0x1B2C3010)
#define UNITYENGINE_RENDERER_SET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x1B2C2FB0)
#define UNITYENGINE_RENDERER_SET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0x1B2C2F90)
#define UNITYENGINE_RENDERER_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1B2C2FD0)
#define UNITYENGINE_RENDERER_SET_STATICBATCHROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B2C3050)
#define UNITYENGINE_RENDERER_SET_STREAMINGMIPMAPBIAS_OFFSET UNITYSDK_OFFSET(0x1B2C3380)
#define UNITYENGINE_RENDERER_SET_USELIGHTPROBES_OFFSET UNITYSDK_OFFSET(0x1B2C2C70)
#define UNITYENGINE_RENDERER_SET_VCMASK_OFFSET UNITYSDK_OFFSET(0x1B2C36D0)
#define UNITYENGINE_RENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C38D0)

namespace UnityEngine
{
	inline static constexpr unsigned int Renderer_TypeDefinitionIndex = 4121;

	class Renderer : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_castShadows()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_CASTSHADOWS_OFFSET))(this);
		}

		::System::Void set_castShadows(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_CASTSHADOWS_OFFSET))(this, a1);
		}

		::System::Boolean get_motionVectors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_MOTIONVECTORS_OFFSET))(this);
		}

		::System::Void set_motionVectors(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_MOTIONVECTORS_OFFSET))(this, a1);
		}

		::System::Boolean get_useLightProbes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_USELIGHTPROBES_OFFSET))(this);
		}

		::System::Void set_useLightProbes(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_USELIGHTPROBES_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_BOUNDS_OFFSET))(this);
		}

		::System::Void SetOverrideBounds(::System::Boolean a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETOVERRIDEBOUNDS_OFFSET))(this, a1, a2);
		}

		::System::Void SetStaticLightmapST(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETSTATICLIGHTMAPST_OFFSET))(this, a1);
		}

		::UnityEngine::Material* GetMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Material* GetSharedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETSHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void SetMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETMATERIAL_OFFSET))(this, a1);
		}

		::System::Boolean SetSharedMaterialIfNotSame(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETSHAREDMATERIALIFNOTSAME_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Material*>* GetMaterialArray()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETMATERIALARRAY_OFFSET))(this);
		}

		::System::Void CopyMaterialArray(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_COPYMATERIALARRAY_OFFSET))(this, a1);
		}

		::System::Void CopySharedMaterialArray(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_COPYSHAREDMATERIALARRAY_OFFSET))(this, a1);
		}

		::System::Void SetMaterialArray(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETMATERIALARRAY_OFFSET))(this, a1);
		}

		::System::Void Internal_SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_INTERNAL_SETPROPERTYBLOCK_OFFSET))(this, a1);
		}

		::System::Void Internal_GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_INTERNAL_GETPROPERTYBLOCK_OFFSET))(this, a1);
		}

		::System::Void Internal_SetPropertyBlockMaterialIndex(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_INTERNAL_SETPROPERTYBLOCKMATERIALINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void Internal_GetPropertyBlockMaterialIndex(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_INTERNAL_GETPROPERTYBLOCKMATERIALINDEX_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasPropertyBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_HASPROPERTYBLOCK_OFFSET))(this);
		}

		::System::Void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETPROPERTYBLOCK_OFFSET))(this, a1);
		}

		::System::Void SetPropertyBlock_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETPROPERTYBLOCK_1_OFFSET))(this, a1, a2);
		}

		::System::Void GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETPROPERTYBLOCK_OFFSET))(this, a1);
		}

		::System::Void GetPropertyBlock_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETPROPERTYBLOCK_1_OFFSET))(this, a1, a2);
		}

		::System::Void GetClosestReflectionProbesInternal(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETCLOSESTREFLECTIONPROBESINTERNAL_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_isVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_ISVISIBLE_OFFSET))(this);
		}

		::UnityEngine::Rendering::ShadowCastingMode get_shadowCastingMode()
		{
			return ((::UnityEngine::Rendering::ShadowCastingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SHADOWCASTINGMODE_OFFSET))(this);
		}

		::System::Void set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShadowCastingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SHADOWCASTINGMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_receiveShadows()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_RECEIVESHADOWS_OFFSET))(this);
		}

		::System::Void set_receiveShadows(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_RECEIVESHADOWS_OFFSET))(this, a1);
		}

		::System::Boolean get_forceRenderingOff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_FORCERENDERINGOFF_OFFSET))(this);
		}

		::System::Void set_forceRenderingOff(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_FORCERENDERINGOFF_OFFSET))(this, a1);
		}

		::UnityEngine::MotionVectorGenerationMode get_motionVectorGenerationMode()
		{
			return ((::UnityEngine::MotionVectorGenerationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_MOTIONVECTORGENERATIONMODE_OFFSET))(this);
		}

		::System::Void set_motionVectorGenerationMode(::UnityEngine::MotionVectorGenerationMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MotionVectorGenerationMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_MOTIONVECTORGENERATIONMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::LightProbeUsage get_lightProbeUsage()
		{
			return ((::UnityEngine::Rendering::LightProbeUsage(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_LIGHTPROBEUSAGE_OFFSET))(this);
		}

		::System::Void set_lightProbeUsage(::UnityEngine::Rendering::LightProbeUsage a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightProbeUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_LIGHTPROBEUSAGE_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::ReflectionProbeUsage get_reflectionProbeUsage()
		{
			return ((::UnityEngine::Rendering::ReflectionProbeUsage(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_REFLECTIONPROBEUSAGE_OFFSET))(this);
		}

		::System::Void set_reflectionProbeUsage(::UnityEngine::Rendering::ReflectionProbeUsage a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ReflectionProbeUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_REFLECTIONPROBEUSAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_renderingLayerMask()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_RENDERINGLAYERMASK_OFFSET))(this);
		}

		::System::Void set_renderingLayerMask(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_RENDERINGLAYERMASK_OFFSET))(this, a1);
		}

		::System::Int32 get_rendererPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_RENDERERPRIORITY_OFFSET))(this);
		}

		::System::Void set_rendererPriority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_RENDERERPRIORITY_OFFSET))(this, a1);
		}

		::UnityEngine::Experimental::Rendering::RayTracingMode get_rayTracingMode()
		{
			return ((::UnityEngine::Experimental::Rendering::RayTracingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_RAYTRACINGMODE_OFFSET))(this);
		}

		::System::Void set_rayTracingMode(::UnityEngine::Experimental::Rendering::RayTracingMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RayTracingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_RAYTRACINGMODE_OFFSET))(this, a1);
		}

		::System::String* get_sortingLayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SORTINGLAYERNAME_OFFSET))(this);
		}

		::System::Void set_sortingLayerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SORTINGLAYERNAME_OFFSET))(this, a1);
		}

		::System::Int32 get_sortingLayerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SORTINGLAYERID_OFFSET))(this);
		}

		::System::Void set_sortingLayerID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SORTINGLAYERID_OFFSET))(this, a1);
		}

		::System::Int32 get_sortingOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SORTINGORDER_OFFSET))(this);
		}

		::System::Void set_sortingOrder(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SORTINGORDER_OFFSET))(this, a1);
		}

		::System::Int32 get_sortingGroupID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SORTINGGROUPID_OFFSET))(this);
		}

		::System::Void set_sortingGroupID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SORTINGGROUPID_OFFSET))(this, a1);
		}

		::System::Int32 get_sortingGroupOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SORTINGGROUPORDER_OFFSET))(this);
		}

		::System::Void set_sortingGroupOrder(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SORTINGGROUPORDER_OFFSET))(this, a1);
		}

		::System::Boolean get_allowOcclusionWhenDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_ALLOWOCCLUSIONWHENDYNAMIC_OFFSET))(this);
		}

		::System::Void set_allowOcclusionWhenDynamic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_ALLOWOCCLUSIONWHENDYNAMIC_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_staticBatchRootTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_STATICBATCHROOTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_staticBatchRootTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_STATICBATCHROOTTRANSFORM_OFFSET))(this, a1);
		}

		::System::Int32 get_staticBatchIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_STATICBATCHINDEX_OFFSET))(this);
		}

		::System::Void SetStaticBatchInfo(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETSTATICBATCHINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_isPartOfStaticBatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_ISPARTOFSTATICBATCH_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_worldToLocalMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_WORLDTOLOCALMATRIX_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_localToWorldMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_LOCALTOWORLDMATRIX_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_lightProbeProxyVolumeOverride()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_LIGHTPROBEPROXYVOLUMEOVERRIDE_OFFSET))(this);
		}

		::System::Void set_lightProbeProxyVolumeOverride(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_LIGHTPROBEPROXYVOLUMEOVERRIDE_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_probeAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_PROBEANCHOR_OFFSET))(this);
		}

		::System::Void set_probeAnchor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_PROBEANCHOR_OFFSET))(this, a1);
		}

		::System::Int32 GetLightmapIndex(::UnityEngineInternal::LightmapType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngineInternal::LightmapType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETLIGHTMAPINDEX_OFFSET))(this, a1);
		}

		::System::Void SetLightmapIndex(::System::Int32 a1, ::UnityEngineInternal::LightmapType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngineInternal::LightmapType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETLIGHTMAPINDEX_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 GetLightmapST(::UnityEngineInternal::LightmapType a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngineInternal::LightmapType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETLIGHTMAPST_OFFSET))(this, a1);
		}

		::System::Void SetLightmapST(::UnityEngine::Vector4 a1, ::UnityEngineInternal::LightmapType a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngineInternal::LightmapType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETLIGHTMAPST_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_lightmapIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_LIGHTMAPINDEX_OFFSET))(this);
		}

		::System::Void set_lightmapIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_LIGHTMAPINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_realtimeLightmapIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_REALTIMELIGHTMAPINDEX_OFFSET))(this);
		}

		::System::Void set_realtimeLightmapIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_REALTIMELIGHTMAPINDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 get_lightmapScaleOffset()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_LIGHTMAPSCALEOFFSET_OFFSET))(this);
		}

		::System::Void set_lightmapScaleOffset(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_LIGHTMAPSCALEOFFSET_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 get_realtimeLightmapScaleOffset()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_REALTIMELIGHTMAPSCALEOFFSET_OFFSET))(this);
		}

		::System::Void set_realtimeLightmapScaleOffset(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_REALTIMELIGHTMAPSCALEOFFSET_OFFSET))(this, a1);
		}

		::System::Int32 GetMaterialCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETMATERIALCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* GetSharedMaterialArray()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETSHAREDMATERIALARRAY_OFFSET))(this);
		}

		::System::Single get_streamingMipmapBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_STREAMINGMIPMAPBIAS_OFFSET))(this);
		}

		::System::Void set_streamingMipmapBias(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_STREAMINGMIPMAPBIAS_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_materials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_MATERIALS_OFFSET))(this);
		}

		::System::Void set_materials(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_MATERIALS_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_MATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_sharedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void set_sharedMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SHAREDMATERIAL_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_sharedMaterials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SHAREDMATERIALS_OFFSET))(this);
		}

		::System::Void set_sharedMaterials(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SHAREDMATERIALS_OFFSET))(this, a1);
		}

		::System::Void GetMaterials(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETMATERIALS_OFFSET))(this, a1);
		}

		::System::Void GetSharedMaterials(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETSHAREDMATERIALS_OFFSET))(this, a1);
		}

		::System::Void GetClosestReflectionProbes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ReflectionProbeBlendInfo>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ReflectionProbeBlendInfo>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETCLOSESTREFLECTIONPROBES_OFFSET))(this, a1);
		}

		static ::System::Boolean get_checkLightweightDeactivateInternal()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_CHECKLIGHTWEIGHTDEACTIVATEINTERNAL_OFFSET))();
		}

		static ::System::Void set_checkLightweightDeactivateInternal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_CHECKLIGHTWEIGHTDEACTIVATEINTERNAL_OFFSET))(a1);
		}

		static ::System::Boolean get_checkLightweightDeactivate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_CHECKLIGHTWEIGHTDEACTIVATE_OFFSET))();
		}

		static ::System::Void set_checkLightweightDeactivate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_CHECKLIGHTWEIGHTDEACTIVATE_OFFSET))(a1);
		}

		static ::System::UInt32 get_disableCullingRenderingLayerMaskInternal()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_DISABLECULLINGRENDERINGLAYERMASKINTERNAL_OFFSET))();
		}

		static ::System::Void set_disableCullingRenderingLayerMaskInternal(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_DISABLECULLINGRENDERINGLAYERMASKINTERNAL_OFFSET))(a1);
		}

		static ::System::UInt32 get_disableCullingRenderingLayerMask()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_DISABLECULLINGRENDERINGLAYERMASK_OFFSET))();
		}

		static ::System::Void set_disableCullingRenderingLayerMask(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_DISABLECULLINGRENDERINGLAYERMASK_OFFSET))(a1);
		}

		::System::UInt32 get_renderQueryType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_RENDERQUERYTYPE_OFFSET))(this);
		}

		::System::Void set_renderQueryType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_RENDERQUERYTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_renderFlag()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_RENDERFLAG_OFFSET))(this);
		}

		::System::Void set_renderFlag(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_RENDERFLAG_OFFSET))(this, a1);
		}

		::System::Byte get_vCMask()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_VCMASK_OFFSET))(this);
		}

		::System::Void set_vCMask(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_VCMASK_OFFSET))(this, a1);
		}

		::System::Void CopyMaterialArrayFixed(::Il2CppArray<::UnityEngine::Material*>* a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_COPYMATERIALARRAYFIXED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CopySharedMaterialArrayFixed(::Il2CppArray<::UnityEngine::Material*>* a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_COPYSHAREDMATERIALARRAYFIXED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetMaterials_1(::Il2CppArray<::UnityEngine::Material*>*& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETMATERIALS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetSharedMaterials_1(::Il2CppArray<::UnityEngine::Material*>*& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETSHAREDMATERIALS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetSharedMaterials(::Il2CppArray<::UnityEngine::Material*>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETSHAREDMATERIALS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetMatKeyword(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETMATKEYWORD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsMatKeywordEnable(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_ISMATKEYWORDENABLE_OFFSET))(this, a1, a2);
		}

		::System::String* GetRenderKeyword(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETRENDERKEYWORD_OFFSET))(this, a1);
		}

		::System::Boolean GetFloat(::System::Int32 a1, ::System::Int32 a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETFLOAT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetFloatEx(::System::Int32 a1, ::System::Int32 a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETFLOATEX_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFloat(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETFLOAT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GetVector(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector4& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETVECTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetVector(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector4 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETVECTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GetMatrix(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETMATRIX_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetMatrix(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Matrix4x4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETMATRIX_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GetColor(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Color& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETCOLOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetColor(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Color a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETCOLOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Texture* GetTexture(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void SetTexture(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Texture* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETTEXTURE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetGroupCBIndex(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETGROUPCBINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void EnableQueryPerObj()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_ENABLEQUERYPEROBJ_OFFSET))(this);
		}

		::System::Boolean get_doPerObjQuery()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_DOPEROBJQUERY_OFFSET))(this);
		}

		::System::Void set_doPerObjQuery(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_DOPEROBJQUERY_OFFSET))(this, a1);
		}

		::System::Single GetQueryVisRatio(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETQUERYVISRATIO_OFFSET))(this, a1);
		}

		::System::Void AddRenderFlag(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_ADDRENDERFLAG_OFFSET))(this, a1);
		}

		::System::Void RemoveRenderFlag(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_REMOVERENDERFLAG_OFFSET))(this, a1);
		}

		::System::Void get_bounds_Injected(::UnityEngine::Bounds& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_BOUNDS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetStaticLightmapST_Injected(::UnityEngine::Vector4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETSTATICLIGHTMAPST_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_worldToLocalMatrix_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_WORLDTOLOCALMATRIX_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_localToWorldMatrix_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_LOCALTOWORLDMATRIX_INJECTED_OFFSET))(this, a1);
		}

		::System::Void GetLightmapST_Injected(::UnityEngineInternal::LightmapType a1, ::UnityEngine::Vector4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngineInternal::LightmapType, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETLIGHTMAPST_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetLightmapST_Injected(::UnityEngine::Vector4& a1, ::UnityEngineInternal::LightmapType a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&, ::UnityEngineInternal::LightmapType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETLIGHTMAPST_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetVector_Injected(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector4& a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETVECTOR_INJECTED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetMatrix_Injected(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4& a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Matrix4x4&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETMATRIX_INJECTED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetColor_Injected(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Color& a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETCOLOR_INJECTED_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
