#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Motion.h"
#include "unitysdk/UnityEngine/StreamInClipInfo.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class AnimationEvent; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_ANIMATIONCLIP_ADDEVENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C1C0540)
#define UNITYENGINE_ANIMATIONCLIP_ADDEVENT_OFFSET UNITYSDK_OFFSET(0x1C1C04C0)
#define UNITYENGINE_ANIMATIONCLIP_CLEARCURVES_OFFSET UNITYSDK_OFFSET(0x1C1C0370)
#define UNITYENGINE_ANIMATIONCLIP_ENSUREQUATERNIONCONTINUITY_OFFSET UNITYSDK_OFFSET(0x1C1C0360)
#define UNITYENGINE_ANIMATIONCLIP_GETACLDATABASELRUSIZE_OFFSET UNITYSDK_OFFSET(0x1C1C0630)
#define UNITYENGINE_ANIMATIONCLIP_GETEVENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C1C05C0)
#define UNITYENGINE_ANIMATIONCLIP_GETRUNTIMETOTALACLDATABASEBYTES_OFFSET UNITYSDK_OFFSET(0x1C1C04B0)
#define UNITYENGINE_ANIMATIONCLIP_GETSTREAMINCLIPINFOS_OFFSET UNITYSDK_OFFSET(0x1C1C04A0)
#define UNITYENGINE_ANIMATIONCLIP_GETSTREAMINDATABASEINEDITOR_OFFSET UNITYSDK_OFFSET(0x1C1C0610)
#define UNITYENGINE_ANIMATIONCLIP_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1C1C0440)
#define UNITYENGINE_ANIMATIONCLIP_GET_ENABLEACLDATABASESWEEP_OFFSET UNITYSDK_OFFSET(0x1C1C0650)
#define UNITYENGINE_ANIMATIONCLIP_GET_ENABLEDATABASESTREAMFASTPATH_OFFSET UNITYSDK_OFFSET(0x1C1C0670)
#define UNITYENGINE_ANIMATIONCLIP_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1C1C0550)
#define UNITYENGINE_ANIMATIONCLIP_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x1C1C0320)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASGENERICROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C1C0450)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASMOTIONCURVES_OFFSET UNITYSDK_OFFSET(0x1C1C0470)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASMOTIONFLOATCURVES_OFFSET UNITYSDK_OFFSET(0x1C1C0460)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASROOTCURVES_OFFSET UNITYSDK_OFFSET(0x1C1C0480)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASROOTMOTION_OFFSET UNITYSDK_OFFSET(0x1C1C0490)
#define UNITYENGINE_ANIMATIONCLIP_GET_HUMANMOTION_OFFSET UNITYSDK_OFFSET(0x1C1C0430)
#define UNITYENGINE_ANIMATIONCLIP_GET_LEGACY_OFFSET UNITYSDK_OFFSET(0x1C1C0410)
#define UNITYENGINE_ANIMATIONCLIP_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C1C02E0)
#define UNITYENGINE_ANIMATIONCLIP_GET_LOCALBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C1C03E0)
#define UNITYENGINE_ANIMATIONCLIP_GET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C1C0390)
#define UNITYENGINE_ANIMATIONCLIP_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1C1C0300)
#define UNITYENGINE_ANIMATIONCLIP_GET_STOPTIME_OFFSET UNITYSDK_OFFSET(0x1C1C0310)
#define UNITYENGINE_ANIMATIONCLIP_GET_TOTALSIZE_OFFSET UNITYSDK_OFFSET(0x1C1C02F0)
#define UNITYENGINE_ANIMATIONCLIP_GET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x1C1C02C0)
#define UNITYENGINE_ANIMATIONCLIP_INTERNAL_CREATEANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x1C1C0270)
#define UNITYENGINE_ANIMATIONCLIP_PRINTANIMATIONCLIPINLRU_OFFSET UNITYSDK_OFFSET(0x1C1C0640)
#define UNITYENGINE_ANIMATIONCLIP_SAMPLEANIMATION_1_OFFSET UNITYSDK_OFFSET(0x1C1C02D0)
#define UNITYENGINE_ANIMATIONCLIP_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x1C1C0280)
#define UNITYENGINE_ANIMATIONCLIP_SETACLDATABASELRUSIZE_OFFSET UNITYSDK_OFFSET(0x1C1C0620)
#define UNITYENGINE_ANIMATIONCLIP_SETCURVEFORTRANSFORMBATCHED_OFFSET UNITYSDK_OFFSET(0x1C1C0350)
#define UNITYENGINE_ANIMATIONCLIP_SETCURVE_OFFSET UNITYSDK_OFFSET(0x1C1C0340)
#define UNITYENGINE_ANIMATIONCLIP_SETEVENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C1C05E0)
#define UNITYENGINE_ANIMATIONCLIP_SET_ENABLEACLDATABASESWEEP_OFFSET UNITYSDK_OFFSET(0x1C1C0660)
#define UNITYENGINE_ANIMATIONCLIP_SET_ENABLEDATABASESTREAMFASTPATH_OFFSET UNITYSDK_OFFSET(0x1C1C0680)
#define UNITYENGINE_ANIMATIONCLIP_SET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1C1C05D0)
#define UNITYENGINE_ANIMATIONCLIP_SET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x1C1C0330)
#define UNITYENGINE_ANIMATIONCLIP_SET_LEGACY_OFFSET UNITYSDK_OFFSET(0x1C1C0420)
#define UNITYENGINE_ANIMATIONCLIP_SET_LOCALBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C1C0400)
#define UNITYENGINE_ANIMATIONCLIP_SET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C1C03F0)
#define UNITYENGINE_ANIMATIONCLIP_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x1C1C0380)
#define UNITYENGINE_ANIMATIONCLIP_STREAMINACLDATABASE_OFFSET UNITYSDK_OFFSET(0x1C1C05F0)
#define UNITYENGINE_ANIMATIONCLIP_STREAMOUTACLDATABASE_OFFSET UNITYSDK_OFFSET(0x1C1C0600)
#define UNITYENGINE_ANIMATIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1C0210)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationClip_TypeDefinitionIndex = 6527;

	class AnimationClip : public ::UnityEngine::Motion
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_CreateAnimationClip(::UnityEngine::AnimationClip* self)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_INTERNAL_CREATEANIMATIONCLIP_OFFSET))(self);
		}

		::System::Void SampleAnimation(::UnityEngine::GameObject* go, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SAMPLEANIMATION_OFFSET))(this, go, time);
		}

		static ::System::Void SampleAnimation_1(::UnityEngine::GameObject* go, ::UnityEngine::AnimationClip* clip, ::System::Single inTime, ::UnityEngine::WrapMode wrapMode)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::AnimationClip*, ::System::Single, ::UnityEngine::WrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SAMPLEANIMATION_1_OFFSET))(go, clip, inTime, wrapMode);
		}

		::System::Single get_length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_LENGTH_OFFSET))(this);
		}

		::System::UInt32 get_totalSize()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_TOTALSIZE_OFFSET))(this);
		}

		::System::Single get_startTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_STARTTIME_OFFSET))(this);
		}

		::System::Single get_stopTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_STOPTIME_OFFSET))(this);
		}

		::System::Single get_frameRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_FRAMERATE_OFFSET))(this);
		}

		::System::Void set_frameRate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_FRAMERATE_OFFSET))(this, value);
		}

		::System::Void SetCurve(::System::String* relativePath, ::System::Type* type, ::System::String* propertyName, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SETCURVE_OFFSET))(this, relativePath, type, propertyName, curve);
		}

		::System::Void SetCurveForTransformBatched(::UnityEngine::GameObject* animatorRoot, ::System::Int32 count, ::Il2CppArray<::System::String*>* relativePathes, ::Il2CppArray<::System::Byte>* ops)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SETCURVEFORTRANSFORMBATCHED_OFFSET))(this, animatorRoot, count, relativePathes, ops);
		}

		::System::Void EnsureQuaternionContinuity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_ENSUREQUATERNIONCONTINUITY_OFFSET))(this);
		}

		::System::Void ClearCurves()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_CLEARCURVES_OFFSET))(this);
		}

		::UnityEngine::WrapMode get_wrapMode()
		{
			return ((::UnityEngine::WrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_WRAPMODE_OFFSET))(this);
		}

		::System::Void set_wrapMode(::UnityEngine::WrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::WrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_WRAPMODE_OFFSET))(this, value);
		}

		::UnityEngine::Bounds get_localBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_LOCALBOUNDS_OFFSET))(this);
		}

		::System::Void set_localBounds(::UnityEngine::Bounds value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_LOCALBOUNDS_OFFSET))(this, value);
		}

		::System::Boolean get_legacy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_LEGACY_OFFSET))(this);
		}

		::System::Void set_legacy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_LEGACY_OFFSET))(this, value);
		}

		::System::Boolean get_humanMotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_HUMANMOTION_OFFSET))(this);
		}

		::System::Boolean get_empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_EMPTY_OFFSET))(this);
		}

		::System::Boolean get_hasGenericRootTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_HASGENERICROOTTRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_hasMotionFloatCurves()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_HASMOTIONFLOATCURVES_OFFSET))(this);
		}

		::System::Boolean get_hasMotionCurves()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_HASMOTIONCURVES_OFFSET))(this);
		}

		::System::Boolean get_hasRootCurves()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_HASROOTCURVES_OFFSET))(this);
		}

		::System::Boolean get_hasRootMotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_HASROOTMOTION_OFFSET))(this);
		}

		static ::Il2CppArray<::UnityEngine::StreamInClipInfo>* GetStreamInClipInfos()
		{
			return ((::Il2CppArray<::UnityEngine::StreamInClipInfo>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GETSTREAMINCLIPINFOS_OFFSET))();
		}

		static ::System::UInt64 GetRuntimeTotalACLDatabaseBytes()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GETRUNTIMETOTALACLDATABASEBYTES_OFFSET))();
		}

		::System::Void AddEvent(::UnityEngine::AnimationEvent* evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_ADDEVENT_OFFSET))(this, evt);
		}

		::System::Void AddEventInternal(::System::Object* evt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_ADDEVENTINTERNAL_OFFSET))(this, evt);
		}

		::Il2CppArray<::UnityEngine::AnimationEvent*>* get_events()
		{
			return ((::Il2CppArray<::UnityEngine::AnimationEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_EVENTS_OFFSET))(this);
		}

		::System::Void set_events(::Il2CppArray<::UnityEngine::AnimationEvent*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::AnimationEvent*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_EVENTS_OFFSET))(this, value);
		}

		::System::Void SetEventsInternal(::System::Array* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SETEVENTSINTERNAL_OFFSET))(this, value);
		}

		::System::Array* GetEventsInternal()
		{
			return ((::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GETEVENTSINTERNAL_OFFSET))(this);
		}

		::System::Void StreamInACLDatabase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_STREAMINACLDATABASE_OFFSET))(this);
		}

		::System::Void StreamOutACLDatabase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_STREAMOUTACLDATABASE_OFFSET))(this);
		}

		::System::Boolean GetStreamInDatabaseInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GETSTREAMINDATABASEINEDITOR_OFFSET))(this);
		}

		static ::System::Void SetACLDatabaseLRUSize(::System::UInt64 hardLimit)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SETACLDATABASELRUSIZE_OFFSET))(hardLimit);
		}

		static ::System::Int32 GetACLDatabaseLRUSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GETACLDATABASELRUSIZE_OFFSET))();
		}

		static ::System::Void PrintAnimationClipInLRU()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_PRINTANIMATIONCLIPINLRU_OFFSET))();
		}

		static ::System::Boolean get_enableACLDatabaseSweep()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_ENABLEACLDATABASESWEEP_OFFSET))();
		}

		static ::System::Void set_enableACLDatabaseSweep(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_ENABLEACLDATABASESWEEP_OFFSET))(value);
		}

		static ::System::Boolean get_enableDatabaseStreamFastPath()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_ENABLEDATABASESTREAMFASTPATH_OFFSET))();
		}

		static ::System::Void set_enableDatabaseStreamFastPath(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_ENABLEDATABASESTREAMFASTPATH_OFFSET))(value);
		}

		::System::Void get_localBounds_Injected(::UnityEngine::Bounds& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_LOCALBOUNDS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_localBounds_Injected(::UnityEngine::Bounds& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_LOCALBOUNDS_INJECTED_OFFSET))(this, value);
		}
	};
}
