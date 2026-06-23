#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/WrapMode.h"

#define UNITYENGINE_ANIMATIONCURVE_ADDKEY_1_OFFSET UNITYSDK_OFFSET(0x1D6EC5A0)
#define UNITYENGINE_ANIMATIONCURVE_ADDKEY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6EC5E0)
#define UNITYENGINE_ANIMATIONCURVE_ADDKEY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6EC5D0)
#define UNITYENGINE_ANIMATIONCURVE_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1D6EC590)
#define UNITYENGINE_ANIMATIONCURVE_CONSTANT_OFFSET UNITYSDK_OFFSET(0x1D6EC6F0)
#define UNITYENGINE_ANIMATIONCURVE_EASEINOUT_OFFSET UNITYSDK_OFFSET(0x1D6EC8B0)
#define UNITYENGINE_ANIMATIONCURVE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D6ECB70)
#define UNITYENGINE_ANIMATIONCURVE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D6ECA80)
#define UNITYENGINE_ANIMATIONCURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1D6EC540)
#define UNITYENGINE_ANIMATIONCURVE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D6EC4C0)
#define UNITYENGINE_ANIMATIONCURVE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D6ECBE0)
#define UNITYENGINE_ANIMATIONCURVE_GETKEYS_OFFSET UNITYSDK_OFFSET(0x1D6EC560)
#define UNITYENGINE_ANIMATIONCURVE_GETKEY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6EC6D0)
#define UNITYENGINE_ANIMATIONCURVE_GETKEY_OFFSET UNITYSDK_OFFSET(0x1D6EC670)
#define UNITYENGINE_ANIMATIONCURVE_GETPOINTER_OFFSET UNITYSDK_OFFSET(0x1D6ECBF0)
#define UNITYENGINE_ANIMATIONCURVE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D6EC620)
#define UNITYENGINE_ANIMATIONCURVE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1D6EC550)
#define UNITYENGINE_ANIMATIONCURVE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1D6EC6C0)
#define UNITYENGINE_ANIMATIONCURVE_GET_POSTWRAPMODE_OFFSET UNITYSDK_OFFSET(0x1D6ECA40)
#define UNITYENGINE_ANIMATIONCURVE_GET_PREWRAPMODE_OFFSET UNITYSDK_OFFSET(0x1D6ECA20)
#define UNITYENGINE_ANIMATIONCURVE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1D6EC4A0)
#define UNITYENGINE_ANIMATIONCURVE_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1D6EC490)
#define UNITYENGINE_ANIMATIONCURVE_INTERNAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D6EC4B0)
#define UNITYENGINE_ANIMATIONCURVE_LINEAR_OFFSET UNITYSDK_OFFSET(0x1D6EC700)
#define UNITYENGINE_ANIMATIONCURVE_MOVEKEY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6EC600)
#define UNITYENGINE_ANIMATIONCURVE_MOVEKEY_OFFSET UNITYSDK_OFFSET(0x1D6EC5F0)
#define UNITYENGINE_ANIMATIONCURVE_REMOVEKEY_OFFSET UNITYSDK_OFFSET(0x1D6EC610)
#define UNITYENGINE_ANIMATIONCURVE_SETKEYS_OFFSET UNITYSDK_OFFSET(0x1D6EC580)
#define UNITYENGINE_ANIMATIONCURVE_SET_KEYS_OFFSET UNITYSDK_OFFSET(0x1D6EC570)
#define UNITYENGINE_ANIMATIONCURVE_SET_POSTWRAPMODE_OFFSET UNITYSDK_OFFSET(0x1D6ECA50)
#define UNITYENGINE_ANIMATIONCURVE_SET_PREWRAPMODE_OFFSET UNITYSDK_OFFSET(0x1D6ECA30)
#define UNITYENGINE_ANIMATIONCURVE_SMOOTHTANGENTS_OFFSET UNITYSDK_OFFSET(0x1D6EC6E0)
#define UNITYENGINE_ANIMATIONCURVE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D6ECA60)
#define UNITYENGINE_ANIMATIONCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EC890)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationCurve_TypeDefinitionIndex = 5127;

	class AnimationCurve : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::Il2CppArray<::UnityEngine::Keyframe>* keys)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE__CTOR_OFFSET))(this, keys);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE__CTOR_1_OFFSET))(this);
		}

		static ::System::Void Internal_Destroy(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_INTERNAL_DESTROY_OFFSET))(ptr);
		}

		static ::System::IntPtr Internal_Create(::Il2CppArray<::UnityEngine::Keyframe>* keys)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_INTERNAL_CREATE_OFFSET))(keys);
		}

		::System::Boolean Internal_Equals(::System::IntPtr other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_INTERNAL_EQUALS_OFFSET))(this, other);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_FINALIZE_OFFSET))(this);
		}

		::System::Single Evaluate(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_EVALUATE_OFFSET))(this, time);
		}

		::Il2CppArray<::UnityEngine::Keyframe>* get_keys()
		{
			return ((::Il2CppArray<::UnityEngine::Keyframe>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GET_KEYS_OFFSET))(this);
		}

		::System::Void set_keys(::Il2CppArray<::UnityEngine::Keyframe>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_SET_KEYS_OFFSET))(this, value);
		}

		::System::Int32 AddKey(::System::Single time, ::System::Single value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_ADDKEY_OFFSET))(this, time, value);
		}

		::System::Int32 AddKey_1(::UnityEngine::Keyframe key)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_ADDKEY_1_OFFSET))(this, key);
		}

		::System::Int32 AddKey_Internal(::UnityEngine::Keyframe key)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_ADDKEY_INTERNAL_OFFSET))(this, key);
		}

		::System::Int32 MoveKey(::System::Int32 index, ::UnityEngine::Keyframe key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_MOVEKEY_OFFSET))(this, index, key);
		}

		::System::Void RemoveKey(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_REMOVEKEY_OFFSET))(this, index);
		}

		::UnityEngine::Keyframe get_Item(::System::Int32 index)
		{
			return ((::UnityEngine::Keyframe(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GET_ITEM_OFFSET))(this, index);
		}

		::System::Int32 get_length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GET_LENGTH_OFFSET))(this);
		}

		::System::Void SetKeys(::Il2CppArray<::UnityEngine::Keyframe>* keys)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_SETKEYS_OFFSET))(this, keys);
		}

		::UnityEngine::Keyframe GetKey(::System::Int32 index)
		{
			return ((::UnityEngine::Keyframe(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GETKEY_OFFSET))(this, index);
		}

		::Il2CppArray<::UnityEngine::Keyframe>* GetKeys()
		{
			return ((::Il2CppArray<::UnityEngine::Keyframe>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GETKEYS_OFFSET))(this);
		}

		::System::Void SmoothTangents(::System::Int32 index, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_SMOOTHTANGENTS_OFFSET))(this, index, weight);
		}

		static ::UnityEngine::AnimationCurve* Constant(::System::Single timeStart, ::System::Single timeEnd, ::System::Single value)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_CONSTANT_OFFSET))(timeStart, timeEnd, value);
		}

		static ::UnityEngine::AnimationCurve* Linear(::System::Single timeStart, ::System::Single valueStart, ::System::Single timeEnd, ::System::Single valueEnd)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_LINEAR_OFFSET))(timeStart, valueStart, timeEnd, valueEnd);
		}

		static ::UnityEngine::AnimationCurve* EaseInOut(::System::Single timeStart, ::System::Single valueStart, ::System::Single timeEnd, ::System::Single valueEnd)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_EASEINOUT_OFFSET))(timeStart, valueStart, timeEnd, valueEnd);
		}

		::UnityEngine::WrapMode get_preWrapMode()
		{
			return ((::UnityEngine::WrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GET_PREWRAPMODE_OFFSET))(this);
		}

		::System::Void set_preWrapMode(::UnityEngine::WrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::WrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_SET_PREWRAPMODE_OFFSET))(this, value);
		}

		::UnityEngine::WrapMode get_postWrapMode()
		{
			return ((::UnityEngine::WrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GET_POSTWRAPMODE_OFFSET))(this);
		}

		::System::Void set_postWrapMode(::UnityEngine::WrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::WrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_SET_POSTWRAPMODE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_EQUALS_OFFSET))(this, o);
		}

		::System::Boolean Equals_1(::UnityEngine::AnimationCurve* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GETHASHCODE_OFFSET))(this);
		}

		::System::IntPtr GetPointer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GETPOINTER_OFFSET))(this);
		}

		::System::Int32 AddKey_Internal_Injected(::UnityEngine::Keyframe& key)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_ADDKEY_INTERNAL_INJECTED_OFFSET))(this, key);
		}

		::System::Int32 MoveKey_Injected(::System::Int32 index, ::UnityEngine::Keyframe& key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_MOVEKEY_INJECTED_OFFSET))(this, index, key);
		}

		::System::Void GetKey_Injected(::System::Int32 index, ::UnityEngine::Keyframe& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GETKEY_INJECTED_OFFSET))(this, index, ret);
		}
	};
}
