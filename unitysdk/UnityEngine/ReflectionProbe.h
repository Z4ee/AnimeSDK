#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ReflectionProbe_ReflectionProbeEvent.h"
#include "unitysdk/UnityEngine/Rendering/CRPProbeDebugInfo.h"
#include "unitysdk/UnityEngine/Rendering/CRPProbeInfo.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionProbeClearFlags.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionProbeMode.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionProbeRefreshMode.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionProbeTimeSlicingMode.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionProbeType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_REFLECTIONPROBE_ADD_DEFAULTREFLECTIONSET_OFFSET UNITYSDK_OFFSET(0x1ED4E7A0)
#define UNITYENGINE_REFLECTIONPROBE_ADD_REFLECTIONPROBECHANGED_OFFSET UNITYSDK_OFFSET(0x1ED4E640)
#define UNITYENGINE_REFLECTIONPROBE_BLENDCUBEMAP_OFFSET UNITYSDK_OFFSET(0x1ED4E5C0)
#define UNITYENGINE_REFLECTIONPROBE_CALLREFLECTIONPROBEEVENT_OFFSET UNITYSDK_OFFSET(0x1ED4E900)
#define UNITYENGINE_REFLECTIONPROBE_CALLSETDEFAULTREFLECTION_OFFSET UNITYSDK_OFFSET(0x1ED4E930)
#define UNITYENGINE_REFLECTIONPROBE_GETACTIVEPROBES_1_OFFSET UNITYSDK_OFFSET(0x1ED4E970)
#define UNITYENGINE_REFLECTIONPROBE_GETACTIVEPROBES_OFFSET UNITYSDK_OFFSET(0x1ED4E960)
#define UNITYENGINE_REFLECTIONPROBE_GET_BACKGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED4E380)
#define UNITYENGINE_REFLECTIONPROBE_GET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1ED4E340)
#define UNITYENGINE_REFLECTIONPROBE_GET_BAKEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ED4E470)
#define UNITYENGINE_REFLECTIONPROBE_GET_BLENDDISTANCE_OFFSET UNITYSDK_OFFSET(0x1ED4E3B0)
#define UNITYENGINE_REFLECTIONPROBE_GET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED4E290)
#define UNITYENGINE_REFLECTIONPROBE_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1ED4E240)
#define UNITYENGINE_REFLECTIONPROBE_GET_BOXPROJECTION_OFFSET UNITYSDK_OFFSET(0x1ED4E3D0)
#define UNITYENGINE_REFLECTIONPROBE_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED4E1B0)
#define UNITYENGINE_REFLECTIONPROBE_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1ED4E160)
#define UNITYENGINE_REFLECTIONPROBE_GET_CLEARFLAGS_OFFSET UNITYSDK_OFFSET(0x1ED4E320)
#define UNITYENGINE_REFLECTIONPROBE_GET_CULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1ED4E300)
#define UNITYENGINE_REFLECTIONPROBE_GET_CUSTOMBAKEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ED4E490)
#define UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTUREHDRDECODEVALUES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED4E620)
#define UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTUREHDRDECODEVALUES_OFFSET UNITYSDK_OFFSET(0x1ED4E5F0)
#define UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ED4E630)
#define UNITYENGINE_REFLECTIONPROBE_GET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1ED4E200)
#define UNITYENGINE_REFLECTIONPROBE_GET_HDR_OFFSET UNITYSDK_OFFSET(0x1ED4E2A0)
#define UNITYENGINE_REFLECTIONPROBE_GET_IMPORTANCE_OFFSET UNITYSDK_OFFSET(0x1ED4E410)
#define UNITYENGINE_REFLECTIONPROBE_GET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x1ED4E220)
#define UNITYENGINE_REFLECTIONPROBE_GET_MAXBAKEDCUBEMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1ED4E5E0)
#define UNITYENGINE_REFLECTIONPROBE_GET_MINBAKEDCUBEMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1ED4E5D0)
#define UNITYENGINE_REFLECTIONPROBE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1ED4E3F0)
#define UNITYENGINE_REFLECTIONPROBE_GET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1ED4E1E0)
#define UNITYENGINE_REFLECTIONPROBE_GET_REALTIMETEXTURE_OFFSET UNITYSDK_OFFSET(0x1ED4E4B0)
#define UNITYENGINE_REFLECTIONPROBE_GET_REFRESHMODE_OFFSET UNITYSDK_OFFSET(0x1ED4E430)
#define UNITYENGINE_REFLECTIONPROBE_GET_RESOLUTION_OFFSET UNITYSDK_OFFSET(0x1ED4E2E0)
#define UNITYENGINE_REFLECTIONPROBE_GET_SHADOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x1ED4E2C0)
#define UNITYENGINE_REFLECTIONPROBE_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED4E130)
#define UNITYENGINE_REFLECTIONPROBE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1ED4E0E0)
#define UNITYENGINE_REFLECTIONPROBE_GET_TEXTUREHDRDECODEVALUES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED4E520)
#define UNITYENGINE_REFLECTIONPROBE_GET_TEXTUREHDRDECODEVALUES_OFFSET UNITYSDK_OFFSET(0x1ED4E4E0)
#define UNITYENGINE_REFLECTIONPROBE_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1ED4E4D0)
#define UNITYENGINE_REFLECTIONPROBE_GET_TIMESLICINGMODE_OFFSET UNITYSDK_OFFSET(0x1ED4E450)
#define UNITYENGINE_REFLECTIONPROBE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1ED4E0C0)
#define UNITYENGINE_REFLECTIONPROBE_ISFINISHEDRENDERING_OFFSET UNITYSDK_OFFSET(0x1ED4E5B0)
#define UNITYENGINE_REFLECTIONPROBE_REMOVE_DEFAULTREFLECTIONSET_OFFSET UNITYSDK_OFFSET(0x1ED4E850)
#define UNITYENGINE_REFLECTIONPROBE_REMOVE_REFLECTIONPROBECHANGED_OFFSET UNITYSDK_OFFSET(0x1ED4E6F0)
#define UNITYENGINE_REFLECTIONPROBE_RENDERPROBE_1_OFFSET UNITYSDK_OFFSET(0x1ED4E570)
#define UNITYENGINE_REFLECTIONPROBE_RENDERPROBE_OFFSET UNITYSDK_OFFSET(0x1ED4E540)
#define UNITYENGINE_REFLECTIONPROBE_RESET_OFFSET UNITYSDK_OFFSET(0x1ED4E530)
#define UNITYENGINE_REFLECTIONPROBE_SCHEDULERENDER_OFFSET UNITYSDK_OFFSET(0x1ED4E5A0)
#define UNITYENGINE_REFLECTIONPROBE_SETGLOBALPROBE_OFFSET UNITYSDK_OFFSET(0x1ED4EA10)
#define UNITYENGINE_REFLECTIONPROBE_SETNULLGLOBALPROBE_OFFSET UNITYSDK_OFFSET(0x1ED4EA20)
#define UNITYENGINE_REFLECTIONPROBE_SET_BACKGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED4E3A0)
#define UNITYENGINE_REFLECTIONPROBE_SET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1ED4E390)
#define UNITYENGINE_REFLECTIONPROBE_SET_BAKEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ED4E480)
#define UNITYENGINE_REFLECTIONPROBE_SET_BLENDDISTANCE_OFFSET UNITYSDK_OFFSET(0x1ED4E3C0)
#define UNITYENGINE_REFLECTIONPROBE_SET_BOXPROJECTION_OFFSET UNITYSDK_OFFSET(0x1ED4E3E0)
#define UNITYENGINE_REFLECTIONPROBE_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED4E1D0)
#define UNITYENGINE_REFLECTIONPROBE_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1ED4E1C0)
#define UNITYENGINE_REFLECTIONPROBE_SET_CLEARFLAGS_OFFSET UNITYSDK_OFFSET(0x1ED4E330)
#define UNITYENGINE_REFLECTIONPROBE_SET_CULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1ED4E310)
#define UNITYENGINE_REFLECTIONPROBE_SET_CUSTOMBAKEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ED4E4A0)
#define UNITYENGINE_REFLECTIONPROBE_SET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1ED4E210)
#define UNITYENGINE_REFLECTIONPROBE_SET_HDR_OFFSET UNITYSDK_OFFSET(0x1ED4E2B0)
#define UNITYENGINE_REFLECTIONPROBE_SET_IMPORTANCE_OFFSET UNITYSDK_OFFSET(0x1ED4E420)
#define UNITYENGINE_REFLECTIONPROBE_SET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x1ED4E230)
#define UNITYENGINE_REFLECTIONPROBE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1ED4E400)
#define UNITYENGINE_REFLECTIONPROBE_SET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1ED4E1F0)
#define UNITYENGINE_REFLECTIONPROBE_SET_REALTIMETEXTURE_OFFSET UNITYSDK_OFFSET(0x1ED4E4C0)
#define UNITYENGINE_REFLECTIONPROBE_SET_REFRESHMODE_OFFSET UNITYSDK_OFFSET(0x1ED4E440)
#define UNITYENGINE_REFLECTIONPROBE_SET_RESOLUTION_OFFSET UNITYSDK_OFFSET(0x1ED4E2F0)
#define UNITYENGINE_REFLECTIONPROBE_SET_SHADOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x1ED4E2D0)
#define UNITYENGINE_REFLECTIONPROBE_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED4E150)
#define UNITYENGINE_REFLECTIONPROBE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1ED4E140)
#define UNITYENGINE_REFLECTIONPROBE_SET_TIMESLICINGMODE_OFFSET UNITYSDK_OFFSET(0x1ED4E460)
#define UNITYENGINE_REFLECTIONPROBE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1ED4E0D0)
#define UNITYENGINE_REFLECTIONPROBE_UPDATEPROBEDATA_1_OFFSET UNITYSDK_OFFSET(0x1ED4EA00)
#define UNITYENGINE_REFLECTIONPROBE_UPDATEPROBEDATA_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED4E9D0)
#define UNITYENGINE_REFLECTIONPROBE_UPDATEPROBEDATA_OFFSET UNITYSDK_OFFSET(0x1ED4E9E0)
#define UNITYENGINE_REFLECTIONPROBE_UPDATEPROBEDEBUGDATA_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED4E9F0)
#define UNITYENGINE_REFLECTIONPROBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED4EA30)

