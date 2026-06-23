#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AvatarIKGoal.h"
#include "unitysdk/UnityEngine/AvatarIKHint.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GETGOALPOSITION_OFFSET UNITYSDK_OFFSET(0xA71D90)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GETGOALWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0xA72090)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GET_BODYPOSITION_OFFSET UNITYSDK_OFFSET(0xA71BC0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2C1A40)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETBODYPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E645F30)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETBODYPOSITION_OFFSET UNITYSDK_OFFSET(0xA72590)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E645F60)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALPOSITION_OFFSET UNITYSDK_OFFSET(0xA72630)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALWEIGHTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E645FB0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALGETGOALWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0xA72700)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E645F40)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYPOSITION_OFFSET UNITYSDK_OFFSET(0xA725D0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E645F50)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETBODYROTATION_OFFSET UNITYSDK_OFFSET(0xA72600)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E645F70)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALPOSITION_OFFSET UNITYSDK_OFFSET(0xA72680)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E645F80)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALROTATION_OFFSET UNITYSDK_OFFSET(0xA726B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E645F90)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0xA726E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E645FA0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETGOALWEIGHTROTATION_OFFSET UNITYSDK_OFFSET(0xA726F0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E645FC0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTPOSITION_OFFSET UNITYSDK_OFFSET(0xA72710)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTWEIGHTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E645FD0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETHINTWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0xA72740)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATBODYWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E646000)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATBODYWEIGHT_OFFSET UNITYSDK_OFFSET(0xA72790)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATCLAMPWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E645FF0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATCLAMPWEIGHT_OFFSET UNITYSDK_OFFSET(0xA72780)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATEYESWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E646020)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATEYESWEIGHT_OFFSET UNITYSDK_OFFSET(0xA727B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATHEADWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E646010)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATHEADWEIGHT_OFFSET UNITYSDK_OFFSET(0xA727A0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E645FE0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSETLOOKATPOSITION_OFFSET UNITYSDK_OFFSET(0xA72750)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSOLVEIK_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E646030)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_INTERNALSOLVEIK_OFFSET UNITYSDK_OFFSET(0xA727C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALPOSITION_OFFSET UNITYSDK_OFFSET(0xA71E40)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALROTATION_OFFSET UNITYSDK_OFFSET(0xA71EE0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0xA71F70)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETGOALWEIGHTROTATION_OFFSET UNITYSDK_OFFSET(0xA72000)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETHINTPOSITION_OFFSET UNITYSDK_OFFSET(0xA72110)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETHINTWEIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0xA721B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATBODYWEIGHT_OFFSET UNITYSDK_OFFSET(0xA72370)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATCLAMPWEIGHT_OFFSET UNITYSDK_OFFSET(0xA722E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATEYESWEIGHT_OFFSET UNITYSDK_OFFSET(0xA72490)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATHEADWEIGHT_OFFSET UNITYSDK_OFFSET(0xA72400)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SETLOOKATPOSITION_OFFSET UNITYSDK_OFFSET(0xA72240)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SET_BODYPOSITION_OFFSET UNITYSDK_OFFSET(0xA71C60)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SET_BODYROTATION_OFFSET UNITYSDK_OFFSET(0xA71D00)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_SOLVEIK_OFFSET UNITYSDK_OFFSET(0xA72520)
#define UNITYENGINE_ANIMATIONS_ANIMATIONHUMANSTREAM_THROWIFINVALID_OFFSET UNITYSDK_OFFSET(0xA71B50)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationHumanStream_TypeDefinitionIndex = 6672;

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
