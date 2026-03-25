#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Motion.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class AnimationEvent; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_ANIMATIONCLIP_ADDEVENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x189D34F0)
#define UNITYENGINE_ANIMATIONCLIP_ADDEVENT_OFFSET UNITYSDK_OFFSET(0x189D3470)
#define UNITYENGINE_ANIMATIONCLIP_CLEARCURVES_OFFSET UNITYSDK_OFFSET(0x189D3310)
#define UNITYENGINE_ANIMATIONCLIP_ENSUREQUATERNIONCONTINUITY_OFFSET UNITYSDK_OFFSET(0x189D3300)
#define UNITYENGINE_ANIMATIONCLIP_GETEVENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x189D3540)
#define UNITYENGINE_ANIMATIONCLIP_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x189D3400)
#define UNITYENGINE_ANIMATIONCLIP_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x189D3500)
#define UNITYENGINE_ANIMATIONCLIP_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x189D32D0)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASGENERICROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x189D3410)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASMOTIONCURVES_OFFSET UNITYSDK_OFFSET(0x189D3430)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASMOTIONFLOATCURVES_OFFSET UNITYSDK_OFFSET(0x189D3420)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASROOTCURVES_OFFSET UNITYSDK_OFFSET(0x189D3440)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASROOTMOTION_OFFSET UNITYSDK_OFFSET(0x189D3450)
#define UNITYENGINE_ANIMATIONCLIP_GET_HUMANMOTION_OFFSET UNITYSDK_OFFSET(0x189D33F0)
#define UNITYENGINE_ANIMATIONCLIP_GET_ISACLDATAVALID_OFFSET UNITYSDK_OFFSET(0x189D3460)
#define UNITYENGINE_ANIMATIONCLIP_GET_LEGACY_OFFSET UNITYSDK_OFFSET(0x189D33B0)
#define UNITYENGINE_ANIMATIONCLIP_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x189D32A0)
#define UNITYENGINE_ANIMATIONCLIP_GET_LOCALBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x189D3380)
#define UNITYENGINE_ANIMATIONCLIP_GET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x189D3330)
#define UNITYENGINE_ANIMATIONCLIP_GET_REDUCEDDELTAVALUES_OFFSET UNITYSDK_OFFSET(0x189D33D0)
#define UNITYENGINE_ANIMATIONCLIP_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x189D32B0)
#define UNITYENGINE_ANIMATIONCLIP_GET_STOPTIME_OFFSET UNITYSDK_OFFSET(0x189D32C0)
#define UNITYENGINE_ANIMATIONCLIP_GET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x189D3280)
#define UNITYENGINE_ANIMATIONCLIP_INTERNAL_CREATEANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x189D3230)
#define UNITYENGINE_ANIMATIONCLIP_SAMPLEANIMATION_1_OFFSET UNITYSDK_OFFSET(0x189D3290)
#define UNITYENGINE_ANIMATIONCLIP_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x189D3240)
#define UNITYENGINE_ANIMATIONCLIP_SETCURVE_OFFSET UNITYSDK_OFFSET(0x189D32F0)
#define UNITYENGINE_ANIMATIONCLIP_SETEVENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x189D3560)
#define UNITYENGINE_ANIMATIONCLIP_SET_EVENTS_OFFSET UNITYSDK_OFFSET(0x189D3550)
#define UNITYENGINE_ANIMATIONCLIP_SET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x189D32E0)
#define UNITYENGINE_ANIMATIONCLIP_SET_LEGACY_OFFSET UNITYSDK_OFFSET(0x189D33C0)
#define UNITYENGINE_ANIMATIONCLIP_SET_LOCALBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x189D33A0)
#define UNITYENGINE_ANIMATIONCLIP_SET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x189D3390)
#define UNITYENGINE_ANIMATIONCLIP_SET_REDUCEDDELTAVALUES_OFFSET UNITYSDK_OFFSET(0x189D33E0)
#define UNITYENGINE_ANIMATIONCLIP_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x189D3320)
#define UNITYENGINE_ANIMATIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x189D3210)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationClip_TypeDefinitionIndex = 5015;

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

		::System::Boolean get_reducedDeltaValues()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_REDUCEDDELTAVALUES_OFFSET))(this);
		}

		::System::Void set_reducedDeltaValues(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_REDUCEDDELTAVALUES_OFFSET))(this, value);
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

		::System::Boolean get_isAclDataValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_ISACLDATAVALID_OFFSET))(this);
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
