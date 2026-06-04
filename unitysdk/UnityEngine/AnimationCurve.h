#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/WrapMode.h"

#define UNITYENGINE_ANIMATIONCURVE_ADDKEY_1_OFFSET UNITYSDK_OFFSET(0x1B2779C0)
#define UNITYENGINE_ANIMATIONCURVE_ADDKEY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B277A00)
#define UNITYENGINE_ANIMATIONCURVE_ADDKEY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2779F0)
#define UNITYENGINE_ANIMATIONCURVE_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1B2779B0)
#define UNITYENGINE_ANIMATIONCURVE_CONSTANT_OFFSET UNITYSDK_OFFSET(0x1B277B10)
#define UNITYENGINE_ANIMATIONCURVE_EASEINOUT_OFFSET UNITYSDK_OFFSET(0x1B277C80)
#define UNITYENGINE_ANIMATIONCURVE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B277EC0)
#define UNITYENGINE_ANIMATIONCURVE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B277E00)
#define UNITYENGINE_ANIMATIONCURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B277960)
#define UNITYENGINE_ANIMATIONCURVE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B2778F0)
#define UNITYENGINE_ANIMATIONCURVE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B277F40)
#define UNITYENGINE_ANIMATIONCURVE_GETKEYS_OFFSET UNITYSDK_OFFSET(0x1B277980)
#define UNITYENGINE_ANIMATIONCURVE_GETKEY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B277AF0)
#define UNITYENGINE_ANIMATIONCURVE_GETKEY_OFFSET UNITYSDK_OFFSET(0x1B277A90)
#define UNITYENGINE_ANIMATIONCURVE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B277A40)
#define UNITYENGINE_ANIMATIONCURVE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1B277970)
#define UNITYENGINE_ANIMATIONCURVE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1B277AE0)
#define UNITYENGINE_ANIMATIONCURVE_GET_POSTWRAPMODE_OFFSET UNITYSDK_OFFSET(0x1B277DC0)
#define UNITYENGINE_ANIMATIONCURVE_GET_PREWRAPMODE_OFFSET UNITYSDK_OFFSET(0x1B277DA0)
#define UNITYENGINE_ANIMATIONCURVE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B2778D0)
#define UNITYENGINE_ANIMATIONCURVE_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B2778C0)
#define UNITYENGINE_ANIMATIONCURVE_INTERNAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B2778E0)
#define UNITYENGINE_ANIMATIONCURVE_LINEAR_OFFSET UNITYSDK_OFFSET(0x1B277B20)
#define UNITYENGINE_ANIMATIONCURVE_MOVEKEY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B277A20)
#define UNITYENGINE_ANIMATIONCURVE_MOVEKEY_OFFSET UNITYSDK_OFFSET(0x1B277A10)
#define UNITYENGINE_ANIMATIONCURVE_REMOVEKEY_OFFSET UNITYSDK_OFFSET(0x1B277A30)
#define UNITYENGINE_ANIMATIONCURVE_SETKEYS_OFFSET UNITYSDK_OFFSET(0x1B2779A0)
#define UNITYENGINE_ANIMATIONCURVE_SET_KEYS_OFFSET UNITYSDK_OFFSET(0x1B277990)
#define UNITYENGINE_ANIMATIONCURVE_SET_POSTWRAPMODE_OFFSET UNITYSDK_OFFSET(0x1B277DD0)
#define UNITYENGINE_ANIMATIONCURVE_SET_PREWRAPMODE_OFFSET UNITYSDK_OFFSET(0x1B277DB0)
#define UNITYENGINE_ANIMATIONCURVE_SMOOTHTANGENTS_OFFSET UNITYSDK_OFFSET(0x1B277B00)
#define UNITYENGINE_ANIMATIONCURVE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B277DE0)
#define UNITYENGINE_ANIMATIONCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B277C60)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationCurve_TypeDefinitionIndex = 4012;

	class AnimationCurve : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::Il2CppArray<::UnityEngine::Keyframe>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE__CTOR_1_OFFSET))(this);
		}

		static ::System::Void Internal_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_INTERNAL_DESTROY_OFFSET))(a1);
		}

		static ::System::IntPtr Internal_Create(::Il2CppArray<::UnityEngine::Keyframe>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_INTERNAL_CREATE_OFFSET))(a1);
		}

		::System::Boolean Internal_Equals(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_INTERNAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_FINALIZE_OFFSET))(this);
		}

		::System::Single Evaluate(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_EVALUATE_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Keyframe>* get_keys()
		{
			return ((::Il2CppArray<::UnityEngine::Keyframe>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GET_KEYS_OFFSET))(this);
		}

		::System::Void set_keys(::Il2CppArray<::UnityEngine::Keyframe>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_SET_KEYS_OFFSET))(this, a1);
		}

		::System::Int32 AddKey(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_ADDKEY_OFFSET))(this, a1, a2);
		}

		::System::Int32 AddKey_1(::UnityEngine::Keyframe a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_ADDKEY_1_OFFSET))(this, a1);
		}

		::System::Int32 AddKey_Internal(::UnityEngine::Keyframe a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_ADDKEY_INTERNAL_OFFSET))(this, a1);
		}

		::System::Int32 MoveKey(::System::Int32 a1, ::UnityEngine::Keyframe a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_MOVEKEY_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveKey(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_REMOVEKEY_OFFSET))(this, a1);
		}

		::UnityEngine::Keyframe get_Item(::System::Int32 a1)
		{
			return ((::UnityEngine::Keyframe(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Int32 get_length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GET_LENGTH_OFFSET))(this);
		}

		::System::Void SetKeys(::Il2CppArray<::UnityEngine::Keyframe>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_SETKEYS_OFFSET))(this, a1);
		}

		::UnityEngine::Keyframe GetKey(::System::Int32 a1)
		{
			return ((::UnityEngine::Keyframe(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GETKEY_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Keyframe>* GetKeys()
		{
			return ((::Il2CppArray<::UnityEngine::Keyframe>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GETKEYS_OFFSET))(this);
		}

		::System::Void SmoothTangents(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_SMOOTHTANGENTS_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::AnimationCurve* Constant(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_CONSTANT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AnimationCurve* Linear(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_LINEAR_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::AnimationCurve* EaseInOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_EASEINOUT_OFFSET))(a1, a2, a3, a4);
		}

		::UnityEngine::WrapMode get_preWrapMode()
		{
			return ((::UnityEngine::WrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GET_PREWRAPMODE_OFFSET))(this);
		}

		::System::Void set_preWrapMode(::UnityEngine::WrapMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::WrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_SET_PREWRAPMODE_OFFSET))(this, a1);
		}

		::UnityEngine::WrapMode get_postWrapMode()
		{
			return ((::UnityEngine::WrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GET_POSTWRAPMODE_OFFSET))(this);
		}

		::System::Void set_postWrapMode(::UnityEngine::WrapMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::WrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_SET_POSTWRAPMODE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 AddKey_Internal_Injected(::UnityEngine::Keyframe& a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_ADDKEY_INTERNAL_INJECTED_OFFSET))(this, a1);
		}

		::System::Int32 MoveKey_Injected(::System::Int32 a1, ::UnityEngine::Keyframe& a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_MOVEKEY_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetKey_Injected(::System::Int32 a1, ::UnityEngine::Keyframe& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GETKEY_INJECTED_OFFSET))(this, a1, a2);
		}
	};
}
