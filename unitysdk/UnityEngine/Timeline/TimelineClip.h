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

#define UNITYENGINE_TIMELINE_TIMELINECLIP_CLAMPEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1B24A290)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_CREATECURVES_OFFSET UNITYSDK_OFFSET(0x1B24A220)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_EVALUATEMIXIN_OFFSET UNITYSDK_OFFSET(0x1B23E2A0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_EVALUATEMIXOUT_OFFSET UNITYSDK_OFFSET(0x1B23E600)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_FROMLOCALTIMEUNBOUND_OFFSET UNITYSDK_OFFSET(0x1B249F50)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GETDEFAULTMIXINCURVE_OFFSET UNITYSDK_OFFSET(0x1B2495A0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GETDEFAULTMIXOUTCURVE_OFFSET UNITYSDK_OFFSET(0x1B2498E0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GETEXTRAPOLATEDTIME_OFFSET UNITYSDK_OFFSET(0x1B249D60)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_ANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x1B24A040)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1B248D50)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDINCURVEMODE_OFFSET UNITYSDK_OFFSET(0x1B249440)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDINDURATION_OFFSET UNITYSDK_OFFSET(0x1B249320)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDOUTCURVEMODE_OFFSET UNITYSDK_OFFSET(0x1B249460)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDOUTDURATION_OFFSET UNITYSDK_OFFSET(0x1B2493B0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CLIPASSETDURATION_OFFSET UNITYSDK_OFFSET(0x1B248B00)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B244420)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CLIPIN_OFFSET UNITYSDK_OFFSET(0x1B23DE50)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CURVES_OFFSET UNITYSDK_OFFSET(0x1B248CD0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1B248A00)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1B248900)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASEINDURATION_OFFSET UNITYSDK_OFFSET(0x1B248F20)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASEOUTDURATION_OFFSET UNITYSDK_OFFSET(0x1B249070)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASEOUTTIME_OFFSET UNITYSDK_OFFSET(0x1B249270)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASTOUTTIME_OFFSET UNITYSDK_OFFSET(0x1B2491C0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_END_OFFSET UNITYSDK_OFFSET(0x1B23A610)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EXPOSEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B249C50)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EXTRAPOLATEDDURATION_OFFSET UNITYSDK_OFFSET(0x1B233420)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EXTRAPOLATEDEND_OFFSET UNITYSDK_OFFSET(0x1B24A170)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EXTRAPOLATEDSTART_OFFSET UNITYSDK_OFFSET(0x1B23DAF0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASBLENDIN_OFFSET UNITYSDK_OFFSET(0x1B249480)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASBLENDOUT_OFFSET UNITYSDK_OFFSET(0x1B2494B0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASCURVES_OFFSET UNITYSDK_OFFSET(0x1B248D20)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASPOSTEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1B2486A0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_HASPREEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1B248680)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXINCURVE_OFFSET UNITYSDK_OFFSET(0x1B2494E0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXINDURATION_OFFSET UNITYSDK_OFFSET(0x1B249720)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXINPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1B249640)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTCURVE_OFFSET UNITYSDK_OFFSET(0x1B249800)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTDURATION_OFFSET UNITYSDK_OFFSET(0x1B249A70)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1B249B50)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_MIXOUTTIME_OFFSET UNITYSDK_OFFSET(0x1B249980)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_PARENTTRACK_OFFSET UNITYSDK_OFFSET(0x1B248DB0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_POSTEXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0x1B23A620)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_PREEXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0x1B24A090)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_RECORDABLE_OFFSET UNITYSDK_OFFSET(0x1B249C30)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_START_OFFSET UNITYSDK_OFFSET(0x1B248790)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1B233360)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_GET_UNDERLYINGASSET_OFFSET UNITYSDK_OFFSET(0x1B248D90)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_HASH_OFFSET UNITYSDK_OFFSET(0x1B249CA0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_ISEXTRAPOLATEDTIME_OFFSET UNITYSDK_OFFSET(0x1B24A0E0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_ISPOSTEXTRAPOLATEDTIME_OFFSET UNITYSDK_OFFSET(0x1B23E5A0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_ISPREEXTRAPOLATEDTIME_OFFSET UNITYSDK_OFFSET(0x1B23E250)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SANITIZETIMEVALUE_OFFSET UNITYSDK_OFFSET(0x1B2487A0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SETPOSTEXTRAPOLATIONTIME_OFFSET UNITYSDK_OFFSET(0x1B24A0C0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SETPREEXTRAPOLATIONTIME_OFFSET UNITYSDK_OFFSET(0x1B24A0D0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_ASSET_OFFSET UNITYSDK_OFFSET(0x1B248D60)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_BLENDINCURVEMODE_OFFSET UNITYSDK_OFFSET(0x1B249450)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_BLENDINDURATION_OFFSET UNITYSDK_OFFSET(0x1B249340)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_BLENDOUTCURVEMODE_OFFSET UNITYSDK_OFFSET(0x1B249470)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_BLENDOUTDURATION_OFFSET UNITYSDK_OFFSET(0x1B2493D0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_CLIPIN_OFFSET UNITYSDK_OFFSET(0x1B248910)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_CURVES_OFFSET UNITYSDK_OFFSET(0x1B248CE0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1B248AF0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x1B22DC80)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_EASEINDURATION_OFFSET UNITYSDK_OFFSET(0x1B248FC0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_EASEOUTDURATION_OFFSET UNITYSDK_OFFSET(0x1B249110)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_MIXINCURVE_OFFSET UNITYSDK_OFFSET(0x1B249630)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_MIXOUTCURVE_OFFSET UNITYSDK_OFFSET(0x1B249970)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_PARENTTRACK_OFFSET UNITYSDK_OFFSET(0x1B248450)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_POSTEXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0x1B22DE70)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_PREEXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0x1B22DE40)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_RECORDABLE_OFFSET UNITYSDK_OFFSET(0x1B249C40)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_START_OFFSET UNITYSDK_OFFSET(0x1B22DBC0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1B2486D0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_SET_UNDERLYINGASSET_OFFSET UNITYSDK_OFFSET(0x1B248DA0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_TOLOCALTIMEUNBOUND_OFFSET UNITYSDK_OFFSET(0x1B249E50)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_TOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x1B23E9C0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B24A430)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B24A400)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B24A3F0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_ASSETOWNER_OFFSET UNITYSDK_OFFSET(0x1B248D70)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_DEFAULTCURVESNAME_OFFSET UNITYSDK_OFFSET(0x1B248CF0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_TARGETTRACK_OFFSET UNITYSDK_OFFSET(0x1B248D80)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UPDATEDIRTY_OFFSET UNITYSDK_OFFSET(0x1B248780)
#define UNITYENGINE_TIMELINE_TIMELINECLIP_UPGRADETOLATESTVERSION_OFFSET UNITYSDK_OFFSET(0x1B2483C0)
#define UNITYENGINE_TIMELINE_TIMELINECLIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B24A800)
#define UNITYENGINE_TIMELINE_TIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B248430)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineClip_TypeDefinitionIndex = 35846;

	class TimelineClip : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_kDefaultCurvesName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x644F0);
		}
		static ::System::Double* StaticGet_kMinDuration()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x13AA0);
		}
		static ::System::Double* StaticGet_kTimeScaleMin()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x13AA8);
		}
		static ::System::Single* StaticGet_kDefaultClipDurationInSeconds()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x13AB0);
		}
		static ::UnityEngine::Timeline::ClipCaps* StaticGet_kDefaultClipCaps()
		{
			return (::UnityEngine::Timeline::ClipCaps*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x13AB4);
		}
		static ::System::Double* StaticGet_kMaxTimeValue()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x13AB8);
		}
		static ::System::Double* StaticGet_kTimeScaleMax()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimelineClip_TypeDefinitionIndex)->GetStaticField(0x13AC0);
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

		::System::Void _ctor(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP__CTOR_OFFSET))(this, a1);
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

		::System::Void set_timeScale(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_TIMESCALE_OFFSET))(this, a1);
		}

		::System::Double get_start()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_START_OFFSET))(this);
		}

		::System::Void set_start(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_START_OFFSET))(this, a1);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_duration(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_DURATION_OFFSET))(this, a1);
		}

		::System::Double get_end()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_END_OFFSET))(this);
		}

		::System::Double get_clipIn()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CLIPIN_OFFSET))(this);
		}

		::System::Void set_clipIn(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_CLIPIN_OFFSET))(this, a1);
		}

		::System::String* get_displayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_displayName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_DISPLAYNAME_OFFSET))(this, a1);
		}

		::System::Double get_clipAssetDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CLIPASSETDURATION_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* get_curves()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_CURVES_OFFSET))(this);
		}

		::System::Void set_curves(::UnityEngine::AnimationClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_CURVES_OFFSET))(this, a1);
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

		::System::Void set_asset(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_ASSET_OFFSET))(this, a1);
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

		::System::Void set_underlyingAsset(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_UNDERLYINGASSET_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::TrackAsset* get_parentTrack()
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_PARENTTRACK_OFFSET))(this);
		}

		::System::Void set_parentTrack(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_PARENTTRACK_OFFSET))(this, a1);
		}

		::System::Double get_easeInDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASEINDURATION_OFFSET))(this);
		}

		::System::Void set_easeInDuration(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_EASEINDURATION_OFFSET))(this, a1);
		}

		::System::Double get_easeOutDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_EASEOUTDURATION_OFFSET))(this);
		}

		::System::Void set_easeOutDuration(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_EASEOUTDURATION_OFFSET))(this, a1);
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

		::System::Void set_blendInDuration(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_BLENDINDURATION_OFFSET))(this, a1);
		}

		::System::Double get_blendOutDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDOUTDURATION_OFFSET))(this);
		}

		::System::Void set_blendOutDuration(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_BLENDOUTDURATION_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::TimelineClip_BlendCurveMode get_blendInCurveMode()
		{
			return ((::UnityEngine::Timeline::TimelineClip_BlendCurveMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDINCURVEMODE_OFFSET))(this);
		}

		::System::Void set_blendInCurveMode(::UnityEngine::Timeline::TimelineClip_BlendCurveMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_BlendCurveMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_BLENDINCURVEMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::TimelineClip_BlendCurveMode get_blendOutCurveMode()
		{
			return ((::UnityEngine::Timeline::TimelineClip_BlendCurveMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_BLENDOUTCURVEMODE_OFFSET))(this);
		}

		::System::Void set_blendOutCurveMode(::UnityEngine::Timeline::TimelineClip_BlendCurveMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_BlendCurveMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_BLENDOUTCURVEMODE_OFFSET))(this, a1);
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

		::System::Void set_mixInCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_MIXINCURVE_OFFSET))(this, a1);
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

		::System::Void set_mixOutCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_MIXOUTCURVE_OFFSET))(this, a1);
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

		::System::Void set_recordable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_RECORDABLE_OFFSET))(this, a1);
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

		::System::Single EvaluateMixOut(::System::Double a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_EVALUATEMIXOUT_OFFSET))(this, a1);
		}

		::System::Single EvaluateMixIn(::System::Double a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_EVALUATEMIXIN_OFFSET))(this, a1);
		}

		static ::UnityEngine::AnimationCurve* GetDefaultMixInCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GETDEFAULTMIXINCURVE_OFFSET))();
		}

		static ::UnityEngine::AnimationCurve* GetDefaultMixOutCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GETDEFAULTMIXOUTCURVE_OFFSET))();
		}

		::System::Double ToLocalTime(::System::Double a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_TOLOCALTIME_OFFSET))(this, a1);
		}

		::System::Double ToLocalTimeUnbound(::System::Double a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_TOLOCALTIMEUNBOUND_OFFSET))(this, a1);
		}

		::System::Double FromLocalTimeUnbound(::System::Double a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_FROMLOCALTIMEUNBOUND_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationClip* get_animationClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_ANIMATIONCLIP_OFFSET))(this);
		}

		static ::System::Double SanitizeTimeValue(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SANITIZETIMEVALUE_OFFSET))(a1, a2);
		}

		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_postExtrapolationMode()
		{
			return ((::UnityEngine::Timeline::TimelineClip_ClipExtrapolation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_POSTEXTRAPOLATIONMODE_OFFSET))(this);
		}

		::System::Void set_postExtrapolationMode(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_POSTEXTRAPOLATIONMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_preExtrapolationMode()
		{
			return ((::UnityEngine::Timeline::TimelineClip_ClipExtrapolation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GET_PREEXTRAPOLATIONMODE_OFFSET))(this);
		}

		::System::Void set_preExtrapolationMode(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SET_PREEXTRAPOLATIONMODE_OFFSET))(this, a1);
		}

		::System::Void SetPostExtrapolationTime(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SETPOSTEXTRAPOLATIONTIME_OFFSET))(this, a1);
		}

		::System::Void SetPreExtrapolationTime(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_SETPREEXTRAPOLATIONTIME_OFFSET))(this, a1);
		}

		::System::Boolean IsExtrapolatedTime(::System::Double a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_ISEXTRAPOLATEDTIME_OFFSET))(this, a1);
		}

		::System::Boolean IsPreExtrapolatedTime(::System::Double a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_ISPREEXTRAPOLATEDTIME_OFFSET))(this, a1);
		}

		::System::Boolean IsPostExtrapolatedTime(::System::Double a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_ISPOSTEXTRAPOLATEDTIME_OFFSET))(this, a1);
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

		static ::System::Double GetExtrapolatedTime(::System::Double a1, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation a2, ::System::Double a3)
		{
			return ((::System::Double(*)(::System::Double, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_GETEXTRAPOLATEDTIME_OFFSET))(a1, a2, a3);
		}

		::System::Void CreateCurves(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_CREATECURVES_OFFSET))(this, a1);
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

		::System::Void UpdateDirty(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIP_UPDATEDIRTY_OFFSET))(this, a1, a2);
		}
	};
}
