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

#define UNITYENGINE_ANIMATIONCLIP_ADDEVENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A40CF50)
#define UNITYENGINE_ANIMATIONCLIP_ADDEVENT_OFFSET UNITYSDK_OFFSET(0x1A40CF00)
#define UNITYENGINE_ANIMATIONCLIP_CLEARCURVES_OFFSET UNITYSDK_OFFSET(0x1A40CDA0)
#define UNITYENGINE_ANIMATIONCLIP_ENSUREQUATERNIONCONTINUITY_OFFSET UNITYSDK_OFFSET(0x1A40CD90)
#define UNITYENGINE_ANIMATIONCLIP_GETEVENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A40CFA0)
#define UNITYENGINE_ANIMATIONCLIP_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1A40CE90)
#define UNITYENGINE_ANIMATIONCLIP_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1A40CF60)
#define UNITYENGINE_ANIMATIONCLIP_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x1A40CD60)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASGENERICROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A40CEA0)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASMOTIONCURVES_OFFSET UNITYSDK_OFFSET(0x1A40CEC0)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASMOTIONFLOATCURVES_OFFSET UNITYSDK_OFFSET(0x1A40CEB0)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASROOTCURVES_OFFSET UNITYSDK_OFFSET(0x1A40CED0)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASROOTMOTION_OFFSET UNITYSDK_OFFSET(0x1A40CEE0)
#define UNITYENGINE_ANIMATIONCLIP_GET_HUMANMOTION_OFFSET UNITYSDK_OFFSET(0x1A40CE80)
#define UNITYENGINE_ANIMATIONCLIP_GET_ISACLDATAVALID_OFFSET UNITYSDK_OFFSET(0x1A40CEF0)
#define UNITYENGINE_ANIMATIONCLIP_GET_LEGACY_OFFSET UNITYSDK_OFFSET(0x1A40CE40)
#define UNITYENGINE_ANIMATIONCLIP_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1A40CD30)
#define UNITYENGINE_ANIMATIONCLIP_GET_LOCALBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A40CE10)
#define UNITYENGINE_ANIMATIONCLIP_GET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A40CDC0)
#define UNITYENGINE_ANIMATIONCLIP_GET_REDUCEDDELTAVALUES_OFFSET UNITYSDK_OFFSET(0x1A40CE60)
#define UNITYENGINE_ANIMATIONCLIP_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1A40CD40)
#define UNITYENGINE_ANIMATIONCLIP_GET_STOPTIME_OFFSET UNITYSDK_OFFSET(0x1A40CD50)
#define UNITYENGINE_ANIMATIONCLIP_GET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x1A40CD10)
#define UNITYENGINE_ANIMATIONCLIP_INTERNAL_CREATEANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x1A40CCC0)
#define UNITYENGINE_ANIMATIONCLIP_SAMPLEANIMATION_1_OFFSET UNITYSDK_OFFSET(0x1A40CD20)
#define UNITYENGINE_ANIMATIONCLIP_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x1A40CCD0)
#define UNITYENGINE_ANIMATIONCLIP_SETCURVE_OFFSET UNITYSDK_OFFSET(0x1A40CD80)
#define UNITYENGINE_ANIMATIONCLIP_SETEVENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A40CFC0)
#define UNITYENGINE_ANIMATIONCLIP_SET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1A40CFB0)
#define UNITYENGINE_ANIMATIONCLIP_SET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x1A40CD70)
#define UNITYENGINE_ANIMATIONCLIP_SET_LEGACY_OFFSET UNITYSDK_OFFSET(0x1A40CE50)
#define UNITYENGINE_ANIMATIONCLIP_SET_LOCALBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A40CE30)
#define UNITYENGINE_ANIMATIONCLIP_SET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A40CE20)
#define UNITYENGINE_ANIMATIONCLIP_SET_REDUCEDDELTAVALUES_OFFSET UNITYSDK_OFFSET(0x1A40CE70)
#define UNITYENGINE_ANIMATIONCLIP_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x1A40CDB0)
#define UNITYENGINE_ANIMATIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A40CCA0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationClip_TypeDefinitionIndex = 5023;

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
