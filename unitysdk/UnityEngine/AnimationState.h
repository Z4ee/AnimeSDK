#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimationBlendMode.h"
#include "unitysdk/UnityEngine/TrackedReference.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_ANIMATIONSTATE_ADDMIXINGTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0x1A40D530)
#define UNITYENGINE_ANIMATIONSTATE_ADDMIXINGTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A40D520)
#define UNITYENGINE_ANIMATIONSTATE_GET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x1A40D570)
#define UNITYENGINE_ANIMATIONSTATE_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1A40CB10)
#define UNITYENGINE_ANIMATIONSTATE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A40D410)
#define UNITYENGINE_ANIMATIONSTATE_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1A40D500)
#define UNITYENGINE_ANIMATIONSTATE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1A40D4F0)
#define UNITYENGINE_ANIMATIONSTATE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A40D550)
#define UNITYENGINE_ANIMATIONSTATE_GET_NORMALIZEDSPEED_OFFSET UNITYSDK_OFFSET(0x1A40D4D0)
#define UNITYENGINE_ANIMATIONSTATE_GET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x1A40D490)
#define UNITYENGINE_ANIMATIONSTATE_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1A40D4B0)
#define UNITYENGINE_ANIMATIONSTATE_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1A40D470)
#define UNITYENGINE_ANIMATIONSTATE_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1A40D430)
#define UNITYENGINE_ANIMATIONSTATE_GET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x1A40D450)
#define UNITYENGINE_ANIMATIONSTATE_REMOVEMIXINGTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A40D540)
#define UNITYENGINE_ANIMATIONSTATE_SET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x1A40D580)
#define UNITYENGINE_ANIMATIONSTATE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A40D420)
#define UNITYENGINE_ANIMATIONSTATE_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x1A40D510)
#define UNITYENGINE_ANIMATIONSTATE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1A40D560)
#define UNITYENGINE_ANIMATIONSTATE_SET_NORMALIZEDSPEED_OFFSET UNITYSDK_OFFSET(0x1A40D4E0)
#define UNITYENGINE_ANIMATIONSTATE_SET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x1A40D4A0)
#define UNITYENGINE_ANIMATIONSTATE_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x1A40D4C0)
#define UNITYENGINE_ANIMATIONSTATE_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1A40D480)
#define UNITYENGINE_ANIMATIONSTATE_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1A40D440)
#define UNITYENGINE_ANIMATIONSTATE_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x1A40D460)
#define UNITYENGINE_ANIMATIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A40D590)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationState_TypeDefinitionIndex = 5070;

	class AnimationState : public ::UnityEngine::TrackedReference
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Single get_weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_weight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_WEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::WrapMode get_wrapMode()
		{
			return ((::UnityEngine::WrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_WRAPMODE_OFFSET))(this);
		}

		::System::Void set_wrapMode(::UnityEngine::WrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::WrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_WRAPMODE_OFFSET))(this, value);
		}

		::System::Single get_time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_TIME_OFFSET))(this, value);
		}

		::System::Single get_normalizedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_NORMALIZEDTIME_OFFSET))(this);
		}

		::System::Void set_normalizedTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_NORMALIZEDTIME_OFFSET))(this, value);
		}

		::System::Single get_speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_SPEED_OFFSET))(this, value);
		}

		::System::Single get_normalizedSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_NORMALIZEDSPEED_OFFSET))(this);
		}

		::System::Void set_normalizedSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_NORMALIZEDSPEED_OFFSET))(this, value);
		}

		::System::Single get_length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_LENGTH_OFFSET))(this);
		}

		::System::Int32 get_layer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_layer(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_LAYER_OFFSET))(this, value);
		}

		::UnityEngine::AnimationClip* get_clip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_CLIP_OFFSET))(this);
		}

		::System::Void AddMixingTransform(::UnityEngine::Transform* mix, ::System::Boolean recursive)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_ADDMIXINGTRANSFORM_OFFSET))(this, mix, recursive);
		}

		::System::Void AddMixingTransform_1(::UnityEngine::Transform* mix)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_ADDMIXINGTRANSFORM_1_OFFSET))(this, mix);
		}

		::System::Void RemoveMixingTransform(::UnityEngine::Transform* mix)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_REMOVEMIXINGTRANSFORM_OFFSET))(this, mix);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_NAME_OFFSET))(this, value);
		}

		::UnityEngine::AnimationBlendMode get_blendMode()
		{
			return ((::UnityEngine::AnimationBlendMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_BLENDMODE_OFFSET))(this);
		}

		::System::Void set_blendMode(::UnityEngine::AnimationBlendMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationBlendMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_BLENDMODE_OFFSET))(this, value);
		}
	};
}
