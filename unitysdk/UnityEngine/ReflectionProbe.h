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

#define UNITYENGINE_REFLECTIONPROBE_ADD_DEFAULTREFLECTIONSET_OFFSET UNITYSDK_OFFSET(0x1D136090)
#define UNITYENGINE_REFLECTIONPROBE_ADD_REFLECTIONPROBECHANGED_OFFSET UNITYSDK_OFFSET(0x1D135F30)
#define UNITYENGINE_REFLECTIONPROBE_BLENDCUBEMAP_OFFSET UNITYSDK_OFFSET(0x1D135EB0)
#define UNITYENGINE_REFLECTIONPROBE_CALLREFLECTIONPROBEEVENT_OFFSET UNITYSDK_OFFSET(0x1D1361F0)
#define UNITYENGINE_REFLECTIONPROBE_CALLSETDEFAULTREFLECTION_OFFSET UNITYSDK_OFFSET(0x1D136260)
#define UNITYENGINE_REFLECTIONPROBE_GETADDITIONALDATACS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D136330)
#define UNITYENGINE_REFLECTIONPROBE_GETADDITIONALDATACS_OFFSET UNITYSDK_OFFSET(0x1D1362E0)
#define UNITYENGINE_REFLECTIONPROBE_GET_BACKGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D135C70)
#define UNITYENGINE_REFLECTIONPROBE_GET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1D135C30)
#define UNITYENGINE_REFLECTIONPROBE_GET_BAKEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D135D60)
#define UNITYENGINE_REFLECTIONPROBE_GET_BLENDDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D135CA0)
#define UNITYENGINE_REFLECTIONPROBE_GET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D135B80)
#define UNITYENGINE_REFLECTIONPROBE_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1D135B30)
#define UNITYENGINE_REFLECTIONPROBE_GET_BOXPROJECTION_OFFSET UNITYSDK_OFFSET(0x1D135CC0)
#define UNITYENGINE_REFLECTIONPROBE_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D135AA0)
#define UNITYENGINE_REFLECTIONPROBE_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1D135A50)
#define UNITYENGINE_REFLECTIONPROBE_GET_CLEARFLAGS_OFFSET UNITYSDK_OFFSET(0x1D135C10)
#define UNITYENGINE_REFLECTIONPROBE_GET_CULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1D135BF0)
#define UNITYENGINE_REFLECTIONPROBE_GET_CUSTOMBAKEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D135D80)
#define UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTUREHDRDECODEVALUES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D135F10)
#define UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTUREHDRDECODEVALUES_OFFSET UNITYSDK_OFFSET(0x1D135EE0)
#define UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D135F20)
#define UNITYENGINE_REFLECTIONPROBE_GET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1D135AF0)
#define UNITYENGINE_REFLECTIONPROBE_GET_HDR_OFFSET UNITYSDK_OFFSET(0x1D135B90)
#define UNITYENGINE_REFLECTIONPROBE_GET_IMPORTANCE_OFFSET UNITYSDK_OFFSET(0x1D135D00)
#define UNITYENGINE_REFLECTIONPROBE_GET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x1D135B10)
#define UNITYENGINE_REFLECTIONPROBE_GET_MAXBAKEDCUBEMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1D135ED0)
#define UNITYENGINE_REFLECTIONPROBE_GET_MINBAKEDCUBEMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1D135EC0)
#define UNITYENGINE_REFLECTIONPROBE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1D135CE0)
#define UNITYENGINE_REFLECTIONPROBE_GET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1D135AD0)
#define UNITYENGINE_REFLECTIONPROBE_GET_REALTIMETEXTURE_OFFSET UNITYSDK_OFFSET(0x1D135DA0)
#define UNITYENGINE_REFLECTIONPROBE_GET_REFRESHMODE_OFFSET UNITYSDK_OFFSET(0x1D135D20)
#define UNITYENGINE_REFLECTIONPROBE_GET_RESOLUTION_OFFSET UNITYSDK_OFFSET(0x1D135BD0)
#define UNITYENGINE_REFLECTIONPROBE_GET_SHADOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D135BB0)
#define UNITYENGINE_REFLECTIONPROBE_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D135A20)
#define UNITYENGINE_REFLECTIONPROBE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1D1359D0)
#define UNITYENGINE_REFLECTIONPROBE_GET_TEXTUREHDRDECODEVALUES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D135E10)
#define UNITYENGINE_REFLECTIONPROBE_GET_TEXTUREHDRDECODEVALUES_OFFSET UNITYSDK_OFFSET(0x1D135DD0)
#define UNITYENGINE_REFLECTIONPROBE_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1D135DC0)
#define UNITYENGINE_REFLECTIONPROBE_GET_TIMESLICINGMODE_OFFSET UNITYSDK_OFFSET(0x1D135D40)
#define UNITYENGINE_REFLECTIONPROBE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D1359B0)
#define UNITYENGINE_REFLECTIONPROBE_ISFINISHEDRENDERING_OFFSET UNITYSDK_OFFSET(0x1D135EA0)
#define UNITYENGINE_REFLECTIONPROBE_REMOVE_DEFAULTREFLECTIONSET_OFFSET UNITYSDK_OFFSET(0x1D136140)
#define UNITYENGINE_REFLECTIONPROBE_REMOVE_REFLECTIONPROBECHANGED_OFFSET UNITYSDK_OFFSET(0x1D135FE0)
#define UNITYENGINE_REFLECTIONPROBE_RENDERPROBE_1_OFFSET UNITYSDK_OFFSET(0x1D135E60)
#define UNITYENGINE_REFLECTIONPROBE_RENDERPROBE_OFFSET UNITYSDK_OFFSET(0x1D135E30)
#define UNITYENGINE_REFLECTIONPROBE_RESET_OFFSET UNITYSDK_OFFSET(0x1D135E20)
#define UNITYENGINE_REFLECTIONPROBE_SCHEDULERENDER_OFFSET UNITYSDK_OFFSET(0x1D135E90)
#define UNITYENGINE_REFLECTIONPROBE_SETADDITIONALDATA_OFFSET UNITYSDK_OFFSET(0x1D1362D0)
#define UNITYENGINE_REFLECTIONPROBE_SET_BACKGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D135C90)
#define UNITYENGINE_REFLECTIONPROBE_SET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1D135C80)
#define UNITYENGINE_REFLECTIONPROBE_SET_BAKEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D135D70)
#define UNITYENGINE_REFLECTIONPROBE_SET_BLENDDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D135CB0)
#define UNITYENGINE_REFLECTIONPROBE_SET_BOXPROJECTION_OFFSET UNITYSDK_OFFSET(0x1D135CD0)
#define UNITYENGINE_REFLECTIONPROBE_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D135AC0)
#define UNITYENGINE_REFLECTIONPROBE_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1D135AB0)
#define UNITYENGINE_REFLECTIONPROBE_SET_CLEARFLAGS_OFFSET UNITYSDK_OFFSET(0x1D135C20)
#define UNITYENGINE_REFLECTIONPROBE_SET_CULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1D135C00)
#define UNITYENGINE_REFLECTIONPROBE_SET_CUSTOMBAKEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D135D90)
#define UNITYENGINE_REFLECTIONPROBE_SET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1D135B00)
#define UNITYENGINE_REFLECTIONPROBE_SET_HDR_OFFSET UNITYSDK_OFFSET(0x1D135BA0)
#define UNITYENGINE_REFLECTIONPROBE_SET_IMPORTANCE_OFFSET UNITYSDK_OFFSET(0x1D135D10)
#define UNITYENGINE_REFLECTIONPROBE_SET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x1D135B20)
#define UNITYENGINE_REFLECTIONPROBE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1D135CF0)
#define UNITYENGINE_REFLECTIONPROBE_SET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1D135AE0)
#define UNITYENGINE_REFLECTIONPROBE_SET_REALTIMETEXTURE_OFFSET UNITYSDK_OFFSET(0x1D135DB0)
#define UNITYENGINE_REFLECTIONPROBE_SET_REFRESHMODE_OFFSET UNITYSDK_OFFSET(0x1D135D30)
#define UNITYENGINE_REFLECTIONPROBE_SET_RESOLUTION_OFFSET UNITYSDK_OFFSET(0x1D135BE0)
#define UNITYENGINE_REFLECTIONPROBE_SET_SHADOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D135BC0)
#define UNITYENGINE_REFLECTIONPROBE_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D135A40)
#define UNITYENGINE_REFLECTIONPROBE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1D135A30)
#define UNITYENGINE_REFLECTIONPROBE_SET_TIMESLICINGMODE_OFFSET UNITYSDK_OFFSET(0x1D135D50)
#define UNITYENGINE_REFLECTIONPROBE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D1359C0)
#define UNITYENGINE_REFLECTIONPROBE_UNSETADDITIONALDATA_OFFSET UNITYSDK_OFFSET(0x1D136340)
#define UNITYENGINE_REFLECTIONPROBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D136350)

namespace UnityEngine
{
	inline static constexpr unsigned int ReflectionProbe_TypeDefinitionIndex = 5149;

	class ReflectionProbe : public ::UnityEngine::Behaviour
	{
	public:
		static ::System::Action_1<::UnityEngine::Cubemap*>** StaticGet_defaultReflectionSet()
		{
			return (::System::Action_1<::UnityEngine::Cubemap*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionProbe_TypeDefinitionIndex)->GetStaticField(0x5180);
		}
		static ::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>** StaticGet_reflectionProbeChanged()
		{
			return (::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionProbe_TypeDefinitionIndex)->GetStaticField(0x5188);
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
