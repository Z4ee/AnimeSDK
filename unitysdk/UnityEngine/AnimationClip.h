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

#define UNITYENGINE_ANIMATIONCLIP_ADDEVENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B261630)
#define UNITYENGINE_ANIMATIONCLIP_ADDEVENT_OFFSET UNITYSDK_OFFSET(0x1B2615B0)
#define UNITYENGINE_ANIMATIONCLIP_CLEARCURVES_OFFSET UNITYSDK_OFFSET(0x1B261450)
#define UNITYENGINE_ANIMATIONCLIP_ENSUREQUATERNIONCONTINUITY_OFFSET UNITYSDK_OFFSET(0x1B261440)
#define UNITYENGINE_ANIMATIONCLIP_GETEVENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2616B0)
#define UNITYENGINE_ANIMATIONCLIP_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1B261540)
#define UNITYENGINE_ANIMATIONCLIP_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1B261640)
#define UNITYENGINE_ANIMATIONCLIP_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x1B261410)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASGENERICROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B261550)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASMOTIONCURVES_OFFSET UNITYSDK_OFFSET(0x1B261570)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASMOTIONFLOATCURVES_OFFSET UNITYSDK_OFFSET(0x1B261560)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASROOTCURVES_OFFSET UNITYSDK_OFFSET(0x1B261580)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASROOTMOTION_OFFSET UNITYSDK_OFFSET(0x1B261590)
#define UNITYENGINE_ANIMATIONCLIP_GET_HUMANMOTION_OFFSET UNITYSDK_OFFSET(0x1B261530)
#define UNITYENGINE_ANIMATIONCLIP_GET_ISACLDATAVALID_OFFSET UNITYSDK_OFFSET(0x1B2615A0)
#define UNITYENGINE_ANIMATIONCLIP_GET_LEGACY_OFFSET UNITYSDK_OFFSET(0x1B2614F0)
#define UNITYENGINE_ANIMATIONCLIP_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1B2613E0)
#define UNITYENGINE_ANIMATIONCLIP_GET_LOCALBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2614C0)
#define UNITYENGINE_ANIMATIONCLIP_GET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B261470)
#define UNITYENGINE_ANIMATIONCLIP_GET_REDUCEDDELTAVALUES_OFFSET UNITYSDK_OFFSET(0x1B261510)
#define UNITYENGINE_ANIMATIONCLIP_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1B2613F0)
#define UNITYENGINE_ANIMATIONCLIP_GET_STOPTIME_OFFSET UNITYSDK_OFFSET(0x1B261400)
#define UNITYENGINE_ANIMATIONCLIP_GET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x1B2613C0)
#define UNITYENGINE_ANIMATIONCLIP_INTERNAL_CREATEANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x1B261370)
#define UNITYENGINE_ANIMATIONCLIP_SAMPLEANIMATION_1_OFFSET UNITYSDK_OFFSET(0x1B2613D0)
#define UNITYENGINE_ANIMATIONCLIP_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x1B261380)
#define UNITYENGINE_ANIMATIONCLIP_SETCURVE_OFFSET UNITYSDK_OFFSET(0x1B261430)
#define UNITYENGINE_ANIMATIONCLIP_SETEVENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2616D0)
#define UNITYENGINE_ANIMATIONCLIP_SET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1B2616C0)
#define UNITYENGINE_ANIMATIONCLIP_SET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x1B261420)
#define UNITYENGINE_ANIMATIONCLIP_SET_LEGACY_OFFSET UNITYSDK_OFFSET(0x1B261500)
#define UNITYENGINE_ANIMATIONCLIP_SET_LOCALBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2614E0)
#define UNITYENGINE_ANIMATIONCLIP_SET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B2614D0)
#define UNITYENGINE_ANIMATIONCLIP_SET_REDUCEDDELTAVALUES_OFFSET UNITYSDK_OFFSET(0x1B261520)
#define UNITYENGINE_ANIMATIONCLIP_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x1B261460)
#define UNITYENGINE_ANIMATIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B261350)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationClip_TypeDefinitionIndex = 5117;

	class AnimationClip : public ::UnityEngine::Motion
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_CreateAnimationClip(::UnityEngine::AnimationClip* a1)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_INTERNAL_CREATEANIMATIONCLIP_OFFSET))(a1);
		}

		::System::Void SampleAnimation(::UnityEngine::GameObject* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SAMPLEANIMATION_OFFSET))(this, a1, a2);
		}

		static ::System::Void SampleAnimation_1(::UnityEngine::GameObject* a1, ::UnityEngine::AnimationClip* a2, ::System::Single a3, ::UnityEngine::WrapMode a4)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::AnimationClip*, ::System::Single, ::UnityEngine::WrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SAMPLEANIMATION_1_OFFSET))(a1, a2, a3, a4);
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

		::System::Void set_frameRate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_FRAMERATE_OFFSET))(this, a1);
		}

		::System::Void SetCurve(::System::String* a1, ::System::Type* a2, ::System::String* a3, ::UnityEngine::AnimationCurve* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SETCURVE_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Void set_wrapMode(::UnityEngine::WrapMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::WrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_WRAPMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_localBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_LOCALBOUNDS_OFFSET))(this);
		}

		::System::Void set_localBounds(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_LOCALBOUNDS_OFFSET))(this, a1);
		}

		::System::Boolean get_legacy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_LEGACY_OFFSET))(this);
		}

		::System::Void set_legacy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_LEGACY_OFFSET))(this, a1);
		}

		::System::Boolean get_reducedDeltaValues()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_REDUCEDDELTAVALUES_OFFSET))(this);
		}

		::System::Void set_reducedDeltaValues(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_REDUCEDDELTAVALUES_OFFSET))(this, a1);
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

		::System::Void AddEvent(::UnityEngine::AnimationEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_ADDEVENT_OFFSET))(this, a1);
		}

		::System::Void AddEventInternal(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_ADDEVENTINTERNAL_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::AnimationEvent*>* get_events()
		{
			return ((::Il2CppArray<::UnityEngine::AnimationEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_EVENTS_OFFSET))(this);
		}

		::System::Void set_events(::Il2CppArray<::UnityEngine::AnimationEvent*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::AnimationEvent*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_EVENTS_OFFSET))(this, a1);
		}

		::System::Void SetEventsInternal(::System::Array* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SETEVENTSINTERNAL_OFFSET))(this, a1);
		}

		::System::Array* GetEventsInternal()
		{
			return ((::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GETEVENTSINTERNAL_OFFSET))(this);
		}

		::System::Void get_localBounds_Injected(::UnityEngine::Bounds& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_LOCALBOUNDS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_localBounds_Injected(::UnityEngine::Bounds& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_LOCALBOUNDS_INJECTED_OFFSET))(this, a1);
		}
	};
}
