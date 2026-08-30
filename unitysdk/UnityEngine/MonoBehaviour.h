#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_1_OFFSET UNITYSDK_OFFSET(0x1ECC20F0)
#define UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_2_OFFSET UNITYSDK_OFFSET(0x1ECC2100)
#define UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_OFFSET UNITYSDK_OFFSET(0x1ECC2000)
#define UNITYENGINE_MONOBEHAVIOUR_GETSCRIPTCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1ECC24F0)
#define UNITYENGINE_MONOBEHAVIOUR_GET_LIGHTWEIGHTDEACTIVATEINTREE_OFFSET UNITYSDK_OFFSET(0x1ECC2500)
#define UNITYENGINE_MONOBEHAVIOUR_GET_USEGUILAYOUT_OFFSET UNITYSDK_OFFSET(0x1ECC2450)
#define UNITYENGINE_MONOBEHAVIOUR_GET_USINGMONOBEHAVIOURLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1ECC2510)
#define UNITYENGINE_MONOBEHAVIOUR_INTERNAL_CANCELINVOKEALL_OFFSET UNITYSDK_OFFSET(0x1ECC2010)
#define UNITYENGINE_MONOBEHAVIOUR_INTERNAL_ISINVOKINGALL_OFFSET UNITYSDK_OFFSET(0x1ECC1FF0)
#define UNITYENGINE_MONOBEHAVIOUR_INVOKEDELAYED_OFFSET UNITYSDK_OFFSET(0x1ECC2030)
#define UNITYENGINE_MONOBEHAVIOUR_INVOKEREPEATING_OFFSET UNITYSDK_OFFSET(0x1ECC2040)
#define UNITYENGINE_MONOBEHAVIOUR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ECC2020)
#define UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_1_OFFSET UNITYSDK_OFFSET(0x1ECC2110)
#define UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_2_OFFSET UNITYSDK_OFFSET(0x1ECC2120)
#define UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_OFFSET UNITYSDK_OFFSET(0x1ECC1FE0)
#define UNITYENGINE_MONOBEHAVIOUR_ISOBJECTMONOBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1ECC2200)
#define UNITYENGINE_MONOBEHAVIOUR_PRINT_OFFSET UNITYSDK_OFFSET(0x1ECC2470)
#define UNITYENGINE_MONOBEHAVIOUR_SET_USEGUILAYOUT_OFFSET UNITYSDK_OFFSET(0x1ECC2460)
#define UNITYENGINE_MONOBEHAVIOUR_SET_USINGMONOBEHAVIOURLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1ECC2520)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINEMANAGED2_OFFSET UNITYSDK_OFFSET(0x1ECC22B0)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINEMANAGED_OFFSET UNITYSDK_OFFSET(0x1ECC2210)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_1_OFFSET UNITYSDK_OFFSET(0x1ECC2140)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_2_OFFSET UNITYSDK_OFFSET(0x1ECC2220)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_AUTO_OFFSET UNITYSDK_OFFSET(0x1ECC22C0)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1ECC2130)
#define UNITYENGINE_MONOBEHAVIOUR_STOPALLCOROUTINES_OFFSET UNITYSDK_OFFSET(0x1ECC2440)
#define UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINEFROMENUMERATORMANAGED_OFFSET UNITYSDK_OFFSET(0x1ECC2360)
#define UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINEMANAGED_OFFSET UNITYSDK_OFFSET(0x1ECC2420)
#define UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_1_OFFSET UNITYSDK_OFFSET(0x1ECC2370)
#define UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_2_OFFSET UNITYSDK_OFFSET(0x1ECC2430)
#define UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1ECC22D0)
#define UNITYENGINE_MONOBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECC2530)

namespace UnityEngine
{
	inline static constexpr unsigned int MonoBehaviour_TypeDefinitionIndex = 4329;

	class MonoBehaviour : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean IsInvoking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_OFFSET))(this);
		}

		::System::Void CancelInvoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void InvokeRepeating(::System::String* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_INVOKEREPEATING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CancelInvoke_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_1_OFFSET))(this, a1);
		}

		::System::Boolean IsInvoking_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_1_OFFSET))(this, a1);
		}

		::UnityEngine::Coroutine* StartCoroutine(::System::String* a1)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_OFFSET))(this, a1);
		}

		::UnityEngine::Coroutine* StartCoroutine_1(::System::String* a1, ::System::Object* a2)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Coroutine* StartCoroutine_2(::System::Collections::IEnumerator* a1)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_2_OFFSET))(this, a1);
		}

		::UnityEngine::Coroutine* StartCoroutine_Auto(::System::Collections::IEnumerator* a1)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_AUTO_OFFSET))(this, a1);
		}

		::System::Void StopCoroutine(::System::Collections::IEnumerator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_OFFSET))(this, a1);
		}

		::System::Void StopCoroutine_1(::UnityEngine::Coroutine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Coroutine*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_1_OFFSET))(this, a1);
		}

		::System::Void StopCoroutine_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_2_OFFSET))(this, a1);
		}

		::System::Void StopAllCoroutines()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPALLCOROUTINES_OFFSET))(this);
		}

		::System::Boolean get_useGUILayout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_GET_USEGUILAYOUT_OFFSET))(this);
		}

		::System::Void set_useGUILayout(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_SET_USEGUILAYOUT_OFFSET))(this, a1);
		}

		static ::System::Void print(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_PRINT_OFFSET))(a1);
		}

		static ::System::Void Internal_CancelInvokeAll(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_INTERNAL_CANCELINVOKEALL_OFFSET))(a1);
		}

		static ::System::Boolean Internal_IsInvokingAll(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_INTERNAL_ISINVOKINGALL_OFFSET))(a1);
		}

		static ::System::Void InvokeDelayed(::UnityEngine::MonoBehaviour* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_INVOKEDELAYED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CancelInvoke_2(::UnityEngine::MonoBehaviour* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsInvoking_2(::UnityEngine::MonoBehaviour* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::MonoBehaviour*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsObjectMonoBehaviour(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_ISOBJECTMONOBEHAVIOUR_OFFSET))(a1);
		}

		::UnityEngine::Coroutine* StartCoroutineManaged(::System::String* a1, ::System::Object* a2)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINEMANAGED_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Coroutine* StartCoroutineManaged2(::System::Collections::IEnumerator* a1)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINEMANAGED2_OFFSET))(this, a1);
		}

		::System::Void StopCoroutineManaged(::UnityEngine::Coroutine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Coroutine*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINEMANAGED_OFFSET))(this, a1);
		}

		::System::Void StopCoroutineFromEnumeratorManaged(::System::Collections::IEnumerator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINEFROMENUMERATORMANAGED_OFFSET))(this, a1);
		}

		::System::String* GetScriptClassName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_GETSCRIPTCLASSNAME_OFFSET))(this);
		}

		::System::Boolean get_lightweightDeactivateInTree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_GET_LIGHTWEIGHTDEACTIVATEINTREE_OFFSET))(this);
		}

		static ::System::Boolean get_usingMonoBehaviourLightweightDeactivate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_GET_USINGMONOBEHAVIOURLIGHTWEIGHTDEACTIVATE_OFFSET))();
		}

		static ::System::Void set_usingMonoBehaviourLightweightDeactivate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_SET_USINGMONOBEHAVIOURLIGHTWEIGHTDEACTIVATE_OFFSET))(a1);
		}
	};
}
