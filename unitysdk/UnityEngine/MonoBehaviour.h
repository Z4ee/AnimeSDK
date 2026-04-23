#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_1_OFFSET UNITYSDK_OFFSET(0x1A45FF30)
#define UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_2_OFFSET UNITYSDK_OFFSET(0x1A45FF40)
#define UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_OFFSET UNITYSDK_OFFSET(0x1A45FE90)
#define UNITYENGINE_MONOBEHAVIOUR_GETSCRIPTCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1A460350)
#define UNITYENGINE_MONOBEHAVIOUR_GET_LIGHTWEIGHTDEACTIVATEINTREE_OFFSET UNITYSDK_OFFSET(0x1A460360)
#define UNITYENGINE_MONOBEHAVIOUR_GET_USEGUILAYOUT_OFFSET UNITYSDK_OFFSET(0x1A4602B0)
#define UNITYENGINE_MONOBEHAVIOUR_GET_USINGMONOBEHAVIOURLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A460370)
#define UNITYENGINE_MONOBEHAVIOUR_INTERNAL_CANCELINVOKEALL_OFFSET UNITYSDK_OFFSET(0x1A45FEA0)
#define UNITYENGINE_MONOBEHAVIOUR_INTERNAL_ISINVOKINGALL_OFFSET UNITYSDK_OFFSET(0x1A45FE80)
#define UNITYENGINE_MONOBEHAVIOUR_INVOKEDELAYED_OFFSET UNITYSDK_OFFSET(0x1A45FEC0)
#define UNITYENGINE_MONOBEHAVIOUR_INVOKEREPEATING_OFFSET UNITYSDK_OFFSET(0x1A45FED0)
#define UNITYENGINE_MONOBEHAVIOUR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A45FEB0)
#define UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_1_OFFSET UNITYSDK_OFFSET(0x1A45FF50)
#define UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_2_OFFSET UNITYSDK_OFFSET(0x1A45FF60)
#define UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_OFFSET UNITYSDK_OFFSET(0x1A45FE70)
#define UNITYENGINE_MONOBEHAVIOUR_ISOBJECTMONOBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1A460040)
#define UNITYENGINE_MONOBEHAVIOUR_PRINT_OFFSET UNITYSDK_OFFSET(0x1A4602D0)
#define UNITYENGINE_MONOBEHAVIOUR_SET_USEGUILAYOUT_OFFSET UNITYSDK_OFFSET(0x1A4602C0)
#define UNITYENGINE_MONOBEHAVIOUR_SET_USINGMONOBEHAVIOURLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A460380)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINEMANAGED2_OFFSET UNITYSDK_OFFSET(0x1A4600F0)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINEMANAGED_OFFSET UNITYSDK_OFFSET(0x1A460050)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_1_OFFSET UNITYSDK_OFFSET(0x1A45FF80)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_2_OFFSET UNITYSDK_OFFSET(0x1A460060)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_AUTO_OFFSET UNITYSDK_OFFSET(0x1A460100)
#define UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1A45FF70)
#define UNITYENGINE_MONOBEHAVIOUR_STOPALLCOROUTINES_OFFSET UNITYSDK_OFFSET(0x1A4602A0)
#define UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINEFROMENUMERATORMANAGED_OFFSET UNITYSDK_OFFSET(0x1A4601C0)
#define UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINEMANAGED_OFFSET UNITYSDK_OFFSET(0x1A460280)
#define UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_1_OFFSET UNITYSDK_OFFSET(0x1A4601D0)
#define UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_2_OFFSET UNITYSDK_OFFSET(0x1A460290)
#define UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1A460110)
#define UNITYENGINE_MONOBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A460390)

namespace UnityEngine
{
	inline static constexpr unsigned int MonoBehaviour_TypeDefinitionIndex = 4140;

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

