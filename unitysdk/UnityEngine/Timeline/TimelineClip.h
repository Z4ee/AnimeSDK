#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Timeline/TimelineClip_BlendCurveMode.h"
#include "unitysdk/UnityEngine/Timeline/TimelineClip_ClipExtrapolation.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_TIMELINECLIP_CLAMPEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1A3F5170)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_CREATECURVES_OFFSET UNITYSDK_OFFSET(0x1A3F5100)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_EVALUATEMIXIN_OFFSET UNITYSDK_OFFSET(0x1A3E9910)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_EVALUATEMIXOUT_OFFSET UNITYSDK_OFFSET(0x1A3E9C00)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_FROMLOCALTIMEUNBOUND_OFFSET UNITYSDK_OFFSET(0x1A3F4E40)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GETDEFAULTMIXINCURVE_OFFSET UNITYSDK_OFFSET(0x1A3F45F0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GETDEFAULTMIXOUTCURVE_OFFSET UNITYSDK_OFFSET(0x1A3F4840)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GETEXTRAPOLATEDTIME_OFFSET UNITYSDK_OFFSET(0x1A3F4C50)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_ANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x1A3F4F30)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1A3F3ED0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDINCURVEMODE_OFFSET UNITYSDK_OFFSET(0x1A3F44F0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDINDURATION_OFFSET UNITYSDK_OFFSET(0x1A3F43D0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDOUTCURVEMODE_OFFSET UNITYSDK_OFFSET(0x1A3F4510)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDOUTDURATION_OFFSET UNITYSDK_OFFSET(0x1A3F4460)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CLIPASSETDURATION_OFFSET UNITYSDK_OFFSET(0x1A3F3CE0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1A3EF7A0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CLIPIN_OFFSET UNITYSDK_OFFSET(0x1A3E94C0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CURVES_OFFSET UNITYSDK_OFFSET(0x1A3F3E50)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1A3F3C00)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1A3F3B00)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASEINDURATION_OFFSET UNITYSDK_OFFSET(0x1A3F3FD0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASEOUTDURATION_OFFSET UNITYSDK_OFFSET(0x1A3F4120)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASEOUTTIME_OFFSET UNITYSDK_OFFSET(0x1A3F4320)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASTOUTTIME_OFFSET UNITYSDK_OFFSET(0x1A3F4270)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_END_OFFSET UNITYSDK_OFFSET(0x1A3E5FA0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EXPOSEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1A3F4B40)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EXTRAPOLATEDDURATION_OFFSET UNITYSDK_OFFSET(0x1A3DEED0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EXTRAPOLATEDEND_OFFSET UNITYSDK_OFFSET(0x1A3F5050)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EXTRAPOLATEDSTART_OFFSET UNITYSDK_OFFSET(0x1A3E9160)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASBLENDIN_OFFSET UNITYSDK_OFFSET(0x1A3F4530)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASBLENDOUT_OFFSET UNITYSDK_OFFSET(0x1A3F4560)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASCURVES_OFFSET UNITYSDK_OFFSET(0x1A3F3EA0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASPOSTEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1A3F38A0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASPREEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1A3F3880)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXINCURVE_OFFSET UNITYSDK_OFFSET(0x1A3F4590)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXINDURATION_OFFSET UNITYSDK_OFFSET(0x1A3F4700)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXINPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1A3F4620)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTCURVE_OFFSET UNITYSDK_OFFSET(0x1A3F47E0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTDURATION_OFFSET UNITYSDK_OFFSET(0x1A3F4960)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1A3F4A40)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTTIME_OFFSET UNITYSDK_OFFSET(0x1A3F4870)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_PARENTTRACK_OFFSET UNITYSDK_OFFSET(0x1A3F3F30)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_POSTEXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0x1A3E5FB0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_PREEXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0x1A3F4F70)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_RECORDABLE_OFFSET UNITYSDK_OFFSET(0x1A3F4B20)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_START_OFFSET UNITYSDK_OFFSET(0x1A3F3990)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1A3DEE10)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_UNDERLYINGASSET_OFFSET UNITYSDK_OFFSET(0x1A3F3F10)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_HASH_OFFSET UNITYSDK_OFFSET(0x1A3F4B90)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_ISEXTRAPOLATEDTIME_OFFSET UNITYSDK_OFFSET(0x1A3F4FC0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_ISPOSTEXTRAPOLATEDTIME_OFFSET UNITYSDK_OFFSET(0x1A3E9BA0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_ISPREEXTRAPOLATEDTIME_OFFSET UNITYSDK_OFFSET(0x1A3E98C0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SANITIZETIMEVALUE_OFFSET UNITYSDK_OFFSET(0x1A3F39A0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SETPOSTEXTRAPOLATIONTIME_OFFSET UNITYSDK_OFFSET(0x1A3F4FA0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SETPREEXTRAPOLATIONTIME_OFFSET UNITYSDK_OFFSET(0x1A3F4FB0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_ASSET_OFFSET UNITYSDK_OFFSET(0x1A3F3EE0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_BLENDINCURVEMODE_OFFSET UNITYSDK_OFFSET(0x1A3F4500)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_BLENDINDURATION_OFFSET UNITYSDK_OFFSET(0x1A3F43F0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_BLENDOUTCURVEMODE_OFFSET UNITYSDK_OFFSET(0x1A3F4520)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_BLENDOUTDURATION_OFFSET UNITYSDK_OFFSET(0x1A3F4480)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_CLIPIN_OFFSET UNITYSDK_OFFSET(0x1A3F3B10)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_CURVES_OFFSET UNITYSDK_OFFSET(0x1A3F3E60)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1A3F3CD0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x1A3D9620)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_EASEINDURATION_OFFSET UNITYSDK_OFFSET(0x1A3F4070)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_EASEOUTDURATION_OFFSET UNITYSDK_OFFSET(0x1A3F41C0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_MIXINCURVE_OFFSET UNITYSDK_OFFSET(0x1A3F4610)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_MIXOUTCURVE_OFFSET UNITYSDK_OFFSET(0x1A3F4860)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_PARENTTRACK_OFFSET UNITYSDK_OFFSET(0x1A3F3720)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_POSTEXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0x1A3D9810)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_PREEXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0x1A3D97E0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_RECORDABLE_OFFSET UNITYSDK_OFFSET(0x1A3F4B30)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_START_OFFSET UNITYSDK_OFFSET(0x1A3D9560)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1A3F38D0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_UNDERLYINGASSET_OFFSET UNITYSDK_OFFSET(0x1A3F3F20)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_TOLOCALTIMEUNBOUND_OFFSET UNITYSDK_OFFSET(0x1A3F4D40)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_TOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x1A3E9F40)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A3F52F0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A3F52C0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A3F52B0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_ASSETOWNER_OFFSET UNITYSDK_OFFSET(0x1A3F3EF0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_DEFAULTCURVESNAME_OFFSET UNITYSDK_OFFSET(0x1A3F3E70)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_TARGETTRACK_OFFSET UNITYSDK_OFFSET(0x1A3F3F00)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UPDATEDIRTY_OFFSET UNITYSDK_OFFSET(0x1A3F3980)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UPGRADETOLATESTVERSION_OFFSET UNITYSDK_OFFSET(0x1A3F3690)
#define UNITYENGINE_TIMELINE_TIMELINECLIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3F5760)
#define UNITYENGINE_TIMELINE_TIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F3700)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineClip_TypeDefinitionIndex = 35546;

	class TimelineClip : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_kDefaultCurvesName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x69930);
		}
		static ::System::Double* StaticGet_kTimeScaleMin()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x117F0);
		}
		static ::System::Single* StaticGet_kDefaultClipDurationInSeconds()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x117F8);
		}
		static ::UnityEngine::Timeline::ClipCaps* StaticGet_kDefaultClipCaps()
		{
			return (::UnityEngine::Timeline::ClipCaps*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x117FC);
		}
		static ::System::Double* StaticGet_kTimeScaleMax()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x11800);
		}
		static ::System::Double* StaticGet_kMinDuration()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x11808);
		}
		static ::System::Double* StaticGet_kMaxTimeValue()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x11810);
		}
		// static const ::System::Int32 k_LatestVersion = 0x1; // 0x0
		::System::Int32 m_Version; // 0x10
		::System::Double m_Start; // 0x18
		::System::Double m_ClipIn; // 0x20
		::UnityEngine::Object* m_Asset; // 0x28
		::System::Double m_Duration; // 0x30
		::System::Double m_TimeScale; // 0x38
		::UnityEngine::Timeline::TrackAsset* m_ParentTrack; // 0x40
		::System::Double m_EaseInDuration; // 0x48
		::System::Double m_EaseOutDuration; // 0x50
		::System::Double m_BlendInDuration; // 0x58
		::System::Double m_BlendOutDuration; // 0x60
		::UnityEngine::AnimationCurve* m_MixInCurve; // 0x68
		::UnityEngine::AnimationCurve* m_MixOutCurve; // 0x70
		::UnityEngine::Timeline::TimelineClip_BlendCurveMode m_BlendInCurveMode; // 0x78
		::UnityEngine::Timeline::TimelineClip_BlendCurveMode m_BlendOutCurveMode; // 0x7C
		::System::Collections::Generic::List_1<::System::String*>* m_ExposedParameterNames; // 0x80
		::UnityEngine::AnimationClip* m_AnimationCurves; // 0x88
		::System::Boolean m_Recordable; // 0x90
		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation m_PostExtrapolationMode; // 0x94
		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation m_PreExtrapolationMode; // 0x98
		::System::Double m_PostExtrapolationTime; // 0xA0
		::System::Double m_PreExtrapolationTime; // 0xA8
		::System::String* m_DisplayName; // 0xB0

		::System::Void _ctor(::UnityEngine::Timeline::TrackAsset* parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP__CTOR_OFFSET))(this, parent);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP__CCTOR_OFFSET))();
		}

		::System::Void UpgradeToLatestVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_UPGRADETOLATESTVERSION_OFFSET))(this);
		}

		::System::Boolean get_hasPreExtrapolation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASPREEXTRAPOLATION_OFFSET))(this);
		}

		::System::Boolean get_hasPostExtrapolation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASPOSTEXTRAPOLATION_OFFSET))(this);
		}

		::System::Double get_timeScale()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_timeScale(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_TIMESCALE_OFFSET))(this, value);
		}

		::System::Double get_start()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_START_OFFSET))(this);
		}

		::System::Void set_start(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_START_OFFSET))(this, value);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_duration(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_DURATION_OFFSET))(this, value);
		}

		::System::Double get_end()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_END_OFFSET))(this);
		}

		::System::Double get_clipIn()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CLIPIN_OFFSET))(this);
		}

		::System::Void set_clipIn(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_CLIPIN_OFFSET))(this, value);
		}

		::System::String* get_displayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_displayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::Double get_clipAssetDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CLIPASSETDURATION_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* get_curves()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CURVES_OFFSET))(this);
		}

		::System::Void set_curves(::UnityEngine::AnimationClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_CURVES_OFFSET))(this, value);
		}

		::System::String* UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_DEFAULTCURVESNAME_OFFSET))(this);
		}

		::System::Boolean get_hasCurves()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASCURVES_OFFSET))(this);
		}

		::UnityEngine::Object* get_asset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_ASSET_OFFSET))(this);
		}

		::System::Void set_asset(::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_ASSET_OFFSET))(this, value);
		}

		::UnityEngine::Object* UnityEngine_Timeline_ICurvesOwner_get_assetOwner()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_ASSETOWNER_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* UnityEngine_Timeline_ICurvesOwner_get_targetTrack()
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_TARGETTRACK_OFFSET))(this);
		}

		::UnityEngine::Object* get_underlyingAsset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_UNDERLYINGASSET_OFFSET))(this);
		}

		::System::Void set_underlyingAsset(::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_UNDERLYINGASSET_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::TrackAsset* get_parentTrack()
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_PARENTTRACK_OFFSET))(this);
		}

		::System::Void set_parentTrack(::UnityEngine::Timeline::TrackAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_PARENTTRACK_OFFSET))(this, value);
		}

		::System::Double get_easeInDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASEINDURATION_OFFSET))(this);
		}

		::System::Void set_easeInDuration(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_EASEINDURATION_OFFSET))(this, value);
		}

		::System::Double get_easeOutDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASEOUTDURATION_OFFSET))(this);
		}

		::System::Void set_easeOutDuration(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_EASEOUTDURATION_OFFSET))(this, value);
		}

		::System::Double get_eastOutTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASTOUTTIME_OFFSET))(this);
		}

		::System::Double get_easeOutTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASEOUTTIME_OFFSET))(this);
		}

		::System::Double get_blendInDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDINDURATION_OFFSET))(this);
		}

		::System::Void set_blendInDuration(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_BLENDINDURATION_OFFSET))(this, value);
		}

		::System::Double get_blendOutDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDOUTDURATION_OFFSET))(this);
		}

		::System::Void set_blendOutDuration(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_BLENDOUTDURATION_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::TimelineClip_BlendCurveMode get_blendInCurveMode()
		{
			return ((::UnityEngine::Timeline::TimelineClip_BlendCurveMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDINCURVEMODE_OFFSET))(this);
		}

		::System::Void set_blendInCurveMode(::UnityEngine::Timeline::TimelineClip_BlendCurveMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_BlendCurveMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_BLENDINCURVEMODE_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::TimelineClip_BlendCurveMode get_blendOutCurveMode()
		{
			return ((::UnityEngine::Timeline::TimelineClip_BlendCurveMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDOUTCURVEMODE_OFFSET))(this);
		}

		::System::Void set_blendOutCurveMode(::UnityEngine::Timeline::TimelineClip_BlendCurveMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_BlendCurveMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_BLENDOUTCURVEMODE_OFFSET))(this, value);
		}

		::System::Boolean get_hasBlendIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASBLENDIN_OFFSET))(this);
		}

		::System::Boolean get_hasBlendOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASBLENDOUT_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_mixInCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXINCURVE_OFFSET))(this);
		}

		::System::Void set_mixInCurve(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_MIXINCURVE_OFFSET))(this, value);
		}

		::System::Single get_mixInPercentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXINPERCENTAGE_OFFSET))(this);
		}

		::System::Double get_mixInDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXINDURATION_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_mixOutCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTCURVE_OFFSET))(this);
		}

		::System::Void set_mixOutCurve(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_MIXOUTCURVE_OFFSET))(this, value);
		}

		::System::Double get_mixOutTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTTIME_OFFSET))(this);
		}

		::System::Double get_mixOutDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTDURATION_OFFSET))(this);
		}

		::System::Single get_mixOutPercentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTPERCENTAGE_OFFSET))(this);
		}

		::System::Boolean get_recordable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_RECORDABLE_OFFSET))(this);
		}

		::System::Void set_recordable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_RECORDABLE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_exposedParameters()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EXPOSEDPARAMETERS_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Int32 Hash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_HASH_OFFSET))(this);
		}

		::System::Single EvaluateMixOut(::System::Double time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_EVALUATEMIXOUT_OFFSET))(this, time);
		}

		::System::Single EvaluateMixIn(::System::Double time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_EVALUATEMIXIN_OFFSET))(this, time);
		}

		static ::UnityEngine::AnimationCurve* GetDefaultMixInCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GETDEFAULTMIXINCURVE_OFFSET))();
		}

		static ::UnityEngine::AnimationCurve* GetDefaultMixOutCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GETDEFAULTMIXOUTCURVE_OFFSET))();
		}

		::System::Double ToLocalTime(::System::Double time)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_TOLOCALTIME_OFFSET))(this, time);
		}

		::System::Double ToLocalTimeUnbound(::System::Double time)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_TOLOCALTIMEUNBOUND_OFFSET))(this, time);
		}

		::System::Double FromLocalTimeUnbound(::System::Double time)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_FROMLOCALTIMEUNBOUND_OFFSET))(this, time);
		}

		::UnityEngine::AnimationClip* get_animationClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_ANIMATIONCLIP_OFFSET))(this);
		}

		static ::System::Double SanitizeTimeValue(::System::Double value, ::System::Double defaultValue)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SANITIZETIMEVALUE_OFFSET))(value, defaultValue);
		}

		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_postExtrapolationMode()
		{
			return ((::UnityEngine::Timeline::TimelineClip_ClipExtrapolation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_POSTEXTRAPOLATIONMODE_OFFSET))(this);
		}

		::System::Void set_postExtrapolationMode(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_POSTEXTRAPOLATIONMODE_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_preExtrapolationMode()
		{
			return ((::UnityEngine::Timeline::TimelineClip_ClipExtrapolation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_PREEXTRAPOLATIONMODE_OFFSET))(this);
		}

		::System::Void set_preExtrapolationMode(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_PREEXTRAPOLATIONMODE_OFFSET))(this, value);
		}

		::System::Void SetPostExtrapolationTime(::System::Double time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SETPOSTEXTRAPOLATIONTIME_OFFSET))(this, time);
		}

		::System::Void SetPreExtrapolationTime(::System::Double time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SETPREEXTRAPOLATIONTIME_OFFSET))(this, time);
		}

		::System::Boolean IsExtrapolatedTime(::System::Double sequenceTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_ISEXTRAPOLATEDTIME_OFFSET))(this, sequenceTime);
		}

		::System::Boolean IsPreExtrapolatedTime(::System::Double sequenceTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_ISPREEXTRAPOLATEDTIME_OFFSET))(this, sequenceTime);
		}

		::System::Boolean IsPostExtrapolatedTime(::System::Double sequenceTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_ISPOSTEXTRAPOLATEDTIME_OFFSET))(this, sequenceTime);
		}

		::System::Double get_extrapolatedStart()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EXTRAPOLATEDSTART_OFFSET))(this);
		}

		::System::Double get_extrapolatedDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EXTRAPOLATEDDURATION_OFFSET))(this);
		}

		::System::Double get_extrapolatedEnd()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EXTRAPOLATEDEND_OFFSET))(this);
		}

		static ::System::Double GetExtrapolatedTime(::System::Double time, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation mode, ::System::Double duration)
		{
			return ((::System::Double(*)(::System::Double, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GETEXTRAPOLATEDTIME_OFFSET))(time, mode, duration);
		}

		::System::Void CreateCurves(::System::String* curvesClipName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_CREATECURVES_OFFSET))(this, curvesClipName);
		}

		::System::Void ClampEaseInOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_CLAMPEASEINOUT_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_TOSTRING_OFFSET))(this);
		}

		::System::Void UpdateDirty(::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_UPDATEDIRTY_OFFSET))(this, oldValue, newValue);
		}
	};
}
