#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

namespace UnityEngine { class AnimatorControllerParameter; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E875850)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E874F20)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1E874C50)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1E874AF0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA84F30)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETBOOLID_OFFSET UNITYSDK_OFFSET(0x1E8753F0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETBOOL_OFFSET UNITYSDK_OFFSET(0xA850D0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETFLOATID_OFFSET UNITYSDK_OFFSET(0x1E8752E0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETFLOAT_OFFSET UNITYSDK_OFFSET(0xA84FE0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2ADAB0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETINTEGERID_OFFSET UNITYSDK_OFFSET(0x1E8754F0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETINTEGER_OFFSET UNITYSDK_OFFSET(0xA851B0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETPARAMETERCOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E8756E0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETPARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0xA85370)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETPARAMETERSARRAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E8757B0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0xA853D0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GET_NULL_OFFSET UNITYSDK_OFFSET(0x1E874A90)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E8751B0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_PLAYINFIXEDTIMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E875840)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_PLAYINFIXEDTIME_OFFSET UNITYSDK_OFFSET(0xA853E0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_RESETTRIGGERID_OFFSET UNITYSDK_OFFSET(0x1E875670)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_RESETTRIGGER_OFFSET UNITYSDK_OFFSET(0xA85300)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETBOOLID_OFFSET UNITYSDK_OFFSET(0x1E875470)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETBOOL_OFFSET UNITYSDK_OFFSET(0xA85140)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETFLOATID_OFFSET UNITYSDK_OFFSET(0x1E875370)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETFLOAT_OFFSET UNITYSDK_OFFSET(0xA85050)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETHANDLE_OFFSET UNITYSDK_OFFSET(0xA84F10)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETINTEGERID_OFFSET UNITYSDK_OFFSET(0x1E875570)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETINTEGER_OFFSET UNITYSDK_OFFSET(0xA85220)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETTRIGGERID_OFFSET UNITYSDK_OFFSET(0x1E8755F0)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETTRIGGER_OFFSET UNITYSDK_OFFSET(0xA85290)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E875860)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA84E40)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimatorControllerPlayable_TypeDefinitionIndex = 6689;

	struct alignas(8) AnimatorControllerPlayable
	{
		static ::UnityEngine::Animations::AnimatorControllerPlayable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Animations::AnimatorControllerPlayable*)Il2CppClass::FromTypeDefinitionIndex(AnimatorControllerPlayable_TypeDefinitionIndex)->GetStaticField(0x3180);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE__CTOR_OFFSET))(this, handle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Animations::AnimatorControllerPlayable get_Null()
		{
			return ((::UnityEngine::Animations::AnimatorControllerPlayable(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GET_NULL_OFFSET))();
		}

		/*
		static ::UnityEngine::Animations::AnimatorControllerPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::RuntimeAnimatorController* controller)
		{
			return ((::UnityEngine::Animations::AnimatorControllerPlayable(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CREATE_OFFSET))(graph, controller);
		}
		*/

		/*
		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::RuntimeAnimatorController* controller)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CREATEHANDLE_OFFSET))(graph, controller);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		::System::Void SetHandle(::UnityEngine::Playables::PlayableHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETHANDLE_OFFSET))(this, handle);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Animations::AnimatorControllerPlayable playable)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_OP_IMPLICIT_OFFSET))(playable);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Animations::AnimatorControllerPlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_EQUALS_OFFSET))(this, other);
		}

		::System::Single GetFloat(::System::Int32 id)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETFLOAT_OFFSET))(this, id);
		}

		::System::Void SetFloat(::System::Int32 id, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETFLOAT_OFFSET))(this, id, value);
		}

		::System::Boolean GetBool(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETBOOL_OFFSET))(this, id);
		}

		::System::Void SetBool(::System::Int32 id, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETBOOL_OFFSET))(this, id, value);
		}

		::System::Int32 GetInteger(::System::Int32 id)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETINTEGER_OFFSET))(this, id);
		}

		::System::Void SetInteger(::System::Int32 id, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETINTEGER_OFFSET))(this, id, value);
		}

		::System::Void SetTrigger(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETTRIGGER_OFFSET))(this, id);
		}

		::System::Void ResetTrigger(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_RESETTRIGGER_OFFSET))(this, id);
		}

		::System::Int32 GetParameterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETPARAMETERCOUNT_OFFSET))(this);
		}

		::UnityEngine::AnimatorControllerParameter* GetParameter(::System::Int32 index)
		{
			return ((::UnityEngine::AnimatorControllerParameter*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETPARAMETER_OFFSET))(this, index);
		}

		::System::Void PlayInFixedTime(::System::Int32 stateNameHash, ::System::Int32 layer, ::System::Single fixedTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_PLAYINFIXEDTIME_OFFSET))(this, stateNameHash, layer, fixedTime);
		}

		/*
		static ::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::RuntimeAnimatorController* controller, ::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::RuntimeAnimatorController*, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(graph, controller, handle);
		}
		*/

		static ::Il2CppArray<::UnityEngine::AnimatorControllerParameter*>* GetParametersArrayInternal(::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::Il2CppArray<::UnityEngine::AnimatorControllerParameter*>*(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETPARAMETERSARRAYINTERNAL_OFFSET))(handle);
		}

		static ::System::Int32 GetParameterCountInternal(::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Int32(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETPARAMETERCOUNTINTERNAL_OFFSET))(handle);
		}

		static ::System::Void PlayInFixedTimeInternal(::UnityEngine::Playables::PlayableHandle& handle, ::System::Int32 stateNameHash, ::System::Int32 layer, ::System::Single fixedTime)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_PLAYINFIXEDTIMEINTERNAL_OFFSET))(handle, stateNameHash, layer, fixedTime);
		}

		static ::System::Void SetFloatID(::UnityEngine::Playables::PlayableHandle& handle, ::System::Int32 id, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETFLOATID_OFFSET))(handle, id, value);
		}

		static ::System::Single GetFloatID(::UnityEngine::Playables::PlayableHandle& handle, ::System::Int32 id)
		{
			return ((::System::Single(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETFLOATID_OFFSET))(handle, id);
		}

		static ::System::Void SetBoolID(::UnityEngine::Playables::PlayableHandle& handle, ::System::Int32 id, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETBOOLID_OFFSET))(handle, id, value);
		}

		static ::System::Boolean GetBoolID(::UnityEngine::Playables::PlayableHandle& handle, ::System::Int32 id)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETBOOLID_OFFSET))(handle, id);
		}

		static ::System::Void SetIntegerID(::UnityEngine::Playables::PlayableHandle& handle, ::System::Int32 id, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETINTEGERID_OFFSET))(handle, id, value);
		}

		static ::System::Int32 GetIntegerID(::UnityEngine::Playables::PlayableHandle& handle, ::System::Int32 id)
		{
			return ((::System::Int32(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETINTEGERID_OFFSET))(handle, id);
		}

		static ::System::Void SetTriggerID(::UnityEngine::Playables::PlayableHandle& handle, ::System::Int32 id)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETTRIGGERID_OFFSET))(handle, id);
		}

		static ::System::Void ResetTriggerID(::UnityEngine::Playables::PlayableHandle& handle, ::System::Int32 id)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_RESETTRIGGERID_OFFSET))(handle, id);
		}

		/*
		static ::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph& graph, ::UnityEngine::RuntimeAnimatorController* controller, ::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::RuntimeAnimatorController*, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(graph, controller, handle);
		}
		*/
	};
}
