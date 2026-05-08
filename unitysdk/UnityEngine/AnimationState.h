#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimationBlendMode.h"
#include "unitysdk/UnityEngine/TrackedReference.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_ANIMATIONSTATE_ADDMIXINGTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C547A80)
#define UNITYENGINE_ANIMATIONSTATE_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1C547A70)
#define UNITYENGINE_ANIMATIONSTATE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1C5479A0)
#define UNITYENGINE_ANIMATIONSTATE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C547A50)
#define UNITYENGINE_ANIMATIONSTATE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C547A90)
#define UNITYENGINE_ANIMATIONSTATE_GET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x1C547A10)
#define UNITYENGINE_ANIMATIONSTATE_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1C547A30)
#define UNITYENGINE_ANIMATIONSTATE_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1C5479F0)
#define UNITYENGINE_ANIMATIONSTATE_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1C5479C0)
#define UNITYENGINE_ANIMATIONSTATE_SET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x1C547AA0)
#define UNITYENGINE_ANIMATIONSTATE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1C5479B0)
#define UNITYENGINE_ANIMATIONSTATE_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x1C547A60)
#define UNITYENGINE_ANIMATIONSTATE_SET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x1C547A20)
#define UNITYENGINE_ANIMATIONSTATE_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x1C547A40)
#define UNITYENGINE_ANIMATIONSTATE_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1C547A00)
#define UNITYENGINE_ANIMATIONSTATE_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1C5479D0)
#define UNITYENGINE_ANIMATIONSTATE_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x1C5479E0)
#define UNITYENGINE_ANIMATIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C547AB0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationState_TypeDefinitionIndex = 6581;

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
