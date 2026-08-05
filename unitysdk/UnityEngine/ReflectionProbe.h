#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPAdditionalProbeData.h"
#include "unitysdk/UnityEngine/ReflectionProbe_ReflectionProbeEvent.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionProbeClearFlags.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionProbeMode.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionProbeRefreshMode.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionProbeTimeSlicingMode.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionProbeType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_REFLECTIONPROBE_ADD_DEFAULTREFLECTIONSET_OFFSET UNITYSDK_OFFSET(0x1E48EDE0)
#define UNITYENGINE_REFLECTIONPROBE_ADD_REFLECTIONPROBECHANGED_OFFSET UNITYSDK_OFFSET(0x1E48ECC0)
#define UNITYENGINE_REFLECTIONPROBE_BLENDCUBEMAP_OFFSET UNITYSDK_OFFSET(0x1E48EC40)
#define UNITYENGINE_REFLECTIONPROBE_CALLREFLECTIONPROBEEVENT_OFFSET UNITYSDK_OFFSET(0x1E48EF00)
#define UNITYENGINE_REFLECTIONPROBE_CALLSETDEFAULTREFLECTION_OFFSET UNITYSDK_OFFSET(0x1E48EF70)
#define UNITYENGINE_REFLECTIONPROBE_GETADDITIONALDATACS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E48F040)
#define UNITYENGINE_REFLECTIONPROBE_GETADDITIONALDATACS_OFFSET UNITYSDK_OFFSET(0x1E48EFF0)
#define UNITYENGINE_REFLECTIONPROBE_GET_BACKGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E48EA00)
#define UNITYENGINE_REFLECTIONPROBE_GET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1E48E9C0)
#define UNITYENGINE_REFLECTIONPROBE_GET_BAKEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E48EAF0)
#define UNITYENGINE_REFLECTIONPROBE_GET_BLENDDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E48EA30)
#define UNITYENGINE_REFLECTIONPROBE_GET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E48E910)
#define UNITYENGINE_REFLECTIONPROBE_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1E48E8C0)
#define UNITYENGINE_REFLECTIONPROBE_GET_BOXPROJECTION_OFFSET UNITYSDK_OFFSET(0x1E48EA50)
#define UNITYENGINE_REFLECTIONPROBE_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E48E830)
#define UNITYENGINE_REFLECTIONPROBE_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1E48E7E0)
#define UNITYENGINE_REFLECTIONPROBE_GET_CLEARFLAGS_OFFSET UNITYSDK_OFFSET(0x1E48E9A0)
#define UNITYENGINE_REFLECTIONPROBE_GET_CULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1E48E980)
#define UNITYENGINE_REFLECTIONPROBE_GET_CUSTOMBAKEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E48EB10)
#define UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTUREHDRDECODEVALUES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E48ECA0)
#define UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTUREHDRDECODEVALUES_OFFSET UNITYSDK_OFFSET(0x1E48EC70)
#define UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E48ECB0)
#define UNITYENGINE_REFLECTIONPROBE_GET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1E48E880)
#define UNITYENGINE_REFLECTIONPROBE_GET_HDR_OFFSET UNITYSDK_OFFSET(0x1E48E920)
#define UNITYENGINE_REFLECTIONPROBE_GET_IMPORTANCE_OFFSET UNITYSDK_OFFSET(0x1E48EA90)
#define UNITYENGINE_REFLECTIONPROBE_GET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x1E48E8A0)
#define UNITYENGINE_REFLECTIONPROBE_GET_MAXBAKEDCUBEMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1E48EC60)
#define UNITYENGINE_REFLECTIONPROBE_GET_MINBAKEDCUBEMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1E48EC50)
#define UNITYENGINE_REFLECTIONPROBE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1E48EA70)
#define UNITYENGINE_REFLECTIONPROBE_GET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1E48E860)
#define UNITYENGINE_REFLECTIONPROBE_GET_REALTIMETEXTURE_OFFSET UNITYSDK_OFFSET(0x1E48EB30)
#define UNITYENGINE_REFLECTIONPROBE_GET_REFRESHMODE_OFFSET UNITYSDK_OFFSET(0x1E48EAB0)
#define UNITYENGINE_REFLECTIONPROBE_GET_RESOLUTION_OFFSET UNITYSDK_OFFSET(0x1E48E960)
#define UNITYENGINE_REFLECTIONPROBE_GET_SHADOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E48E940)
#define UNITYENGINE_REFLECTIONPROBE_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E48E7B0)
#define UNITYENGINE_REFLECTIONPROBE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1E48E760)
#define UNITYENGINE_REFLECTIONPROBE_GET_TEXTUREHDRDECODEVALUES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E48EBA0)
#define UNITYENGINE_REFLECTIONPROBE_GET_TEXTUREHDRDECODEVALUES_OFFSET UNITYSDK_OFFSET(0x1E48EB60)
#define UNITYENGINE_REFLECTIONPROBE_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1E48EB50)
#define UNITYENGINE_REFLECTIONPROBE_GET_TIMESLICINGMODE_OFFSET UNITYSDK_OFFSET(0x1E48EAD0)
#define UNITYENGINE_REFLECTIONPROBE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E48E740)
#define UNITYENGINE_REFLECTIONPROBE_ISFINISHEDRENDERING_OFFSET UNITYSDK_OFFSET(0x1E48EC30)
#define UNITYENGINE_REFLECTIONPROBE_REMOVE_DEFAULTREFLECTIONSET_OFFSET UNITYSDK_OFFSET(0x1E48EE70)
#define UNITYENGINE_REFLECTIONPROBE_REMOVE_REFLECTIONPROBECHANGED_OFFSET UNITYSDK_OFFSET(0x1E48ED50)
#define UNITYENGINE_REFLECTIONPROBE_RENDERPROBE_1_OFFSET UNITYSDK_OFFSET(0x1E48EBF0)
#define UNITYENGINE_REFLECTIONPROBE_RENDERPROBE_OFFSET UNITYSDK_OFFSET(0x1E48EBC0)
#define UNITYENGINE_REFLECTIONPROBE_RESET_OFFSET UNITYSDK_OFFSET(0x1E48EBB0)
#define UNITYENGINE_REFLECTIONPROBE_SCHEDULERENDER_OFFSET UNITYSDK_OFFSET(0x1E48EC20)
#define UNITYENGINE_REFLECTIONPROBE_SETADDITIONALDATA_OFFSET UNITYSDK_OFFSET(0x1E48EFE0)
#define UNITYENGINE_REFLECTIONPROBE_SET_BACKGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E48EA20)
#define UNITYENGINE_REFLECTIONPROBE_SET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1E48EA10)
#define UNITYENGINE_REFLECTIONPROBE_SET_BAKEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E48EB00)
#define UNITYENGINE_REFLECTIONPROBE_SET_BLENDDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E48EA40)
#define UNITYENGINE_REFLECTIONPROBE_SET_BOXPROJECTION_OFFSET UNITYSDK_OFFSET(0x1E48EA60)
#define UNITYENGINE_REFLECTIONPROBE_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E48E850)
#define UNITYENGINE_REFLECTIONPROBE_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1E48E840)
#define UNITYENGINE_REFLECTIONPROBE_SET_CLEARFLAGS_OFFSET UNITYSDK_OFFSET(0x1E48E9B0)
#define UNITYENGINE_REFLECTIONPROBE_SET_CULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1E48E990)
#define UNITYENGINE_REFLECTIONPROBE_SET_CUSTOMBAKEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E48EB20)
#define UNITYENGINE_REFLECTIONPROBE_SET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1E48E890)
#define UNITYENGINE_REFLECTIONPROBE_SET_HDR_OFFSET UNITYSDK_OFFSET(0x1E48E930)
#define UNITYENGINE_REFLECTIONPROBE_SET_IMPORTANCE_OFFSET UNITYSDK_OFFSET(0x1E48EAA0)
#define UNITYENGINE_REFLECTIONPROBE_SET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x1E48E8B0)
#define UNITYENGINE_REFLECTIONPROBE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1E48EA80)
#define UNITYENGINE_REFLECTIONPROBE_SET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1E48E870)
#define UNITYENGINE_REFLECTIONPROBE_SET_REALTIMETEXTURE_OFFSET UNITYSDK_OFFSET(0x1E48EB40)
#define UNITYENGINE_REFLECTIONPROBE_SET_REFRESHMODE_OFFSET UNITYSDK_OFFSET(0x1E48EAC0)
#define UNITYENGINE_REFLECTIONPROBE_SET_RESOLUTION_OFFSET UNITYSDK_OFFSET(0x1E48E970)
#define UNITYENGINE_REFLECTIONPROBE_SET_SHADOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E48E950)
#define UNITYENGINE_REFLECTIONPROBE_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E48E7D0)
#define UNITYENGINE_REFLECTIONPROBE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1E48E7C0)
#define UNITYENGINE_REFLECTIONPROBE_SET_TIMESLICINGMODE_OFFSET UNITYSDK_OFFSET(0x1E48EAE0)
#define UNITYENGINE_REFLECTIONPROBE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E48E750)
#define UNITYENGINE_REFLECTIONPROBE_UNSETADDITIONALDATA_OFFSET UNITYSDK_OFFSET(0x1E48F050)
#define UNITYENGINE_REFLECTIONPROBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E48F060)