namespace UnityEngine
{
	inline static constexpr unsigned int ReflectionProbe_TypeDefinitionIndex = 4051;

	class ReflectionProbe : public ::UnityEngine::Behaviour
	{
	public:
		static ::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>** StaticGet_reflectionProbeChanged()
		{
			return (::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionProbe_TypeDefinitionIndex)->GetStaticField(0x12380);
		}
		static ::System::Action_1<::UnityEngine::Cubemap*>** StaticGet_defaultReflectionSet()
		{
			return (::System::Action_1<::UnityEngine::Cubemap*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionProbe_TypeDefinitionIndex)->GetStaticField(0x12388);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::ReflectionProbeType get_type()
		{
			return ((::UnityEngine::Rendering::ReflectionProbeType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::UnityEngine::Rendering::ReflectionProbeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ReflectionProbeType))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_TYPE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_SIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_center(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_CENTER_OFFSET))(this, a1);
		}

		::System::Single get_nearClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_NEARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_nearClipPlane(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_NEARCLIPPLANE_OFFSET))(this, a1);
		}

		::System::Single get_farClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_FARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_farClipPlane(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_FARCLIPPLANE_OFFSET))(this, a1);
		}

		::System::Single get_intensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_INTENSITY_OFFSET))(this);
		}

		::System::Void set_intensity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_INTENSITY_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_BOUNDS_OFFSET))(this);
		}

		::System::Boolean get_hdr()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_HDR_OFFSET))(this);
		}

		::System::Void set_hdr(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_HDR_OFFSET))(this, a1);
		}

		::System::Single get_shadowDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_SHADOWDISTANCE_OFFSET))(this);
		}

		::System::Void set_shadowDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_SHADOWDISTANCE_OFFSET))(this, a1);
		}

		::System::Int32 get_resolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_RESOLUTION_OFFSET))(this);
		}

		::System::Void set_resolution(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_RESOLUTION_OFFSET))(this, a1);
		}

		::System::Int32 get_cullingMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_CULLINGMASK_OFFSET))(this);
		}

		::System::Void set_cullingMask(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_CULLINGMASK_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::ReflectionProbeClearFlags get_clearFlags()
		{
			return ((::UnityEngine::Rendering::ReflectionProbeClearFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_CLEARFLAGS_OFFSET))(this);
		}

		::System::Void set_clearFlags(::UnityEngine::Rendering::ReflectionProbeClearFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ReflectionProbeClearFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_CLEARFLAGS_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_backgroundColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_BACKGROUNDCOLOR_OFFSET))(this);
		}

		::System::Void set_backgroundColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_BACKGROUNDCOLOR_OFFSET))(this, a1);
		}

		::System::Single get_blendDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_BLENDDISTANCE_OFFSET))(this);
		}

		::System::Void set_blendDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_BLENDDISTANCE_OFFSET))(this, a1);
		}

		::System::Boolean get_boxProjection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_BOXPROJECTION_OFFSET))(this);
		}

		::System::Void set_boxProjection(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_BOXPROJECTION_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::ReflectionProbeMode get_mode()
		{
			return ((::UnityEngine::Rendering::ReflectionProbeMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::Rendering::ReflectionProbeMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ReflectionProbeMode))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_MODE_OFFSET))(this, a1);
		}

		::System::Int32 get_importance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_IMPORTANCE_OFFSET))(this);
		}

		::System::Void set_importance(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_IMPORTANCE_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::ReflectionProbeRefreshMode get_refreshMode()
		{
			return ((::UnityEngine::Rendering::ReflectionProbeRefreshMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_REFRESHMODE_OFFSET))(this);
		}

		::System::Void set_refreshMode(::UnityEngine::Rendering::ReflectionProbeRefreshMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ReflectionProbeRefreshMode))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_REFRESHMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode get_timeSlicingMode()
		{
			return ((::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_TIMESLICINGMODE_OFFSET))(this);
		}

		::System::Void set_timeSlicingMode(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_TIMESLICINGMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* get_bakedTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_BAKEDTEXTURE_OFFSET))(this);
		}

		::System::Void set_bakedTexture(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_BAKEDTEXTURE_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* get_customBakedTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_CUSTOMBAKEDTEXTURE_OFFSET))(this);
		}

		::System::Void set_customBakedTexture(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_CUSTOMBAKEDTEXTURE_OFFSET))(this, a1);
		}

		::UnityEngine::RenderTexture* get_realtimeTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_REALTIMETEXTURE_OFFSET))(this);
		}

		::System::Void set_realtimeTexture(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_REALTIMETEXTURE_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_TEXTURE_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_textureHDRDecodeValues()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_TEXTUREHDRDECODEVALUES_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_RESET_OFFSET))(this);
		}

		::System::Int32 RenderProbe()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_RENDERPROBE_OFFSET))(this);
		}

		::System::Int32 RenderProbe_1(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_RENDERPROBE_1_OFFSET))(this, a1);
		}

		::System::Boolean IsFinishedRendering(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_ISFINISHEDRENDERING_OFFSET))(this, a1);
		}

		::System::Int32 ScheduleRender(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode a1, ::UnityEngine::RenderTexture* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SCHEDULERENDER_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean BlendCubemap(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3, ::UnityEngine::RenderTexture* a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_BLENDCUBEMAP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 get_minBakedCubemapResolution()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_MINBAKEDCUBEMAPRESOLUTION_OFFSET))();
		}

		static ::System::Int32 get_maxBakedCubemapResolution()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_MAXBAKEDCUBEMAPRESOLUTION_OFFSET))();
		}

		static ::UnityEngine::Vector4 get_defaultTextureHDRDecodeValues()
		{
			return ((::UnityEngine::Vector4(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTUREHDRDECODEVALUES_OFFSET))();
		}

		static ::UnityEngine::Texture* get_defaultTexture()
		{
			return ((::UnityEngine::Texture*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTURE_OFFSET))();
		}

		static ::System::Void add_reflectionProbeChanged(::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* a1)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_ADD_REFLECTIONPROBECHANGED_OFFSET))(a1);
		}

		static ::System::Void remove_reflectionProbeChanged(::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* a1)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_REMOVE_REFLECTIONPROBECHANGED_OFFSET))(a1);
		}

		static ::System::Void add_defaultReflectionSet(::System::Action_1<::UnityEngine::Cubemap*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Cubemap*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_ADD_DEFAULTREFLECTIONSET_OFFSET))(a1);
		}

		static ::System::Void remove_defaultReflectionSet(::System::Action_1<::UnityEngine::Cubemap*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Cubemap*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_REMOVE_DEFAULTREFLECTIONSET_OFFSET))(a1);
		}

		static ::System::Void CallReflectionProbeEvent(::UnityEngine::ReflectionProbe* a1, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent a2)
		{
			return ((::System::Void(*)(::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_CALLREFLECTIONPROBEEVENT_OFFSET))(a1, a2);
		}

		static ::System::Void CallSetDefaultReflection(::UnityEngine::Cubemap* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Cubemap*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_CALLSETDEFAULTREFLECTION_OFFSET))(a1);
		}

		static ::System::Void GetActiveProbes(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GETACTIVEPROBES_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ReflectionProbe*>* GetActiveProbes_1()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ReflectionProbe*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GETACTIVEPROBES_1_OFFSET))();
		}

		static ::System::Void UpdateProbeData_Internal(::UnityEngine::ReflectionProbe* a1, ::UnityEngine::Rendering::CRPProbeInfo& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ReflectionProbe*, ::UnityEngine::Rendering::CRPProbeInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_UPDATEPROBEDATA_INTERNAL_OFFSET))(a1, a2);
		}

		::System::Void UpdateProbeData(::UnityEngine::Rendering::CRPProbeInfo& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPProbeInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_UPDATEPROBEDATA_OFFSET))(this, a1);
		}

		static ::System::Void UpdateProbeDebugData_Internal(::UnityEngine::ReflectionProbe* a1, ::UnityEngine::Rendering::CRPProbeDebugInfo& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ReflectionProbe*, ::UnityEngine::Rendering::CRPProbeDebugInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_UPDATEPROBEDEBUGDATA_INTERNAL_OFFSET))(a1, a2);
		}

		::System::Void UpdateProbeData_1(::UnityEngine::Rendering::CRPProbeDebugInfo& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPProbeDebugInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_UPDATEPROBEDATA_1_OFFSET))(this, a1);
		}

		static ::System::Void SetGlobalProbe(::UnityEngine::Texture* a1, ::UnityEngine::Vector4& a2, ::UnityEngine::Texture* a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::Vector4&, ::UnityEngine::Texture*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SETGLOBALPROBE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SetNullGlobalProbe(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SETNULLGLOBALPROBE_OFFSET))(a1);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_SIZE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_SIZE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_center_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_CENTER_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_center_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_CENTER_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_bounds_Injected(::UnityEngine::Bounds& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_BOUNDS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_backgroundColor_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_BACKGROUNDCOLOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_backgroundColor_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_BACKGROUNDCOLOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_textureHDRDecodeValues_Injected(::UnityEngine::Vector4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_TEXTUREHDRDECODEVALUES_INJECTED_OFFSET))(this, a1);
		}

		static ::System::Void get_defaultTextureHDRDecodeValues_Injected(::UnityEngine::Vector4& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTUREHDRDECODEVALUES_INJECTED_OFFSET))(a1);
		}
	};
}
