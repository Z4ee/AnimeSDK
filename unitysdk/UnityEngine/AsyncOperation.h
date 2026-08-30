#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ActionClosure_1.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ClosureEvent_1.h"
#include "unitysdk/UnityEngine/YieldInstruction.h"

namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_ASYNCOPERATION_ADDCOMPLETIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E1E7090)
#define UNITYENGINE_ASYNCOPERATION_ADD_COMPLETED_OFFSET UNITYSDK_OFFSET(0x1E1E7340)
#define UNITYENGINE_ASYNCOPERATION_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E1E6F80)
#define UNITYENGINE_ASYNCOPERATION_GET_ALLOWSCENEACTIVATION_OFFSET UNITYSDK_OFFSET(0x1E1E6F60)
#define UNITYENGINE_ASYNCOPERATION_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1E1E6F20)
#define UNITYENGINE_ASYNCOPERATION_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1E1E6F40)
#define UNITYENGINE_ASYNCOPERATION_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1E1E6F30)
#define UNITYENGINE_ASYNCOPERATION_INTERNALDESTROY_OFFSET UNITYSDK_OFFSET(0x1E1E6F10)
#define UNITYENGINE_ASYNCOPERATION_INVOKECOMPLETIONEVENT_OFFSET UNITYSDK_OFFSET(0x1E1E7000)
#define UNITYENGINE_ASYNCOPERATION_REMOVECOMPLETIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E1E7200)
#define UNITYENGINE_ASYNCOPERATION_REMOVE_COMPLETED_OFFSET UNITYSDK_OFFSET(0x1E1E73E0)
#define UNITYENGINE_ASYNCOPERATION_RESETCOMPLETIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E1E7440)
#define UNITYENGINE_ASYNCOPERATION_SET_ALLOWSCENEACTIVATION_OFFSET UNITYSDK_OFFSET(0x1E1E6F70)
#define UNITYENGINE_ASYNCOPERATION_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1E1E6F50)
#define UNITYENGINE_ASYNCOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E7450)

namespace UnityEngine
{
	inline static constexpr unsigned int AsyncOperation_TypeDefinitionIndex = 4297;

	class AsyncOperation : public ::UnityEngine::YieldInstruction
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::UnityEngine::GCFreeClosure::ClosureEvent_1<::UnityEngine::AsyncOperation*> m_completeCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION__CTOR_OFFSET))(this);
		}

		static ::System::Void InternalDestroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_INTERNALDESTROY_OFFSET))(a1);
		}

		::System::Boolean get_isDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_GET_ISDONE_OFFSET))(this);
		}

		::System::Single get_progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_GET_PROGRESS_OFFSET))(this);
		}

		::System::Int32 get_priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_priority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_SET_PRIORITY_OFFSET))(this, a1);
		}

		::System::Boolean get_allowSceneActivation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_GET_ALLOWSCENEACTIVATION_OFFSET))(this);
		}

		::System::Void set_allowSceneActivation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_SET_ALLOWSCENEACTIVATION_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_FINALIZE_OFFSET))(this);
		}

		::System::Void InvokeCompletionEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_INVOKECOMPLETIONEVENT_OFFSET))(this);
		}

		::System::Void AddCompletionCallback(::UnityEngine::GCFreeClosure::ActionClosure_1<::UnityEngine::AsyncOperation*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GCFreeClosure::ActionClosure_1<::UnityEngine::AsyncOperation*>))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_ADDCOMPLETIONCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RemoveCompletionCallback(::UnityEngine::GCFreeClosure::ActionClosure_1<::UnityEngine::AsyncOperation*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GCFreeClosure::ActionClosure_1<::UnityEngine::AsyncOperation*>))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_REMOVECOMPLETIONCALLBACK_OFFSET))(this, a1);
		}

		::System::Void add_completed(::System::Action_1<::UnityEngine::AsyncOperation*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::AsyncOperation*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_ADD_COMPLETED_OFFSET))(this, a1);
		}

		::System::Void remove_completed(::System::Action_1<::UnityEngine::AsyncOperation*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::AsyncOperation*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_REMOVE_COMPLETED_OFFSET))(this, a1);
		}

		::System::Void ResetCompletionCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_RESETCOMPLETIONCALLBACK_OFFSET))(this);
		}
	};
}
