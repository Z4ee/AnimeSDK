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
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RENDERER_COPYMATERIALARRAY_OFFSET UNITYSDK_OFFSET(0x1D736310)
#define UNITYENGINE_RENDERER_COPYSHAREDMATERIALARRAY_OFFSET UNITYSDK_OFFSET(0x1D736320)
#define UNITYENGINE_RENDERER_GETCLOSESTREFLECTIONPROBESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D736410)
#define UNITYENGINE_RENDERER_GETCLOSESTREFLECTIONPROBES_OFFSET UNITYSDK_OFFSET(0x1D736F20)
#define UNITYENGINE_RENDERER_GETCUSTOMPROPERTYCOLORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D736AE0)
#define UNITYENGINE_RENDERER_GETCUSTOMPROPERTYCOLORIMPL_OFFSET UNITYSDK_OFFSET(0x1D736AA0)
#define UNITYENGINE_RENDERER_GETCUSTOMPROPERTYCOLOR_OFFSET UNITYSDK_OFFSET(0x1D736BD0)
#define UNITYENGINE_RENDERER_GETCUSTOMPROPERTYFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x1D736A20)
#define UNITYENGINE_RENDERER_GETCUSTOMPROPERTYFLOAT_OFFSET UNITYSDK_OFFSET(0x1D736B20)
#define UNITYENGINE_RENDERER_GETCUSTOMPROPERTYVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D736A90)
#define UNITYENGINE_RENDERER_GETCUSTOMPROPERTYVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x1D736A50)
#define UNITYENGINE_RENDERER_GETCUSTOMPROPERTYVECTOR_OFFSET UNITYSDK_OFFSET(0x1D736B90)
#define UNITYENGINE_RENDERER_GETLIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1D736810)
#define UNITYENGINE_RENDERER_GETLIGHTMAPST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D736870)
#define UNITYENGINE_RENDERER_GETLIGHTMAPST_OFFSET UNITYSDK_OFFSET(0x1D736830)
#define UNITYENGINE_RENDERER_GETMATERIALARRAY_OFFSET UNITYSDK_OFFSET(0x1D736300)
#define UNITYENGINE_RENDERER_GETMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1D7369F0)
#define UNITYENGINE_RENDERER_GETMATERIALSVERSION_OFFSET UNITYSDK_OFFSET(0x1D7362F0)
#define UNITYENGINE_RENDERER_GETMATERIALS_OFFSET UNITYSDK_OFFSET(0x1D736CC0)
#define UNITYENGINE_RENDERER_GETMATERIALWITHINDEX_OFFSET UNITYSDK_OFFSET(0x1D7362B0)
#define UNITYENGINE_RENDERER_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D736290)
#define UNITYENGINE_RENDERER_GETNAPCB_OFFSET UNITYSDK_OFFSET(0x1D736400)
#define UNITYENGINE_RENDERER_GETNEWCUSTOMPROPERTYSETMODE_OFFSET UNITYSDK_OFFSET(0x1D736F70)
#define UNITYENGINE_RENDERER_GETPROPERTYBLOCK_1_OFFSET UNITYSDK_OFFSET(0x1D7363E0)
#define UNITYENGINE_RENDERER_GETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1D7363D0)
#define UNITYENGINE_RENDERER_GETREFRESHWHENENABLED_OFFSET UNITYSDK_OFFSET(0x1D7368A0)
#define UNITYENGINE_RENDERER_GETSHAREDMATERIALARRAY_OFFSET UNITYSDK_OFFSET(0x1D736A00)
#define UNITYENGINE_RENDERER_GETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1D736DF0)
#define UNITYENGINE_RENDERER_GETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D7362A0)
#define UNITYENGINE_RENDERER_GET_ALLOWOCCLUSIONWHENDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1D736660)
#define UNITYENGINE_RENDERER_GET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D736200)
#define UNITYENGINE_RENDERER_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1D7361B0)
#define UNITYENGINE_RENDERER_GET_BREFRESHWHENENABLED_OFFSET UNITYSDK_OFFSET(0x1D7368C0)
#define UNITYENGINE_RENDERER_GET_CASTSHADOWS_OFFSET UNITYSDK_OFFSET(0x1D736090)
#define UNITYENGINE_RENDERER_GET_CULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D736600)
#define UNITYENGINE_RENDERER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1D736420)
#define UNITYENGINE_RENDERER_GET_FORCERENDERINGOFF_OFFSET UNITYSDK_OFFSET(0x1D7364A0)
#define UNITYENGINE_RENDERER_GET_HIGHSHADINGRATE_OFFSET UNITYSDK_OFFSET(0x1D736480)
#define UNITYENGINE_RENDERER_GET_ISPARTOFSTATICBATCH_OFFSET UNITYSDK_OFFSET(0x1D7366C0)
#define UNITYENGINE_RENDERER_GET_ISVISIBLEINCURRENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1D736450)
#define UNITYENGINE_RENDERER_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1D736440)
#define UNITYENGINE_RENDERER_GET_LIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1D7368E0)
#define UNITYENGINE_RENDERER_GET_LIGHTMAPSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D736920)
#define UNITYENGINE_RENDERER_GET_LIGHTPROBEPROXYVOLUMEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D7367B0)
#define UNITYENGINE_RENDERER_GET_LIGHTPROBEUSAGE_OFFSET UNITYSDK_OFFSET(0x1D736170)
#define UNITYENGINE_RENDERER_GET_LOCALBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D736260)
#define UNITYENGINE_RENDERER_GET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D736210)
#define UNITYENGINE_RENDERER_GET_LOCALTOWORLDMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7367A0)
#define UNITYENGINE_RENDERER_GET_LOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1D736740)
#define UNITYENGINE_RENDERER_GET_MATERIALSVERSION_OFFSET UNITYSDK_OFFSET(0x1D736CB0)
#define UNITYENGINE_RENDERER_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x1D736C30)
#define UNITYENGINE_RENDERER_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1D736C50)
#define UNITYENGINE_RENDERER_GET_MOTIONVECTORGENERATIONMODE_OFFSET UNITYSDK_OFFSET(0x1D736110)
#define UNITYENGINE_RENDERER_GET_MOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x1D7360F0)
#define UNITYENGINE_RENDERER_GET_NAPDRAWSET_OFFSET UNITYSDK_OFFSET(0x1D7367F0)
#define UNITYENGINE_RENDERER_GET_NEEDHIZCULLING_OFFSET UNITYSDK_OFFSET(0x1D736F40)
#define UNITYENGINE_RENDERER_GET_PROBEANCHOR_OFFSET UNITYSDK_OFFSET(0x1D7367D0)
#define UNITYENGINE_RENDERER_GET_RAYTRACINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1D736500)
#define UNITYENGINE_RENDERER_GET_RAYTRACINGMODE_OFFSET UNITYSDK_OFFSET(0x1D736540)
#define UNITYENGINE_RENDERER_GET_REALTIMELIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1D736900)
#define UNITYENGINE_RENDERER_GET_REALTIMELIGHTMAPSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D736980)
#define UNITYENGINE_RENDERER_GET_RECEIVESHADOWS_OFFSET UNITYSDK_OFFSET(0x1D736460)
#define UNITYENGINE_RENDERER_GET_REFLECTIONPROBEUSAGE_OFFSET UNITYSDK_OFFSET(0x1D7364C0)
#define UNITYENGINE_RENDERER_GET_RENDERERPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D736520)
#define UNITYENGINE_RENDERER_GET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1D7364E0)
#define UNITYENGINE_RENDERER_GET_SHADOWCASTERCULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D736620)
#define UNITYENGINE_RENDERER_GET_SHADOWCASTINGMODE_OFFSET UNITYSDK_OFFSET(0x1D7360B0)
#define UNITYENGINE_RENDERER_GET_SHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1D736C90)
#define UNITYENGINE_RENDERER_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D736C70)
#define UNITYENGINE_RENDERER_GET_SORTINGGROUPID_OFFSET UNITYSDK_OFFSET(0x1D7365C0)
#define UNITYENGINE_RENDERER_GET_SORTINGGROUPORDER_OFFSET UNITYSDK_OFFSET(0x1D7365E0)
#define UNITYENGINE_RENDERER_GET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x1D736580)
#define UNITYENGINE_RENDERER_GET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0x1D736560)
#define UNITYENGINE_RENDERER_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1D7365A0)
#define UNITYENGINE_RENDERER_GET_STATICBATCHINDEX_OFFSET UNITYSDK_OFFSET(0x1D7366A0)
#define UNITYENGINE_RENDERER_GET_STATICBATCHROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D736680)
#define UNITYENGINE_RENDERER_GET_SUPPORTSRAYTRACING_OFFSET UNITYSDK_OFFSET(0x1D736F30)
#define UNITYENGINE_RENDERER_GET_TEXTURESTREAMINGCALCSCALE_OFFSET UNITYSDK_OFFSET(0x1D736640)
#define UNITYENGINE_RENDERER_GET_USELIGHTPROBES_OFFSET UNITYSDK_OFFSET(0x1D736150)
#define UNITYENGINE_RENDERER_GET_WORLDTOLOCALMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D736730)
#define UNITYENGINE_RENDERER_GET_WORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x1D7366D0)
#define UNITYENGINE_RENDERER_HASPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1D736380)
#define UNITYENGINE_RENDERER_INTERNAL_GETNAPCB_OFFSET UNITYSDK_OFFSET(0x1D7363A0)
#define UNITYENGINE_RENDERER_INTERNAL_GETPROPERTYBLOCKMATERIALINDEX_OFFSET UNITYSDK_OFFSET(0x1D736370)
#define UNITYENGINE_RENDERER_INTERNAL_GETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1D736350)
#define UNITYENGINE_RENDERER_INTERNAL_SETNAPCB_OFFSET UNITYSDK_OFFSET(0x1D736390)
#define UNITYENGINE_RENDERER_INTERNAL_SETPROPERTYBLOCKMATERIALINDEX_OFFSET UNITYSDK_OFFSET(0x1D736360)
#define UNITYENGINE_RENDERER_INTERNAL_SETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1D736340)
#define UNITYENGINE_RENDERER_PUSHMATERIALASLASTNEWINDEX_OFFSET UNITYSDK_OFFSET(0x1D7362E0)
#define UNITYENGINE_RENDERER_SETCUSTOMPROPERTYCOLOR_OFFSET UNITYSDK_OFFSET(0x1D736B30)
#define UNITYENGINE_RENDERER_SETCUSTOMPROPERTYFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x1D736A10)
#define UNITYENGINE_RENDERER_SETCUSTOMPROPERTYFLOAT_OFFSET UNITYSDK_OFFSET(0x1D736B10)
#define UNITYENGINE_RENDERER_SETCUSTOMPROPERTYISINSTAINCINGIMPL_OFFSET UNITYSDK_OFFSET(0x1D736B00)
#define UNITYENGINE_RENDERER_SETCUSTOMPROPERTYISINSTAINCING_OFFSET UNITYSDK_OFFSET(0x1D736C20)
#define UNITYENGINE_RENDERER_SETCUSTOMPROPERTYVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1D736AF0)
#define UNITYENGINE_RENDERER_SETCUSTOMPROPERTYVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1D736C10)
#define UNITYENGINE_RENDERER_SETCUSTOMPROPERTYVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D736A40)
#define UNITYENGINE_RENDERER_SETCUSTOMPROPERTYVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x1D736A30)
#define UNITYENGINE_RENDERER_SETCUSTOMPROPERTYVECTOR_OFFSET UNITYSDK_OFFSET(0x1D736B60)
#define UNITYENGINE_RENDERER_SETLIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1D736820)
#define UNITYENGINE_RENDERER_SETLIGHTMAPST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D736890)
#define UNITYENGINE_RENDERER_SETLIGHTMAPST_OFFSET UNITYSDK_OFFSET(0x1D736880)
#define UNITYENGINE_RENDERER_SETMATERIALARRAY_OFFSET UNITYSDK_OFFSET(0x1D736330)
#define UNITYENGINE_RENDERER_SETMATERIALWITHINDEX_OFFSET UNITYSDK_OFFSET(0x1D7362D0)
#define UNITYENGINE_RENDERER_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D7362C0)
#define UNITYENGINE_RENDERER_SETNAPCB_OFFSET UNITYSDK_OFFSET(0x1D7363F0)
#define UNITYENGINE_RENDERER_SETNEWCUSTOMPROPERTYSETMODE_OFFSET UNITYSDK_OFFSET(0x1D736F60)
#define UNITYENGINE_RENDERER_SETPROPERTYBLOCK_1_OFFSET UNITYSDK_OFFSET(0x1D7363C0)
#define UNITYENGINE_RENDERER_SETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1D7363B0)
#define UNITYENGINE_RENDERER_SETREFRESHWHENENABLED_OFFSET UNITYSDK_OFFSET(0x1D7368B0)
#define UNITYENGINE_RENDERER_SETSTATICBATCHINFO_OFFSET UNITYSDK_OFFSET(0x1D7366B0)
#define UNITYENGINE_RENDERER_SETSTATICLIGHTMAPST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D736280)
#define UNITYENGINE_RENDERER_SETSTATICLIGHTMAPST_OFFSET UNITYSDK_OFFSET(0x1D736270)
#define UNITYENGINE_RENDERER_SET_ALLOWOCCLUSIONWHENDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1D736670)
#define UNITYENGINE_RENDERER_SET_BREFRESHWHENENABLED_OFFSET UNITYSDK_OFFSET(0x1D7368D0)
#define UNITYENGINE_RENDERER_SET_CASTSHADOWS_OFFSET UNITYSDK_OFFSET(0x1D7360C0)
#define UNITYENGINE_RENDERER_SET_CULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D736610)
#define UNITYENGINE_RENDERER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1D736430)
#define UNITYENGINE_RENDERER_SET_FORCERENDERINGOFF_OFFSET UNITYSDK_OFFSET(0x1D7364B0)
#define UNITYENGINE_RENDERER_SET_HIGHSHADINGRATE_OFFSET UNITYSDK_OFFSET(0x1D736490)
#define UNITYENGINE_RENDERER_SET_LIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1D7368F0)
#define UNITYENGINE_RENDERER_SET_LIGHTMAPSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D736960)
#define UNITYENGINE_RENDERER_SET_LIGHTPROBEPROXYVOLUMEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D7367C0)
#define UNITYENGINE_RENDERER_SET_LIGHTPROBEUSAGE_OFFSET UNITYSDK_OFFSET(0x1D7361A0)
#define UNITYENGINE_RENDERER_SET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x1D736C40)
#define UNITYENGINE_RENDERER_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1D736C60)
#define UNITYENGINE_RENDERER_SET_MOTIONVECTORGENERATIONMODE_OFFSET UNITYSDK_OFFSET(0x1D736140)
#define UNITYENGINE_RENDERER_SET_MOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x1D736120)
#define UNITYENGINE_RENDERER_SET_NAPDRAWSET_OFFSET UNITYSDK_OFFSET(0x1D736800)
#define UNITYENGINE_RENDERER_SET_NEEDHIZCULLING_OFFSET UNITYSDK_OFFSET(0x1D736F50)
#define UNITYENGINE_RENDERER_SET_PROBEANCHOR_OFFSET UNITYSDK_OFFSET(0x1D7367E0)
#define UNITYENGINE_RENDERER_SET_RAYTRACINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1D736510)
#define UNITYENGINE_RENDERER_SET_RAYTRACINGMODE_OFFSET UNITYSDK_OFFSET(0x1D736550)
#define UNITYENGINE_RENDERER_SET_REALTIMELIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1D736910)
#define UNITYENGINE_RENDERER_SET_REALTIMELIGHTMAPSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D7369C0)
#define UNITYENGINE_RENDERER_SET_RECEIVESHADOWS_OFFSET UNITYSDK_OFFSET(0x1D736470)
#define UNITYENGINE_RENDERER_SET_REFLECTIONPROBEUSAGE_OFFSET UNITYSDK_OFFSET(0x1D7364D0)
#define UNITYENGINE_RENDERER_SET_RENDERERPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D736530)
#define UNITYENGINE_RENDERER_SET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1D7364F0)
#define UNITYENGINE_RENDERER_SET_SHADOWCASTERCULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D736630)
#define UNITYENGINE_RENDERER_SET_SHADOWCASTINGMODE_OFFSET UNITYSDK_OFFSET(0x1D7360E0)
#define UNITYENGINE_RENDERER_SET_SHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1D736CA0)
#define UNITYENGINE_RENDERER_SET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D736C80)
#define UNITYENGINE_RENDERER_SET_SORTINGGROUPID_OFFSET UNITYSDK_OFFSET(0x1D7365D0)
#define UNITYENGINE_RENDERER_SET_SORTINGGROUPORDER_OFFSET UNITYSDK_OFFSET(0x1D7365F0)
#define UNITYENGINE_RENDERER_SET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x1D736590)
#define UNITYENGINE_RENDERER_SET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0x1D736570)
#define UNITYENGINE_RENDERER_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1D7365B0)
#define UNITYENGINE_RENDERER_SET_STATICBATCHROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D736690)
#define UNITYENGINE_RENDERER_SET_TEXTURESTREAMINGCALCSCALE_OFFSET UNITYSDK_OFFSET(0x1D736650)
#define UNITYENGINE_RENDERER_SET_USELIGHTPROBES_OFFSET UNITYSDK_OFFSET(0x1D736180)
#define UNITYENGINE_RENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D736F80)

