#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_ASHUMAN_OFFSET UNITYSDK_OFFSET(0xADA390)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_CHECKISVALID_OFFSET UNITYSDK_OFFSET(0xAD9F80)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETANGULARVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC5E350)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0xADA6F0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETDELTATIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC5E310)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0xADA660)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETHUMANSTREAM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC5E390)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETHUMANSTREAM_OFFSET UNITYSDK_OFFSET(0xADA7E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETINPUTSTREAMCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC5E370)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETINPUTSTREAMCOUNT_OFFSET UNITYSDK_OFFSET(0xADA760)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETINPUTSTREAM_OFFSET UNITYSDK_OFFSET(0xADA560)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETISHUMANSTREAM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC5E320)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETISHUMANSTREAM_OFFSET UNITYSDK_OFFSET(0xADA670)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC5E330)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETVELOCITY_OFFSET UNITYSDK_OFFSET(0xADA680)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0xADA220)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GET_ANIMATORBINDINGSVERSION_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0xADA010)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GET_INPUTSTREAMCOUNT_OFFSET UNITYSDK_OFFSET(0xADA4C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xAD9F50)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0xADA0B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_INTERNALGETINPUTSTREAM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC5E380)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_INTERNALGETINPUTSTREAM_OFFSET UNITYSDK_OFFSET(0xADA770)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_SETANGULARVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC5E360)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_SETANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0xADA730)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_SETVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC5E340)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0xADA6C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0xADA2E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0xADA170)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationStream_TypeDefinitionIndex = 6688;

	struct alignas(8) AnimationStream
	{
		::System::UInt32 m_AnimatorBindingsVersion; // 0x10
		::System::IntPtr constant; // 0x18
		::System::IntPtr input; // 0x20
		::System::IntPtr output; // 0x28
		::System::IntPtr workspace; // 0x30
		::System::IntPtr inputStreamAccessor; // 0x38
		::System::IntPtr animationHandleBinder; // 0x40

		::System::UInt32 get_animatorBindingsVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GET_ANIMATORBINDINGSVERSION_OFFSET))(this);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GET_ISVALID_OFFSET))(this);
		}

		::System::Void CheckIsValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_CHECKISVALID_OFFSET))(this);
		}

		::System::Single get_deltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GET_DELTATIME_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GET_VELOCITY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_velocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_SET_VELOCITY_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Vector3 get_angularVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GET_ANGULARVELOCITY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_angularVelocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_SET_ANGULARVELOCITY_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Animations::AnimationHumanStream AsHuman()
		{
			return ((::UnityEngine::Animations::AnimationHumanStream(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_ASHUMAN_OFFSET))(this);
		}
		*/

		::System::Int32 get_inputStreamCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GET_INPUTSTREAMCOUNT_OFFSET))(this);
		}

		::UnityEngine::Animations::AnimationStream GetInputStream(::System::Int32 index)
		{
			return ((::UnityEngine::Animations::AnimationStream(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETINPUTSTREAM_OFFSET))(this, index);
		}

		::System::Single GetDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETDELTATIME_OFFSET))(this);
		}

		::System::Boolean GetIsHumanStream()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETISHUMANSTREAM_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector3 GetVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETVELOCITY_OFFSET))(this);
		}
		*/

		/*
		::System::Void SetVelocity(::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_SETVELOCITY_OFFSET))(this, velocity);
		}
		*/

		/*
		::UnityEngine::Vector3 GetAngularVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETANGULARVELOCITY_OFFSET))(this);
		}
		*/

		/*
		::System::Void SetAngularVelocity(::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_SETANGULARVELOCITY_OFFSET))(this, velocity);
		}
		*/

		::System::Int32 GetInputStreamCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETINPUTSTREAMCOUNT_OFFSET))(this);
		}

		::UnityEngine::Animations::AnimationStream InternalGetInputStream(::System::Int32 index)
		{
			return ((::UnityEngine::Animations::AnimationStream(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_INTERNALGETINPUTSTREAM_OFFSET))(this, index);
		}

		/*
		::UnityEngine::Animations::AnimationHumanStream GetHumanStream()
		{
			return ((::UnityEngine::Animations::AnimationHumanStream(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETHUMANSTREAM_OFFSET))(this);
		}
		*/

		static ::System::Single GetDeltaTime_Injected(::UnityEngine::Animations::AnimationStream& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETDELTATIME_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Boolean GetIsHumanStream_Injected(::UnityEngine::Animations::AnimationStream& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETISHUMANSTREAM_INJECTED_OFFSET))(_unity_self);
		}

		/*
		static ::System::Void GetVelocity_Injected(::UnityEngine::Animations::AnimationStream& _unity_self, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETVELOCITY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void SetVelocity_Injected(::UnityEngine::Animations::AnimationStream& _unity_self, ::UnityEngine::Vector3& velocity)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_SETVELOCITY_INJECTED_OFFSET))(_unity_self, velocity);
		}
		*/

		/*
		static ::System::Void GetAngularVelocity_Injected(::UnityEngine::Animations::AnimationStream& _unity_self, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETANGULARVELOCITY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void SetAngularVelocity_Injected(::UnityEngine::Animations::AnimationStream& _unity_self, ::UnityEngine::Vector3& velocity)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_SETANGULARVELOCITY_INJECTED_OFFSET))(_unity_self, velocity);
		}
		*/

		static ::System::Int32 GetInputStreamCount_Injected(::UnityEngine::Animations::AnimationStream& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETINPUTSTREAMCOUNT_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void InternalGetInputStream_Injected(::UnityEngine::Animations::AnimationStream& _unity_self, ::System::Int32 index, ::UnityEngine::Animations::AnimationStream& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationStream&, ::System::Int32, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_INTERNALGETINPUTSTREAM_INJECTED_OFFSET))(_unity_self, index, ret);
		}

		/*
		static ::System::Void GetHumanStream_Injected(::UnityEngine::Animations::AnimationStream& _unity_self, ::UnityEngine::Animations::AnimationHumanStream& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationStream&, ::UnityEngine::Animations::AnimationHumanStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETHUMANSTREAM_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/
	};
}
