#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AvatarIKGoal.h"
#include "unitysdk/UnityEngine/AvatarIKHint.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GETGOALPOSITION_OFFSET UNITYSDK_OFFSET(0x9D17D0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GETGOALWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0x9D1AD0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GET_BODYPOSITION_OFFSET UNITYSDK_OFFSET(0x9D1600)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2F0450)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETBODYPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336CC0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETBODYPOSITION_OFFSET UNITYSDK_OFFSET(0x9D1FD0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336CF0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALPOSITION_OFFSET UNITYSDK_OFFSET(0x9D2070)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALWEIGHTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336D40)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0x9D2140)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336CD0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYPOSITION_OFFSET UNITYSDK_OFFSET(0x9D2010)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336CE0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYROTATION_OFFSET UNITYSDK_OFFSET(0x9D2040)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336D00)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALPOSITION_OFFSET UNITYSDK_OFFSET(0x9D20C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336D10)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALROTATION_OFFSET UNITYSDK_OFFSET(0x9D20F0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336D20)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0x9D2120)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336D30)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTROTATION_OFFSET UNITYSDK_OFFSET(0x9D2130)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336D50)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTPOSITION_OFFSET UNITYSDK_OFFSET(0x9D2150)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTWEIGHTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336D60)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0x9D2180)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATBODYWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336D90)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATBODYWEIGHT_OFFSET UNITYSDK_OFFSET(0x9D21D0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATCLAMPWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336D80)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATCLAMPWEIGHT_OFFSET UNITYSDK_OFFSET(0x9D21C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATEYESWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336DB0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATEYESWEIGHT_OFFSET UNITYSDK_OFFSET(0x9D21F0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATHEADWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336DA0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATHEADWEIGHT_OFFSET UNITYSDK_OFFSET(0x9D21E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336D70)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATPOSITION_OFFSET UNITYSDK_OFFSET(0x9D2190)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSOLVEIK_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C336DC0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSOLVEIK_OFFSET UNITYSDK_OFFSET(0x9D2200)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALPOSITION_OFFSET UNITYSDK_OFFSET(0x9D1880)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALROTATION_OFFSET UNITYSDK_OFFSET(0x9D1920)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0x9D19B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALWEIGHTROTATION_OFFSET UNITYSDK_OFFSET(0x9D1A40)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETHINTPOSITION_OFFSET UNITYSDK_OFFSET(0x9D1B50)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETHINTWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0x9D1BF0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATBODYWEIGHT_OFFSET UNITYSDK_OFFSET(0x9D1DB0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATCLAMPWEIGHT_OFFSET UNITYSDK_OFFSET(0x9D1D20)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATEYESWEIGHT_OFFSET UNITYSDK_OFFSET(0x9D1ED0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATHEADWEIGHT_OFFSET UNITYSDK_OFFSET(0x9D1E40)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATPOSITION_OFFSET UNITYSDK_OFFSET(0x9D1C80)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SET_BODYPOSITION_OFFSET UNITYSDK_OFFSET(0x9D16A0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SET_BODYROTATION_OFFSET UNITYSDK_OFFSET(0x9D1740)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SOLVEIK_OFFSET UNITYSDK_OFFSET(0x9D1F60)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_THROWIFINVALID_OFFSET UNITYSDK_OFFSET(0x9D1590)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationHumanStream_TypeDefinitionIndex = 6590;

	struct alignas(8) AnimationHumanStream
	{
		::System::IntPtr stream; // 0x10

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GET_ISVALID_OFFSET))(this);
		}

		::System::Void ThrowIfInvalid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_THROWIFINVALID_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector3 get_bodyPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GET_BODYPOSITION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_bodyPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SET_BODYPOSITION_OFFSET))(this, value);
		}
		*/

		/*
		::System::Void set_bodyRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SET_BODYROTATION_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Vector3 GetGoalPosition(::UnityEngine::AvatarIKGoal index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GETGOALPOSITION_OFFSET))(this, index);
		}
		*/

		/*
		::System::Void SetGoalPosition(::UnityEngine::AvatarIKGoal index, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALPOSITION_OFFSET))(this, index, pos);
		}
		*/

		/*
		::System::Void SetGoalRotation(::UnityEngine::AvatarIKGoal index, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALROTATION_OFFSET))(this, index, rot);
		}
		*/

		::System::Void SetGoalWeightPosition(::UnityEngine::AvatarIKGoal index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALWEIGHTPOSITION_OFFSET))(this, index, value);
		}

		::System::Void SetGoalWeightRotation(::UnityEngine::AvatarIKGoal index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALWEIGHTROTATION_OFFSET))(this, index, value);
		}

		::System::Single GetGoalWeightPosition(::UnityEngine::AvatarIKGoal index)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GETGOALWEIGHTPOSITION_OFFSET))(this, index);
		}

		/*
		::System::Void SetHintPosition(::UnityEngine::AvatarIKHint index, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKHint, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETHINTPOSITION_OFFSET))(this, index, pos);
		}
		*/

		::System::Void SetHintWeightPosition(::UnityEngine::AvatarIKHint index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKHint, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETHINTWEIGHTPOSITION_OFFSET))(this, index, value);
		}

		/*
		::System::Void SetLookAtPosition(::UnityEngine::Vector3 lookAtPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATPOSITION_OFFSET))(this, lookAtPosition);
		}
		*/

		::System::Void SetLookAtClampWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATCLAMPWEIGHT_OFFSET))(this, weight);
		}

		::System::Void SetLookAtBodyWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATBODYWEIGHT_OFFSET))(this, weight);
		}

		::System::Void SetLookAtHeadWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATHEADWEIGHT_OFFSET))(this, weight);
		}

		::System::Void SetLookAtEyesWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATEYESWEIGHT_OFFSET))(this, weight);
		}

		::System::Void SolveIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SOLVEIK_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector3 InternalGetBodyPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETBODYPOSITION_OFFSET))(this);
		}
		*/

		/*
		::System::Void InternalSetBodyPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYPOSITION_OFFSET))(this, value);
		}
		*/

		/*
		::System::Void InternalSetBodyRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYROTATION_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Vector3 InternalGetGoalPosition(::UnityEngine::AvatarIKGoal index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALPOSITION_OFFSET))(this, index);
		}
		*/

		/*
		::System::Void InternalSetGoalPosition(::UnityEngine::AvatarIKGoal index, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALPOSITION_OFFSET))(this, index, pos);
		}
		*/

		/*
		::System::Void InternalSetGoalRotation(::UnityEngine::AvatarIKGoal index, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALROTATION_OFFSET))(this, index, rot);
		}
		*/

		::System::Void InternalSetGoalWeightPosition(::UnityEngine::AvatarIKGoal index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTPOSITION_OFFSET))(this, index, value);
		}

		::System::Void InternalSetGoalWeightRotation(::UnityEngine::AvatarIKGoal index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTROTATION_OFFSET))(this, index, value);
		}

		::System::Single InternalGetGoalWeightPosition(::UnityEngine::AvatarIKGoal index)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALWEIGHTPOSITION_OFFSET))(this, index);
		}

		/*
		::System::Void InternalSetHintPosition(::UnityEngine::AvatarIKHint index, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKHint, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTPOSITION_OFFSET))(this, index, pos);
		}
		*/

		::System::Void InternalSetHintWeightPosition(::UnityEngine::AvatarIKHint index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKHint, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTWEIGHTPOSITION_OFFSET))(this, index, value);
		}

		/*
		::System::Void InternalSetLookAtPosition(::UnityEngine::Vector3 lookAtPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATPOSITION_OFFSET))(this, lookAtPosition);
		}
		*/

		::System::Void InternalSetLookAtClampWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATCLAMPWEIGHT_OFFSET))(this, weight);
		}

		::System::Void InternalSetLookAtBodyWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATBODYWEIGHT_OFFSET))(this, weight);
		}

		::System::Void InternalSetLookAtHeadWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATHEADWEIGHT_OFFSET))(this, weight);
		}

		::System::Void InternalSetLookAtEyesWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATEYESWEIGHT_OFFSET))(this, weight);
		}

		::System::Void InternalSolveIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSOLVEIK_OFFSET))(this);
		}

		/*
		static ::System::Void InternalGetBodyPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETBODYPOSITION_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void InternalSetBodyPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYPOSITION_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void InternalSetBodyRotation_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::Quaternion& value)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYROTATION_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void InternalGetGoalPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::AvatarIKGoal index, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::AvatarIKGoal, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALPOSITION_INJECTED_OFFSET))(_unity_self, index, ret);
		}
		*/

		/*
		static ::System::Void InternalSetGoalPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::AvatarIKGoal index, ::UnityEngine::Vector3& pos)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::AvatarIKGoal, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALPOSITION_INJECTED_OFFSET))(_unity_self, index, pos);
		}
		*/

		/*
		static ::System::Void InternalSetGoalRotation_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::AvatarIKGoal index, ::UnityEngine::Quaternion& rot)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::AvatarIKGoal, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALROTATION_INJECTED_OFFSET))(_unity_self, index, rot);
		}
		*/

		static ::System::Void InternalSetGoalWeightPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::AvatarIKGoal index, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::AvatarIKGoal, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTPOSITION_INJECTED_OFFSET))(_unity_self, index, value);
		}

		static ::System::Void InternalSetGoalWeightRotation_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::AvatarIKGoal index, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::AvatarIKGoal, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTROTATION_INJECTED_OFFSET))(_unity_self, index, value);
		}

		static ::System::Single InternalGetGoalWeightPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::AvatarIKGoal index)
		{
			return ((::System::Single(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALWEIGHTPOSITION_INJECTED_OFFSET))(_unity_self, index);
		}

		/*
		static ::System::Void InternalSetHintPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::AvatarIKHint index, ::UnityEngine::Vector3& pos)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::AvatarIKHint, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTPOSITION_INJECTED_OFFSET))(_unity_self, index, pos);
		}
		*/

		static ::System::Void InternalSetHintWeightPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::AvatarIKHint index, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::AvatarIKHint, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTWEIGHTPOSITION_INJECTED_OFFSET))(_unity_self, index, value);
		}

		/*
		static ::System::Void InternalSetLookAtPosition_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::UnityEngine::Vector3& lookAtPosition)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATPOSITION_INJECTED_OFFSET))(_unity_self, lookAtPosition);
		}
		*/

		static ::System::Void InternalSetLookAtClampWeight_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::System::Single weight)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATCLAMPWEIGHT_INJECTED_OFFSET))(_unity_self, weight);
		}

		static ::System::Void InternalSetLookAtBodyWeight_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::System::Single weight)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATBODYWEIGHT_INJECTED_OFFSET))(_unity_self, weight);
		}

		static ::System::Void InternalSetLookAtHeadWeight_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::System::Single weight)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATHEADWEIGHT_INJECTED_OFFSET))(_unity_self, weight);
		}

		static ::System::Void InternalSetLookAtEyesWeight_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self, ::System::Single weight)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATEYESWEIGHT_INJECTED_OFFSET))(_unity_self, weight);
		}

		static ::System::Void InternalSolveIK_Injected(::UnityEngine::Animations::AnimationHumanStream& _unity_self)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationHumanStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSOLVEIK_INJECTED_OFFSET))(_unity_self);
		}
	};
}