namespace UnityEngine
{
	inline static constexpr unsigned int Renderer_TypeDefinitionIndex = 5198;

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

		::UnityEngine::Bounds get_localBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_LOCALBOUNDS_OFFSET))(this);
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

		::UnityEngine::Material* GetMaterialWithIndex(::System::Int32 count)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETMATERIALWITHINDEX_OFFSET))(this, count);
		}

		::System::Void SetMaterial(::UnityEngine::Material* m)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETMATERIAL_OFFSET))(this, m);
		}

		::System::Void SetMaterialWithIndex(::System::Int32 index, ::UnityEngine::Material* m)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETMATERIALWITHINDEX_OFFSET))(this, index, m);
		}

		::System::Void PushMaterialAsLastNewIndex(::UnityEngine::Material* m)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_PUSHMATERIALASLASTNEWINDEX_OFFSET))(this, m);
		}

		::System::Int32 GetMaterialsVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETMATERIALSVERSION_OFFSET))(this);
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

		::System::Boolean Internal_SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_INTERNAL_SETPROPERTYBLOCK_OFFSET))(this, properties);
		}

		::System::Void Internal_GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* dest)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_INTERNAL_GETPROPERTYBLOCK_OFFSET))(this, dest);
		}

		::System::Boolean Internal_SetPropertyBlockMaterialIndex(::UnityEngine::MaterialPropertyBlock* properties, ::System::Int32 materialIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_INTERNAL_SETPROPERTYBLOCKMATERIALINDEX_OFFSET))(this, properties, materialIndex);
		}

		::System::Void Internal_GetPropertyBlockMaterialIndex(::UnityEngine::MaterialPropertyBlock* dest, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_INTERNAL_GETPROPERTYBLOCKMATERIALINDEX_OFFSET))(this, dest, materialIndex);
		}

		::System::Boolean HasPropertyBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_HASPROPERTYBLOCK_OFFSET))(this);
		}

		::System::Void Internal_SetNapCB(::UnityEngine::ComputeBuffer* napCB, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_INTERNAL_SETNAPCB_OFFSET))(this, napCB, offset, size);
		}

		::System::UInt64 Internal_GetNapCB()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_INTERNAL_GETNAPCB_OFFSET))(this);
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

		::System::Void SetNapCB(::UnityEngine::ComputeBuffer* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETNAPCB_OFFSET))(this, buffer, offset, size);
		}

		::System::UInt64 GetNapCB()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETNAPCB_OFFSET))(this);
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

		::System::Boolean get_isVisibleInCurrentCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_ISVISIBLEINCURRENTCAMERA_OFFSET))(this);
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

		::System::Boolean get_highShadingRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_HIGHSHADINGRATE_OFFSET))(this);
		}

		::System::Void set_highShadingRate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_HIGHSHADINGRATE_OFFSET))(this, value);
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

		::System::Byte get_rayTracingLayerMask()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_RAYTRACINGLAYERMASK_OFFSET))(this);
		}

		::System::Void set_rayTracingLayerMask(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_RAYTRACINGLAYERMASK_OFFSET))(this, value);
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

		::System::Single get_cullingDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_CULLINGDISTANCE_OFFSET))(this);
		}

		::System::Void set_cullingDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_CULLINGDISTANCE_OFFSET))(this, value);
		}

		::System::Single get_shadowCasterCullingDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SHADOWCASTERCULLINGDISTANCE_OFFSET))(this);
		}

		::System::Void set_shadowCasterCullingDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_SHADOWCASTERCULLINGDISTANCE_OFFSET))(this, value);
		}

		::System::Single get_textureStreamingCalcScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_TEXTURESTREAMINGCALCSCALE_OFFSET))(this);
		}

		::System::Void set_textureStreamingCalcScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_TEXTURESTREAMINGCALCSCALE_OFFSET))(this, value);
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

		::System::Byte get_napDrawSet()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_NAPDRAWSET_OFFSET))(this);
		}

		::System::Void set_napDrawSet(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_NAPDRAWSET_OFFSET))(this, value);
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

		::System::Boolean GetRefreshWhenEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETREFRESHWHENENABLED_OFFSET))(this);
		}

		::System::Void SetRefreshWhenEnabled(::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETREFRESHWHENENABLED_OFFSET))(this, val);
		}

		::System::Boolean get_bRefreshWhenEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_BREFRESHWHENENABLED_OFFSET))(this);
		}

		::System::Void set_bRefreshWhenEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_BREFRESHWHENENABLED_OFFSET))(this, value);
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

		::System::Void SetCustomPropertyFloatImpl(::System::Int32 propID, ::System::Single val, ::System::Boolean updateHash)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETCUSTOMPROPERTYFLOATIMPL_OFFSET))(this, propID, val, updateHash);
		}

		::System::Single GetCustomPropertyFloatImpl(::System::Int32 propID)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETCUSTOMPROPERTYFLOATIMPL_OFFSET))(this, propID);
		}

		::System::Void SetCustomPropertyVectorImpl(::System::Int32 propID, ::UnityEngine::Vector4 val, ::System::Boolean isColor, ::System::Boolean updateHash)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETCUSTOMPROPERTYVECTORIMPL_OFFSET))(this, propID, val, isColor, updateHash);
		}

		::UnityEngine::Vector4 GetCustomPropertyVectorImpl(::System::Int32 propID)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETCUSTOMPROPERTYVECTORIMPL_OFFSET))(this, propID);
		}

		::UnityEngine::Color GetCustomPropertyColorImpl(::System::Int32 propID)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETCUSTOMPROPERTYCOLORIMPL_OFFSET))(this, propID);
		}

		::System::Void SetCustomPropertyVectorArrayImpl(::System::Int32 propID, ::Il2CppArray<::UnityEngine::Vector4>* va, ::System::Boolean updateHash)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETCUSTOMPROPERTYVECTORARRAYIMPL_OFFSET))(this, propID, va, updateHash);
		}

		::System::Void SetCustomPropertyIsInstaincingImpl(::System::Boolean val, ::System::Boolean updateHash)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETCUSTOMPROPERTYISINSTAINCINGIMPL_OFFSET))(this, val, updateHash);
		}

		::System::Void SetCustomPropertyFloat(::System::Int32 propID, ::System::Single val, ::System::Boolean updateHash)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETCUSTOMPROPERTYFLOAT_OFFSET))(this, propID, val, updateHash);
		}

		::System::Single GetCustomPropertyFloat(::System::Int32 propID)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETCUSTOMPROPERTYFLOAT_OFFSET))(this, propID);
		}

		::System::Void SetCustomPropertyColor(::System::Int32 propID, ::UnityEngine::Color col, ::System::Boolean updateHash)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETCUSTOMPROPERTYCOLOR_OFFSET))(this, propID, col, updateHash);
		}

		::System::Void SetCustomPropertyVector(::System::Int32 propID, ::UnityEngine::Vector4 val, ::System::Boolean isColor, ::System::Boolean updateHash)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETCUSTOMPROPERTYVECTOR_OFFSET))(this, propID, val, isColor, updateHash);
		}

		::UnityEngine::Vector4 GetCustomPropertyVector(::System::Int32 propID)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETCUSTOMPROPERTYVECTOR_OFFSET))(this, propID);
		}

		::UnityEngine::Color GetCustomPropertyColor(::System::Int32 propID)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETCUSTOMPROPERTYCOLOR_OFFSET))(this, propID);
		}

		::System::Void SetCustomPropertyVectorArray(::System::Int32 propID, ::Il2CppArray<::UnityEngine::Vector4>* va, ::System::Boolean updateHash)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETCUSTOMPROPERTYVECTORARRAY_OFFSET))(this, propID, va, updateHash);
		}

		::System::Void SetCustomPropertyIsInstaincing(::System::Boolean val, ::System::Boolean updateHash)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETCUSTOMPROPERTYISINSTAINCING_OFFSET))(this, val, updateHash);
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

		::System::Int32 get_materialsVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_MATERIALSVERSION_OFFSET))(this);
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

		::System::Boolean get_supportsRayTracing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_SUPPORTSRAYTRACING_OFFSET))(this);
		}

		::System::Boolean get_NeedHizCulling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_NEEDHIZCULLING_OFFSET))(this);
		}

		::System::Void set_NeedHizCulling(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SET_NEEDHIZCULLING_OFFSET))(this, value);
		}

		static ::System::Void SetNewCustomPropertySetMode(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETNEWCUSTOMPROPERTYSETMODE_OFFSET))(enable);
		}

		static ::System::Boolean GetNewCustomPropertySetMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETNEWCUSTOMPROPERTYSETMODE_OFFSET))();
		}

		::System::Void get_bounds_Injected(::UnityEngine::Bounds& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_BOUNDS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_localBounds_Injected(::UnityEngine::Bounds& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GET_LOCALBOUNDS_INJECTED_OFFSET))(this, ret);
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

		::System::Void SetCustomPropertyVectorImpl_Injected(::System::Int32 propID, ::UnityEngine::Vector4& val, ::System::Boolean isColor, ::System::Boolean updateHash)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_SETCUSTOMPROPERTYVECTORIMPL_INJECTED_OFFSET))(this, propID, val, isColor, updateHash);
		}

		::System::Void GetCustomPropertyVectorImpl_Injected(::System::Int32 propID, ::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETCUSTOMPROPERTYVECTORIMPL_INJECTED_OFFSET))(this, propID, ret);
		}

		::System::Void GetCustomPropertyColorImpl_Injected(::System::Int32 propID, ::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERER_GETCUSTOMPROPERTYCOLORIMPL_INJECTED_OFFSET))(this, propID, ret);
		}
	};
}
