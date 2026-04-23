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

#define UNITYENGINE_RENDERER_ADDRENDERFLAG_OFFSET UNITYSDK_OFFSET(0x1A474750)
#define UNITYENGINE_RENDERER_COPYMATERIALARRAYFIXED_OFFSET UNITYSDK_OFFSET(0x1A474580)
#define UNITYENGINE_RENDERER_COPYMATERIALARRAY_OFFSET UNITYSDK_OFFSET(0x1A473C60)
#define UNITYENGINE_RENDERER_COPYSHAREDMATERIALARRAYFIXED_OFFSET UNITYSDK_OFFSET(0x1A474590)
#define UNITYENGINE_RENDERER_COPYSHAREDMATERIALARRAY_OFFSET UNITYSDK_OFFSET(0x1A473C70)
#define UNITYENGINE_RENDERER_ENABLEQUERYPEROBJ_OFFSET UNITYSDK_OFFSET(0x1A474710)
#define UNITYENGINE_RENDERER_GETCLOSESTREFLECTIONPROBESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A473D20)
#define UNITYENGINE_RENDERER_GETCLOSESTREFLECTIONPROBES_OFFSET UNITYSDK_OFFSET(0x1A474490)
#define UNITYENGINE_RENDERER_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1A4746B0)
#define UNITYENGINE_RENDERER_GETFLOATEX_OFFSET UNITYSDK_OFFSET(0x1A474630)
#define UNITYENGINE_RENDERER_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1A474620)
#define UNITYENGINE_RENDERER_GETLIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1A474050)
#define UNITYENGINE_RENDERER_GETLIGHTMAPST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4740B0)
#define UNITYENGINE_RENDERER_GETLIGHTMAPST_OFFSET UNITYSDK_OFFSET(0x1A474070)
#define UNITYENGINE_RENDERER_GETMATERIALARRAY_OFFSET UNITYSDK_OFFSET(0x1A473C50)
#define UNITYENGINE_RENDERER_GETMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4741F0)
#define UNITYENGINE_RENDERER_GETMATERIALS_1_OFFSET UNITYSDK_OFFSET(0x1A4745A0)
#define UNITYENGINE_RENDERER_GETMATERIALS_OFFSET UNITYSDK_OFFSET(0x1A4742B0)
#define UNITYENGINE_RENDERER_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A473C10)
#define UNITYENGINE_RENDERER_GETMATRIX_OFFSET UNITYSDK_OFFSET(0x1A474680)
#define UNITYENGINE_RENDERER_GETPROPERTYBLOCK_1_OFFSET UNITYSDK_OFFSET(0x1A473D10)
#define UNITYENGINE_RENDERER_GETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1A473D00)
#define UNITYENGINE_RENDERER_GETQUERYVISRATIO_OFFSET UNITYSDK_OFFSET(0x1A474740)
#define UNITYENGINE_RENDERER_GETRENDERKEYWORD_OFFSET UNITYSDK_OFFSET(0x1A474610)
#define UNITYENGINE_RENDERER_GETSHAREDMATERIALARRAY_OFFSET UNITYSDK_OFFSET(0x1A474200)
#define UNITYENGINE_RENDERER_GETSHAREDMATERIALS_1_OFFSET UNITYSDK_OFFSET(0x1A4745C0)
#define UNITYENGINE_RENDERER_GETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1A4743A0)
#define UNITYENGINE_RENDERER_GETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A473C20)
#define UNITYENGINE_RENDERER_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A4746E0)
#define UNITYENGINE_RENDERER_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x1A474650)
#define UNITYENGINE_RENDERER_GET_ALLOWOCCLUSIONWHENDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1A473EC0)
#define UNITYENGINE_RENDERER_GET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A473B90)
#define UNITYENGINE_RENDERER_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1A473B40)
#define UNITYENGINE_RENDERER_GET_CASTSHADOWS_OFFSET UNITYSDK_OFFSET(0x1A473A20)
#define UNITYENGINE_RENDERER_GET_CHECKLIGHTWEIGHTDEACTIVATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4744A0)
#define UNITYENGINE_RENDERER_GET_CHECKLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A4744C0)
#define UNITYENGINE_RENDERER_GET_DISABLECULLINGRENDERINGLAYERMASKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4744E0)
#define UNITYENGINE_RENDERER_GET_DISABLECULLINGRENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1A474500)
#define UNITYENGINE_RENDERER_GET_DOPEROBJQUERY_OFFSET UNITYSDK_OFFSET(0x1A474720)
#define UNITYENGINE_RENDERER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A473D30)
#define UNITYENGINE_RENDERER_GET_FORCERENDERINGOFF_OFFSET UNITYSDK_OFFSET(0x1A473D80)
#define UNITYENGINE_RENDERER_GET_ISPARTOFSTATICBATCH_OFFSET UNITYSDK_OFFSET(0x1A473F20)
#define UNITYENGINE_RENDERER_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A473D50)
#define UNITYENGINE_RENDERER_GET_LIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1A4740E0)
#define UNITYENGINE_RENDERER_GET_LIGHTMAPSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1A474120)
#define UNITYENGINE_RENDERER_GET_LIGHTPROBEPROXYVOLUMEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1A474010)
#define UNITYENGINE_RENDERER_GET_LIGHTPROBEUSAGE_OFFSET UNITYSDK_OFFSET(0x1A473B00)
#define UNITYENGINE_RENDERER_GET_LOCALTOWORLDMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A474000)
#define UNITYENGINE_RENDERER_GET_LOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1A473FA0)
#define UNITYENGINE_RENDERER_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x1A474230)
#define UNITYENGINE_RENDERER_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1A474250)
#define UNITYENGINE_RENDERER_GET_MOTIONVECTORGENERATIONMODE_OFFSET UNITYSDK_OFFSET(0x1A473AA0)
#define UNITYENGINE_RENDERER_GET_MOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x1A473A80)
#define UNITYENGINE_RENDERER_GET_PROBEANCHOR_OFFSET UNITYSDK_OFFSET(0x1A474030)
#define UNITYENGINE_RENDERER_GET_RAYTRACINGMODE_OFFSET UNITYSDK_OFFSET(0x1A473E00)
#define UNITYENGINE_RENDERER_GET_REALTIMELIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1A474100)
#define UNITYENGINE_RENDERER_GET_REALTIMELIGHTMAPSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1A474180)
#define UNITYENGINE_RENDERER_GET_RECEIVESHADOWS_OFFSET UNITYSDK_OFFSET(0x1A473D60)
#define UNITYENGINE_RENDERER_GET_REFLECTIONPROBEUSAGE_OFFSET UNITYSDK_OFFSET(0x1A473DA0)
#define UNITYENGINE_RENDERER_GET_RENDERERPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A473DE0)
#define UNITYENGINE_RENDERER_GET_RENDERFLAG_OFFSET UNITYSDK_OFFSET(0x1A474540)
#define UNITYENGINE_RENDERER_GET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1A473DC0)
#define UNITYENGINE_RENDERER_GET_RENDERQUERYTYPE_OFFSET UNITYSDK_OFFSET(0x1A474520)
#define UNITYENGINE_RENDERER_GET_SHADOWCASTINGMODE_OFFSET UNITYSDK_OFFSET(0x1A473A40)
#define UNITYENGINE_RENDERER_GET_SHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1A474290)
#define UNITYENGINE_RENDERER_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A474270)
#define UNITYENGINE_RENDERER_GET_SORTINGGROUPID_OFFSET UNITYSDK_OFFSET(0x1A473E80)
#define UNITYENGINE_RENDERER_GET_SORTINGGROUPORDER_OFFSET UNITYSDK_OFFSET(0x1A473EA0)
#define UNITYENGINE_RENDERER_GET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x1A473E40)
#define UNITYENGINE_RENDERER_GET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0x1A473E20)
#define UNITYENGINE_RENDERER_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1A473E60)
#define UNITYENGINE_RENDERER_GET_STATICBATCHINDEX_OFFSET UNITYSDK_OFFSET(0x1A473F00)
#define UNITYENGINE_RENDERER_GET_STATICBATCHROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A473EE0)
#define UNITYENGINE_RENDERER_GET_STREAMINGMIPMAPBIAS_OFFSET UNITYSDK_OFFSET(0x1A474210)
#define UNITYENGINE_RENDERER_GET_USELIGHTPROBES_OFFSET UNITYSDK_OFFSET(0x1A473AE0)
#define UNITYENGINE_RENDERER_GET_VCMASK_OFFSET UNITYSDK_OFFSET(0x1A474560)
#define UNITYENGINE_RENDERER_GET_WORLDTOLOCALMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A473F90)
#define UNITYENGINE_RENDERER_GET_WORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x1A473F30)
#define UNITYENGINE_RENDERER_HASPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1A473CD0)
#define UNITYENGINE_RENDERER_INTERNAL_GETPROPERTYBLOCKMATERIALINDEX_OFFSET UNITYSDK_OFFSET(0x1A473CC0)
#define UNITYENGINE_RENDERER_INTERNAL_GETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1A473CA0)
#define UNITYENGINE_RENDERER_INTERNAL_SETPROPERTYBLOCKMATERIALINDEX_OFFSET UNITYSDK_OFFSET(0x1A473CB0)
#define UNITYENGINE_RENDERER_INTERNAL_SETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1A473C90)
#define UNITYENGINE_RENDERER_ISMATKEYWORDENABLE_OFFSET UNITYSDK_OFFSET(0x1A474600)
#define UNITYENGINE_RENDERER_REMOVERENDERFLAG_OFFSET UNITYSDK_OFFSET(0x1A474760)
#define UNITYENGINE_RENDERER_SETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4746D0)
#define UNITYENGINE_RENDERER_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1A4746C0)
#define UNITYENGINE_RENDERER_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1A474640)
#define UNITYENGINE_RENDERER_SETGROUPCBINDEX_OFFSET UNITYSDK_OFFSET(0x1A474700)
#define UNITYENGINE_RENDERER_SETLIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1A474060)
#define UNITYENGINE_RENDERER_SETLIGHTMAPST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4740D0)
#define UNITYENGINE_RENDERER_SETLIGHTMAPST_OFFSET UNITYSDK_OFFSET(0x1A4740C0)
#define UNITYENGINE_RENDERER_SETMATERIALARRAY_OFFSET UNITYSDK_OFFSET(0x1A473C80)
#define UNITYENGINE_RENDERER_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A473C30)
#define UNITYENGINE_RENDERER_SETMATKEYWORD_OFFSET UNITYSDK_OFFSET(0x1A4745F0)
#define UNITYENGINE_RENDERER_SETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4746A0)
#define UNITYENGINE_RENDERER_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x1A474690)
#define UNITYENGINE_RENDERER_SETOVERRIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A473BA0)
#define UNITYENGINE_RENDERER_SETPROPERTYBLOCK_1_OFFSET UNITYSDK_OFFSET(0x1A473CF0)
#define UNITYENGINE_RENDERER_SETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1A473CE0)
#define UNITYENGINE_RENDERER_SETSHAREDMATERIALIFNOTSAME_OFFSET UNITYSDK_OFFSET(0x1A473C40)
#define UNITYENGINE_RENDERER_SETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1A4745E0)
#define UNITYENGINE_RENDERER_SETSTATICBATCHINFO_OFFSET UNITYSDK_OFFSET(0x1A473F10)
#define UNITYENGINE_RENDERER_SETSTATICLIGHTMAPST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A473C00)
#define UNITYENGINE_RENDERER_SETSTATICLIGHTMAPST_OFFSET UNITYSDK_OFFSET(0x1A473BF0)
#define UNITYENGINE_RENDERER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A4746F0)
#define UNITYENGINE_RENDERER_SETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A474670)
#define UNITYENGINE_RENDERER_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x1A474660)
#define UNITYENGINE_RENDERER_SET_ALLOWOCCLUSIONWHENDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1A473ED0)
#define UNITYENGINE_RENDERER_SET_CASTSHADOWS_OFFSET UNITYSDK_OFFSET(0x1A473A50)
#define UNITYENGINE_RENDERER_SET_CHECKLIGHTWEIGHTDEACTIVATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4744B0)
#define UNITYENGINE_RENDERER_SET_CHECKLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A4744D0)
#define UNITYENGINE_RENDERER_SET_DISABLECULLINGRENDERINGLAYERMASKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4744F0)
#define UNITYENGINE_RENDERER_SET_DISABLECULLINGRENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1A474510)
#define UNITYENGINE_RENDERER_SET_DOPEROBJQUERY_OFFSET UNITYSDK_OFFSET(0x1A474730)
#define UNITYENGINE_RENDERER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A473D40)
#define UNITYENGINE_RENDERER_SET_FORCERENDERINGOFF_OFFSET UNITYSDK_OFFSET(0x1A473D90)
#define UNITYENGINE_RENDERER_SET_LIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1A4740F0)
#define UNITYENGINE_RENDERER_SET_LIGHTMAPSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1A474160)
#define UNITYENGINE_RENDERER_SET_LIGHTPROBEPROXYVOLUMEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1A474020)
#define UNITYENGINE_RENDERER_SET_LIGHTPROBEUSAGE_OFFSET UNITYSDK_OFFSET(0x1A473B30)
#define UNITYENGINE_RENDERER_SET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x1A474240)
#define UNITYENGINE_RENDERER_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1A474260)
#define UNITYENGINE_RENDERER_SET_MOTIONVECTORGENERATIONMODE_OFFSET UNITYSDK_OFFSET(0x1A473AD0)
#define UNITYENGINE_RENDERER_SET_MOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x1A473AB0)
#define UNITYENGINE_RENDERER_SET_PROBEANCHOR_OFFSET UNITYSDK_OFFSET(0x1A474040)
#define UNITYENGINE_RENDERER_SET_RAYTRACINGMODE_OFFSET UNITYSDK_OFFSET(0x1A473E10)
#define UNITYENGINE_RENDERER_SET_REALTIMELIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1A474110)
#define UNITYENGINE_RENDERER_SET_REALTIMELIGHTMAPSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1A4741C0)
#define UNITYENGINE_RENDERER_SET_RECEIVESHADOWS_OFFSET UNITYSDK_OFFSET(0x1A473D70)
#define UNITYENGINE_RENDERER_SET_REFLECTIONPROBEUSAGE_OFFSET UNITYSDK_OFFSET(0x1A473DB0)
#define UNITYENGINE_RENDERER_SET_RENDERERPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A473DF0)
#define UNITYENGINE_RENDERER_SET_RENDERFLAG_OFFSET UNITYSDK_OFFSET(0x1A474550)
#define UNITYENGINE_RENDERER_SET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1A473DD0)
#define UNITYENGINE_RENDERER_SET_RENDERQUERYTYPE_OFFSET UNITYSDK_OFFSET(0x1A474530)
#define UNITYENGINE_RENDERER_SET_SHADOWCASTINGMODE_OFFSET UNITYSDK_OFFSET(0x1A473A70)
#define UNITYENGINE_RENDERER_SET_SHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1A4742A0)
#define UNITYENGINE_RENDERER_SET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A474280)
#define UNITYENGINE_RENDERER_SET_SORTINGGROUPID_OFFSET UNITYSDK_OFFSET(0x1A473E90)
#define UNITYENGINE_RENDERER_SET_SORTINGGROUPORDER_OFFSET UNITYSDK_OFFSET(0x1A473EB0)
#define UNITYENGINE_RENDERER_SET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x1A473E50)
#define UNITYENGINE_RENDERER_SET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0x1A473E30)
#define UNITYENGINE_RENDERER_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1A473E70)
#define UNITYENGINE_RENDERER_SET_STATICBATCHROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A473EF0)
#define UNITYENGINE_RENDERER_SET_STREAMINGMIPMAPBIAS_OFFSET UNITYSDK_OFFSET(0x1A474220)
#define UNITYENGINE_RENDERER_SET_USELIGHTPROBES_OFFSET UNITYSDK_OFFSET(0x1A473B10)
#define UNITYENGINE_RENDERER_SET_VCMASK_OFFSET UNITYSDK_OFFSET(0x1A474570)
#define UNITYENGINE_RENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A474770)