		::System::Void Invoke(::System::String* methodName, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_INVOKE_OFFSET))(this, methodName, time);
		}

		::System::Void InvokeRepeating(::System::String* methodName, ::System::Single time, ::System::Single repeatRate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_INVOKEREPEATING_OFFSET))(this, methodName, time, repeatRate);
		}

		::System::Void CancelInvoke_1(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_1_OFFSET))(this, methodName);
		}

		::System::Boolean IsInvoking_1(::System::String* methodName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_1_OFFSET))(this, methodName);
		}

		::UnityEngine::Coroutine* StartCoroutine(::System::String* methodName)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_OFFSET))(this, methodName);
		}

		::UnityEngine::Coroutine* StartCoroutine_1(::System::String* methodName, ::System::Object* value)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_1_OFFSET))(this, methodName, value);
		}

		::UnityEngine::Coroutine* StartCoroutine_2(::System::Collections::IEnumerator* routine)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_2_OFFSET))(this, routine);
		}

		::UnityEngine::Coroutine* StartCoroutine_Auto(::System::Collections::IEnumerator* routine)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINE_AUTO_OFFSET))(this, routine);
		}

		::System::Void StopCoroutine(::System::Collections::IEnumerator* routine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_OFFSET))(this, routine);
		}

		::System::Void StopCoroutine_1(::UnityEngine::Coroutine* routine)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Coroutine*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_1_OFFSET))(this, routine);
		}

		::System::Void StopCoroutine_2(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINE_2_OFFSET))(this, methodName);
		}

		::System::Void StopAllCoroutines()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPALLCOROUTINES_OFFSET))(this);
		}

		::System::Boolean get_useGUILayout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_GET_USEGUILAYOUT_OFFSET))(this);
		}

		::System::Void set_useGUILayout(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_SET_USEGUILAYOUT_OFFSET))(this, value);
		}

		static ::System::Void print(::System::Object* message)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_PRINT_OFFSET))(message);
		}

		static ::System::Void Internal_CancelInvokeAll(::UnityEngine::MonoBehaviour* self)
		{
			return ((::System::Void(*)(::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_INTERNAL_CANCELINVOKEALL_OFFSET))(self);
		}

		static ::System::Boolean Internal_IsInvokingAll(::UnityEngine::MonoBehaviour* self)
		{
			return ((::System::Boolean(*)(::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_INTERNAL_ISINVOKINGALL_OFFSET))(self);
		}

		static ::System::Void InvokeDelayed(::UnityEngine::MonoBehaviour* self, ::System::String* methodName, ::System::Single time, ::System::Single repeatRate)
		{
			return ((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_INVOKEDELAYED_OFFSET))(self, methodName, time, repeatRate);
		}

		static ::System::Void CancelInvoke_2(::UnityEngine::MonoBehaviour* self, ::System::String* methodName)
		{
			return ((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_CANCELINVOKE_2_OFFSET))(self, methodName);
		}

		static ::System::Boolean IsInvoking_2(::UnityEngine::MonoBehaviour* self, ::System::String* methodName)
		{
			return ((::System::Boolean(*)(::UnityEngine::MonoBehaviour*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_ISINVOKING_2_OFFSET))(self, methodName);
		}

		static ::System::Boolean IsObjectMonoBehaviour(::UnityEngine::Object* obj)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_ISOBJECTMONOBEHAVIOUR_OFFSET))(obj);
		}

		::UnityEngine::Coroutine* StartCoroutineManaged(::System::String* methodName, ::System::Object* value)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINEMANAGED_OFFSET))(this, methodName, value);
		}

		::UnityEngine::Coroutine* StartCoroutineManaged2(::System::Collections::IEnumerator* enumerator)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STARTCOROUTINEMANAGED2_OFFSET))(this, enumerator);
		}

		::System::Void StopCoroutineManaged(::UnityEngine::Coroutine* routine)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Coroutine*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINEMANAGED_OFFSET))(this, routine);
		}

		::System::Void StopCoroutineFromEnumeratorManaged(::System::Collections::IEnumerator* routine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_STOPCOROUTINEFROMENUMERATORMANAGED_OFFSET))(this, routine);
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

		static ::System::Void set_usingMonoBehaviourLightweightDeactivate(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MONOBEHAVIOUR_SET_USINGMONOBEHAVIOURLIGHTWEIGHTDEACTIVATE_OFFSET))(value);
		}
	};
}