namespace UnityEngine
{
	inline static constexpr unsigned int ReflectionProbe_TypeDefinitionIndex = 5149;

	class ReflectionProbe : public ::UnityEngine::Behaviour
	{
	public:
		static ::System::Action_1<::UnityEngine::Cubemap*>** StaticGet_defaultReflectionSet()
		{
			return (::System::Action_1<::UnityEngine::Cubemap*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionProbe_TypeDefinitionIndex)->GetStaticField(0x5190);
		}
		static ::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>** StaticGet_reflectionProbeChanged()
		{
			return (::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionProbe_TypeDefinitionIndex)->GetStaticField(0x5198);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::ReflectionProbeType get_type()
		{
			return ((::UnityEngine::Rendering::ReflectionProbeType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::UnityEngine::Rendering::ReflectionProbeType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ReflectionProbeType))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_TYPE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_SIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_center(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_CENTER_OFFSET))(this, value);
		}

		::System::Single get_nearClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_NEARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_nearClipPlane(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_NEARCLIPPLANE_OFFSET))(this, value);
		}

		::System::Single get_farClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_FARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_farClipPlane(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_FARCLIPPLANE_OFFSET))(this, value);
		}

		::System::Single get_intensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_INTENSITY_OFFSET))(this);
		}

		::System::Void set_intensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_INTENSITY_OFFSET))(this, value);
		}

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_BOUNDS_OFFSET))(this);
		}

		::System::Boolean get_hdr()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_HDR_OFFSET))(this);
		}

		::System::Void set_hdr(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_HDR_OFFSET))(this, value);
		}

		::System::Single get_shadowDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_SHADOWDISTANCE_OFFSET))(this);
		}

		::System::Void set_shadowDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_SHADOWDISTANCE_OFFSET))(this, value);
		}

		::System::Int32 get_resolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_RESOLUTION_OFFSET))(this);
		}

		::System::Void set_resolution(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_RESOLUTION_OFFSET))(this, value);
		}

		::System::Int32 get_cullingMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_CULLINGMASK_OFFSET))(this);
		}

		::System::Void set_cullingMask(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_CULLINGMASK_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::ReflectionProbeClearFlags get_clearFlags()
		{
			return ((::UnityEngine::Rendering::ReflectionProbeClearFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_CLEARFLAGS_OFFSET))(this);
		}

		::System::Void set_clearFlags(::UnityEngine::Rendering::ReflectionProbeClearFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ReflectionProbeClearFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_CLEARFLAGS_OFFSET))(this, value);
		}

		::UnityEngine::Color get_backgroundColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_BACKGROUNDCOLOR_OFFSET))(this);
		}

		::System::Void set_backgroundColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_BACKGROUNDCOLOR_OFFSET))(this, value);
		}

		::System::Single get_blendDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_BLENDDISTANCE_OFFSET))(this);
		}

		::System::Void set_blendDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_BLENDDISTANCE_OFFSET))(this, value);
		}

		::System::Boolean get_boxProjection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_BOXPROJECTION_OFFSET))(this);
		}

		::System::Void set_boxProjection(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_BOXPROJECTION_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::ReflectionProbeMode get_mode()
		{
			return ((::UnityEngine::Rendering::ReflectionProbeMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::Rendering::ReflectionProbeMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ReflectionProbeMode))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_MODE_OFFSET))(this, value);
		}

		::System::Int32 get_importance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_IMPORTANCE_OFFSET))(this);
		}

		::System::Void set_importance(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_IMPORTANCE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::ReflectionProbeRefreshMode get_refreshMode()
		{
			return ((::UnityEngine::Rendering::ReflectionProbeRefreshMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_REFRESHMODE_OFFSET))(this);
		}

		::System::Void set_refreshMode(::UnityEngine::Rendering::ReflectionProbeRefreshMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ReflectionProbeRefreshMode))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_REFRESHMODE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode get_timeSlicingMode()
		{
			return ((::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_TIMESLICINGMODE_OFFSET))(this);
		}

		::System::Void set_timeSlicingMode(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_TIMESLICINGMODE_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_bakedTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_BAKEDTEXTURE_OFFSET))(this);
		}

		::System::Void set_bakedTexture(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_BAKEDTEXTURE_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_customBakedTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_CUSTOMBAKEDTEXTURE_OFFSET))(this);
		}

		::System::Void set_customBakedTexture(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_CUSTOMBAKEDTEXTURE_OFFSET))(this, value);
		}

		::UnityEngine::RenderTexture* get_realtimeTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_REALTIMETEXTURE_OFFSET))(this);
		}

		::System::Void set_realtimeTexture(::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_REALTIMETEXTURE_OFFSET))(this, value);
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

		::System::Int32 RenderProbe_1(::UnityEngine::RenderTexture* targetTexture)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_RENDERPROBE_1_OFFSET))(this, targetTexture);
		}

		::System::Boolean IsFinishedRendering(::System::Int32 renderId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_ISFINISHEDRENDERING_OFFSET))(this, renderId);
		}

		::System::Int32 ScheduleRender(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode timeSlicingMode, ::UnityEngine::RenderTexture* targetTexture)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SCHEDULERENDER_OFFSET))(this, timeSlicingMode, targetTexture);
		}

		static ::System::Boolean BlendCubemap(::UnityEngine::Texture* src, ::UnityEngine::Texture* dst, ::System::Single blend, ::UnityEngine::RenderTexture* target)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_BLENDCUBEMAP_OFFSET))(src, dst, blend, target);
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

		static ::System::Void add_reflectionProbeChanged(::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_ADD_REFLECTIONPROBECHANGED_OFFSET))(value);
		}

		static ::System::Void remove_reflectionProbeChanged(::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_REMOVE_REFLECTIONPROBECHANGED_OFFSET))(value);
		}

		static ::System::Void add_defaultReflectionSet(::System::Action_1<::UnityEngine::Cubemap*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Cubemap*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_ADD_DEFAULTREFLECTIONSET_OFFSET))(value);
		}

		static ::System::Void remove_defaultReflectionSet(::System::Action_1<::UnityEngine::Cubemap*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Cubemap*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_REMOVE_DEFAULTREFLECTIONSET_OFFSET))(value);
		}

		static ::System::Void CallReflectionProbeEvent(::UnityEngine::ReflectionProbe* probe, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent probeEvent)
		{
			return ((::System::Void(*)(::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_CALLREFLECTIONPROBEEVENT_OFFSET))(probe, probeEvent);
		}

		static ::System::Void CallSetDefaultReflection(::UnityEngine::Cubemap* defaultReflectionCubemap)
		{
			return ((::System::Void(*)(::UnityEngine::Cubemap*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_CALLSETDEFAULTREFLECTION_OFFSET))(defaultReflectionCubemap);
		}

		::System::Void SetAdditionalData(::UnityEngine::NAPAdditionalProbeData& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPAdditionalProbeData&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SETADDITIONALDATA_OFFSET))(this, data);
		}

		::UnityEngine::NAPAdditionalProbeData GetAdditionalDataCS()
		{
			return ((::UnityEngine::NAPAdditionalProbeData(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GETADDITIONALDATACS_OFFSET))(this);
		}

		::System::Void UnsetAdditionalData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_UNSETADDITIONALDATA_OFFSET))(this);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_SIZE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_SIZE_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_center_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_CENTER_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_center_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_CENTER_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_bounds_Injected(::UnityEngine::Bounds& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_BOUNDS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_backgroundColor_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_BACKGROUNDCOLOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_backgroundColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_SET_BACKGROUNDCOLOR_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_textureHDRDecodeValues_Injected(::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_TEXTUREHDRDECODEVALUES_INJECTED_OFFSET))(this, ret);
		}

		static ::System::Void get_defaultTextureHDRDecodeValues_Injected(::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTUREHDRDECODEVALUES_INJECTED_OFFSET))(ret);
		}

		::System::Void GetAdditionalDataCS_Injected(::UnityEngine::NAPAdditionalProbeData& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPAdditionalProbeData&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GETADDITIONALDATACS_INJECTED_OFFSET))(this, ret);
		}
	};
}