namespace UnityEngine
{
	inline static constexpr unsigned int Renderer_TypeDefinitionIndex = 3947;

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

		::System::Void set_castShadows(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_CASTSHADOWS_OFFSET))(this, value);
		}

		::System::Boolean get_motionVectors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_MOTIONVECTORS_OFFSET))(this);
		}

		::System::Void set_motionVectors(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_MOTIONVECTORS_OFFSET))(this, value);
		}

		::System::Boolean get_useLightProbes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_USELIGHTPROBES_OFFSET))(this);
		}

		::System::Void set_useLightProbes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_USELIGHTPROBES_OFFSET))(this, value);
		}

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_BOUNDS_OFFSET))(this);
		}

		::System::Void SetOverrideBounds(::System::Boolean override, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETOVERRIDEBOUNDS_OFFSET))(this, override, bounds);
		}

		::System::Void SetStaticLightmapST(::UnityEngine::Vector4 st)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETSTATICLIGHTMAPST_OFFSET))(this, st);
		}

		::UnityEngine::Material* GetMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Material* GetSharedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETSHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void SetMaterial(::UnityEngine::Material* m)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETMATERIAL_OFFSET))(this, m);
		}

		::System::Boolean SetSharedMaterialIfNotSame(::UnityEngine::Material* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETSHAREDMATERIALIFNOTSAME_OFFSET))(this, m);
		}

		::Il2CppArray<::UnityEngine::Material*>* GetMaterialArray()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETMATERIALARRAY_OFFSET))(this);
		}

		::System::Void CopyMaterialArray(::Il2CppArray<::UnityEngine::Material*>* m)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_COPYMATERIALARRAY_OFFSET))(this, m);
		}

		::System::Void CopySharedMaterialArray(::Il2CppArray<::UnityEngine::Material*>* m)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_COPYSHAREDMATERIALARRAY_OFFSET))(this, m);
		}

		::System::Void SetMaterialArray(::Il2CppArray<::UnityEngine::Material*>* m)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETMATERIALARRAY_OFFSET))(this, m);
		}

		::System::Void Internal_SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_INTERNAL_SETPROPERTYBLOCK_OFFSET))(this, properties);
		}

		::System::Void Internal_GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* dest)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_INTERNAL_GETPROPERTYBLOCK_OFFSET))(this, dest);
		}

		::System::Void Internal_SetPropertyBlockMaterialIndex(::UnityEngine::MaterialPropertyBlock* properties, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_INTERNAL_SETPROPERTYBLOCKMATERIALINDEX_OFFSET))(this, properties, materialIndex);
		}

		::System::Void Internal_GetPropertyBlockMaterialIndex(::UnityEngine::MaterialPropertyBlock* dest, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_INTERNAL_GETPROPERTYBLOCKMATERIALINDEX_OFFSET))(this, dest, materialIndex);
		}

		::System::Boolean HasPropertyBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_HASPROPERTYBLOCK_OFFSET))(this);
		}

		::System::Void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETPROPERTYBLOCK_OFFSET))(this, properties);
		}

		::System::Void SetPropertyBlock_1(::UnityEngine::MaterialPropertyBlock* properties, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETPROPERTYBLOCK_1_OFFSET))(this, properties, materialIndex);
		}

		::System::Void GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETPROPERTYBLOCK_OFFSET))(this, properties);
		}

		::System::Void GetPropertyBlock_1(::UnityEngine::MaterialPropertyBlock* properties, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETPROPERTYBLOCK_1_OFFSET))(this, properties, materialIndex);
		}

		::System::Void GetClosestReflectionProbesInternal(::System::Object* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETCLOSESTREFLECTIONPROBESINTERNAL_OFFSET))(this, result);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_isVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_ISVISIBLE_OFFSET))(this);
		}

		::UnityEngine::Rendering::ShadowCastingMode get_shadowCastingMode()
		{
			return ((::UnityEngine::Rendering::ShadowCastingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SHADOWCASTINGMODE_OFFSET))(this);
		}

		::System::Void set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShadowCastingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SHADOWCASTINGMODE_OFFSET))(this, value);
		}

		::System::Boolean get_receiveShadows()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_RECEIVESHADOWS_OFFSET))(this);
		}

		::System::Void set_receiveShadows(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_RECEIVESHADOWS_OFFSET))(this, value);
		}

		::System::Boolean get_forceRenderingOff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_FORCERENDERINGOFF_OFFSET))(this);
		}

		::System::Void set_forceRenderingOff(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_FORCERENDERINGOFF_OFFSET))(this, value);
		}

		::UnityEngine::MotionVectorGenerationMode get_motionVectorGenerationMode()
		{
			return ((::UnityEngine::MotionVectorGenerationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_MOTIONVECTORGENERATIONMODE_OFFSET))(this);
		}

		::System::Void set_motionVectorGenerationMode(::UnityEngine::MotionVectorGenerationMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MotionVectorGenerationMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_MOTIONVECTORGENERATIONMODE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::LightProbeUsage get_lightProbeUsage()
		{
			return ((::UnityEngine::Rendering::LightProbeUsage(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_LIGHTPROBEUSAGE_OFFSET))(this);
		}

		::System::Void set_lightProbeUsage(::UnityEngine::Rendering::LightProbeUsage value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightProbeUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_LIGHTPROBEUSAGE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::ReflectionProbeUsage get_reflectionProbeUsage()
		{
			return ((::UnityEngine::Rendering::ReflectionProbeUsage(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_REFLECTIONPROBEUSAGE_OFFSET))(this);
		}

		::System::Void set_reflectionProbeUsage(::UnityEngine::Rendering::ReflectionProbeUsage value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ReflectionProbeUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_REFLECTIONPROBEUSAGE_OFFSET))(this, value);
		}

		::System::UInt32 get_renderingLayerMask()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_RENDERINGLAYERMASK_OFFSET))(this);
		}

		::System::Void set_renderingLayerMask(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_RENDERINGLAYERMASK_OFFSET))(this, value);
		}

		::System::Int32 get_rendererPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_RENDERERPRIORITY_OFFSET))(this);
		}

		::System::Void set_rendererPriority(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_RENDERERPRIORITY_OFFSET))(this, value);
		}

		::UnityEngine::Experimental::Rendering::RayTracingMode get_rayTracingMode()
		{
			return ((::UnityEngine::Experimental::Rendering::RayTracingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_RAYTRACINGMODE_OFFSET))(this);
		}

		::System::Void set_rayTracingMode(::UnityEngine::Experimental::Rendering::RayTracingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RayTracingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_RAYTRACINGMODE_OFFSET))(this, value);
		}

		::System::String* get_sortingLayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SORTINGLAYERNAME_OFFSET))(this);
		}

		::System::Void set_sortingLayerName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SORTINGLAYERNAME_OFFSET))(this, value);
		}

		::System::Int32 get_sortingLayerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SORTINGLAYERID_OFFSET))(this);
		}

		::System::Void set_sortingLayerID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SORTINGLAYERID_OFFSET))(this, value);
		}

		::System::Int32 get_sortingOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SORTINGORDER_OFFSET))(this);
		}

		::System::Void set_sortingOrder(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SORTINGORDER_OFFSET))(this, value);
		}

		::System::Int32 get_sortingGroupID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SORTINGGROUPID_OFFSET))(this);
		}

		::System::Void set_sortingGroupID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SORTINGGROUPID_OFFSET))(this, value);
		}

		::System::Int32 get_sortingGroupOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SORTINGGROUPORDER_OFFSET))(this);
		}

		::System::Void set_sortingGroupOrder(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SORTINGGROUPORDER_OFFSET))(this, value);
		}

		::System::Boolean get_allowOcclusionWhenDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_ALLOWOCCLUSIONWHENDYNAMIC_OFFSET))(this);
		}

		::System::Void set_allowOcclusionWhenDynamic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_ALLOWOCCLUSIONWHENDYNAMIC_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_staticBatchRootTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_STATICBATCHROOTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_staticBatchRootTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_STATICBATCHROOTTRANSFORM_OFFSET))(this, value);
		}

		::System::Int32 get_staticBatchIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_STATICBATCHINDEX_OFFSET))(this);
		}

		::System::Void SetStaticBatchInfo(::System::Int32 firstSubMesh, ::System::Int32 subMeshCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETSTATICBATCHINFO_OFFSET))(this, firstSubMesh, subMeshCount);
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

		::System::Void set_lightProbeProxyVolumeOverride(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_LIGHTPROBEPROXYVOLUMEOVERRIDE_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_probeAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_PROBEANCHOR_OFFSET))(this);
		}

		::System::Void set_probeAnchor(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_PROBEANCHOR_OFFSET))(this, value);
		}

		::System::Int32 GetLightmapIndex(::UnityEngineInternal::LightmapType lt)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngineInternal::LightmapType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETLIGHTMAPINDEX_OFFSET))(this, lt);
		}

		::System::Void SetLightmapIndex(::System::Int32 index, ::UnityEngineInternal::LightmapType lt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngineInternal::LightmapType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETLIGHTMAPINDEX_OFFSET))(this, index, lt);
		}

		::UnityEngine::Vector4 GetLightmapST(::UnityEngineInternal::LightmapType lt)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngineInternal::LightmapType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETLIGHTMAPST_OFFSET))(this, lt);
		}

		::System::Void SetLightmapST(::UnityEngine::Vector4 st, ::UnityEngineInternal::LightmapType lt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngineInternal::LightmapType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETLIGHTMAPST_OFFSET))(this, st, lt);
		}

		::System::Int32 get_lightmapIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_LIGHTMAPINDEX_OFFSET))(this);
		}

		::System::Void set_lightmapIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_LIGHTMAPINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_realtimeLightmapIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_REALTIMELIGHTMAPINDEX_OFFSET))(this);
		}

		::System::Void set_realtimeLightmapIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_REALTIMELIGHTMAPINDEX_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_lightmapScaleOffset()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_LIGHTMAPSCALEOFFSET_OFFSET))(this);
		}

		::System::Void set_lightmapScaleOffset(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_LIGHTMAPSCALEOFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_realtimeLightmapScaleOffset()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_REALTIMELIGHTMAPSCALEOFFSET_OFFSET))(this);
		}

		::System::Void set_realtimeLightmapScaleOffset(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_REALTIMELIGHTMAPSCALEOFFSET_OFFSET))(this, value);
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

		::System::Void set_streamingMipmapBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_STREAMINGMIPMAPBIAS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_materials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_MATERIALS_OFFSET))(this);
		}

		::System::Void set_materials(::Il2CppArray<::UnityEngine::Material*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_MATERIALS_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_MATERIAL_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_sharedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void set_sharedMaterial(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SHAREDMATERIAL_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_sharedMaterials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SHAREDMATERIALS_OFFSET))(this);
		}

		::System::Void set_sharedMaterials(::Il2CppArray<::UnityEngine::Material*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SHAREDMATERIALS_OFFSET))(this, value);
		}

		::System::Void GetMaterials(::System::Collections::Generic::List_1<::UnityEngine::Material*>* m)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETMATERIALS_OFFSET))(this, m);
		}

		::System::Void GetSharedMaterials(::System::Collections::Generic::List_1<::UnityEngine::Material*>* m)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETSHAREDMATERIALS_OFFSET))(this, m);
		}

		::System::Void GetClosestReflectionProbes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ReflectionProbeBlendInfo>* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ReflectionProbeBlendInfo>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETCLOSESTREFLECTIONPROBES_OFFSET))(this, result);
		}

		static ::System::Boolean get_checkLightweightDeactivateInternal()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_CHECKLIGHTWEIGHTDEACTIVATEINTERNAL_OFFSET))();
		}

		static ::System::Void set_checkLightweightDeactivateInternal(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_CHECKLIGHTWEIGHTDEACTIVATEINTERNAL_OFFSET))(value);
		}

		static ::System::Boolean get_checkLightweightDeactivate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_CHECKLIGHTWEIGHTDEACTIVATE_OFFSET))();
		}

		static ::System::Void set_checkLightweightDeactivate(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_CHECKLIGHTWEIGHTDEACTIVATE_OFFSET))(value);
		}

		static ::System::UInt32 get_disableCullingRenderingLayerMaskInternal()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_DISABLECULLINGRENDERINGLAYERMASKINTERNAL_OFFSET))();
		}

		static ::System::Void set_disableCullingRenderingLayerMaskInternal(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_DISABLECULLINGRENDERINGLAYERMASKINTERNAL_OFFSET))(value);
		}

		static ::System::UInt32 get_disableCullingRenderingLayerMask()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_DISABLECULLINGRENDERINGLAYERMASK_OFFSET))();
		}

		static ::System::Void set_disableCullingRenderingLayerMask(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_DISABLECULLINGRENDERINGLAYERMASK_OFFSET))(value);
		}

		::System::UInt32 get_renderQueryType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_RENDERQUERYTYPE_OFFSET))(this);
		}

		::System::Void set_renderQueryType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_RENDERQUERYTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_renderFlag()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_RENDERFLAG_OFFSET))(this);
		}

		::System::Void set_renderFlag(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_RENDERFLAG_OFFSET))(this, value);
		}

		::System::Byte get_vCMask()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_VCMASK_OFFSET))(this);
		}

		::System::Void set_vCMask(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_VCMASK_OFFSET))(this, value);
		}

		::System::Void CopyMaterialArrayFixed(::Il2CppArray<::UnityEngine::Material*>* m, ::System::Int32& offset, ::System::Int32& count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_COPYMATERIALARRAYFIXED_OFFSET))(this, m, offset, count);
		}

		::System::Void CopySharedMaterialArrayFixed(::Il2CppArray<::UnityEngine::Material*>* m, ::System::Int32& offset, ::System::Int32& count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_COPYSHAREDMATERIALARRAYFIXED_OFFSET))(this, m, offset, count);
		}

		::System::Void GetMaterials_1(::Il2CppArray<::UnityEngine::Material*>*& matArray, ::System::Int32& offset, ::System::Int32& count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETMATERIALS_1_OFFSET))(this, matArray, offset, count);
		}

		::System::Void GetSharedMaterials_1(::Il2CppArray<::UnityEngine::Material*>*& matArray, ::System::Int32& offset, ::System::Int32& count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETSHAREDMATERIALS_1_OFFSET))(this, matArray, offset, count);
		}

		::System::Void SetSharedMaterials(::Il2CppArray<::UnityEngine::Material*>* matArray, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETSHAREDMATERIALS_OFFSET))(this, matArray, offset, count);
		}

		::System::Void SetMatKeyword(::System::String* keyword, ::System::Boolean enable, ::System::Int32 index, ::System::Boolean clear)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETMATKEYWORD_OFFSET))(this, keyword, enable, index, clear);
		}

		::System::Boolean IsMatKeywordEnable(::System::String* keyword, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_ISMATKEYWORDENABLE_OFFSET))(this, keyword, index);
		}

		::System::String* GetRenderKeyword(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETRENDERKEYWORD_OFFSET))(this, index);
		}

		::System::Boolean GetFloat(::System::Int32 nameID, ::System::Int32 index, ::System::Single& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETFLOAT_OFFSET))(this, nameID, index, v);
		}

		::System::Boolean GetFloatEx(::System::Int32 nameID, ::System::Int32 index, ::System::Single& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETFLOATEX_OFFSET))(this, nameID, index, v);
		}

		::System::Void SetFloat(::System::Int32 nameID, ::System::Int32 index, ::System::Single v, ::System::Boolean testProp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETFLOAT_OFFSET))(this, nameID, index, v, testProp);
		}

		::System::Boolean GetVector(::System::Int32 nameID, ::System::Int32 index, ::UnityEngine::Vector4& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETVECTOR_OFFSET))(this, nameID, index, v);
		}

		::System::Void SetVector(::System::Int32 nameID, ::System::Int32 index, ::UnityEngine::Vector4 v, ::System::Boolean testProp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETVECTOR_OFFSET))(this, nameID, index, v, testProp);
		}

		::System::Boolean GetMatrix(::System::Int32 nameID, ::System::Int32 index, ::UnityEngine::Matrix4x4& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETMATRIX_OFFSET))(this, nameID, index, v);
		}

		::System::Void SetMatrix(::System::Int32 nameID, ::System::Int32 index, ::UnityEngine::Matrix4x4 v, ::System::Boolean testProp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Matrix4x4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETMATRIX_OFFSET))(this, nameID, index, v, testProp);
		}

		::System::Boolean GetColor(::System::Int32 nameID, ::System::Int32 index, ::UnityEngine::Color& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETCOLOR_OFFSET))(this, nameID, index, v);
		}

		::System::Void SetColor(::System::Int32 nameID, ::System::Int32 index, ::UnityEngine::Color v, ::System::Boolean testProp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETCOLOR_OFFSET))(this, nameID, index, v, testProp);
		}

		::UnityEngine::Texture* GetTexture(::System::Int32 nameID, ::System::Int32 index)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETTEXTURE_OFFSET))(this, nameID, index);
		}

		::System::Void SetTexture(::System::Int32 nameID, ::System::Int32 index, ::UnityEngine::Texture* v, ::System::Boolean testProp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETTEXTURE_OFFSET))(this, nameID, index, v, testProp);
		}

		::System::Void SetGroupCBIndex(::System::Int32 matIndex, ::System::UInt32 cbindex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETGROUPCBINDEX_OFFSET))(this, matIndex, cbindex);
		}

		::System::Void EnableQueryPerObj()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_ENABLEQUERYPEROBJ_OFFSET))(this);
		}

		::System::Boolean get_doPerObjQuery()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_DOPEROBJQUERY_OFFSET))(this);
		}

		::System::Void set_doPerObjQuery(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_DOPEROBJQUERY_OFFSET))(this, value);
		}

		::System::Single GetQueryVisRatio(::System::Int32 materialIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETQUERYVISRATIO_OFFSET))(this, materialIndex);
		}

		::System::Void AddRenderFlag(::System::UInt32 f)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_ADDRENDERFLAG_OFFSET))(this, f);
		}

		::System::Void RemoveRenderFlag(::System::UInt32 f)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_REMOVERENDERFLAG_OFFSET))(this, f);
		}

		::System::Void get_bounds_Injected(::UnityEngine::Bounds& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_BOUNDS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void SetStaticLightmapST_Injected(::UnityEngine::Vector4& st)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETSTATICLIGHTMAPST_INJECTED_OFFSET))(this, st);
		}

		::System::Void get_worldToLocalMatrix_Injected(::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_WORLDTOLOCALMATRIX_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_localToWorldMatrix_Injected(::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_LOCALTOWORLDMATRIX_INJECTED_OFFSET))(this, ret);
		}

		::System::Void GetLightmapST_Injected(::UnityEngineInternal::LightmapType lt, ::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngineInternal::LightmapType, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETLIGHTMAPST_INJECTED_OFFSET))(this, lt, ret);
		}

		::System::Void SetLightmapST_Injected(::UnityEngine::Vector4& st, ::UnityEngineInternal::LightmapType lt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&, ::UnityEngineInternal::LightmapType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETLIGHTMAPST_INJECTED_OFFSET))(this, st, lt);
		}

		::System::Void SetVector_Injected(::System::Int32 nameID, ::System::Int32 index, ::UnityEngine::Vector4& v, ::System::Boolean testProp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETVECTOR_INJECTED_OFFSET))(this, nameID, index, v, testProp);
		}

		::System::Void SetMatrix_Injected(::System::Int32 nameID, ::System::Int32 index, ::UnityEngine::Matrix4x4& v, ::System::Boolean testProp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Matrix4x4&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETMATRIX_INJECTED_OFFSET))(this, nameID, index, v, testProp);
		}

		::System::Void SetColor_Injected(::System::Int32 nameID, ::System::Int32 index, ::UnityEngine::Color& v, ::System::Boolean testProp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETCOLOR_INJECTED_OFFSET))(this, nameID, index, v, testProp);
		}
	};
}
