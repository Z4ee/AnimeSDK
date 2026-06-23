#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimationBlendMode.h"
#include "unitysdk/UnityEngine/TrackedReference.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_ANIMATIONSTATE_ADDMIXINGTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E878260)
#define UNITYENGINE_ANIMATIONSTATE_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1E878250)
#define UNITYENGINE_ANIMATIONSTATE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1E878180)
#define UNITYENGINE_ANIMATIONSTATE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E878230)
#define UNITYENGINE_ANIMATIONSTATE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E878270)
#define UNITYENGINE_ANIMATIONSTATE_GET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x1E8781F0)
#define UNITYENGINE_ANIMATIONSTATE_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1E878210)
#define UNITYENGINE_ANIMATIONSTATE_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1E8781D0)
#define UNITYENGINE_ANIMATIONSTATE_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1E8781A0)
#define UNITYENGINE_ANIMATIONSTATE_SET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x1E878280)
#define UNITYENGINE_ANIMATIONSTATE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1E878190)
#define UNITYENGINE_ANIMATIONSTATE_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x1E878240)
#define UNITYENGINE_ANIMATIONSTATE_SET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x1E878200)
#define UNITYENGINE_ANIMATIONSTATE_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x1E878220)
#define UNITYENGINE_ANIMATIONSTATE_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1E8781E0)
#define UNITYENGINE_ANIMATIONSTATE_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1E8781B0)
#define UNITYENGINE_ANIMATIONSTATE_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x1E8781C0)
#define UNITYENGINE_ANIMATIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E878290)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationState_TypeDefinitionIndex = 6663;

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

		::System::Single get_length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_LENGTH_OFFSET))(this);
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

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_blendMode(::UnityEngine::AnimationBlendMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationBlendMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_BLENDMODE_OFFSET))(this, value);
		}
	};
}
