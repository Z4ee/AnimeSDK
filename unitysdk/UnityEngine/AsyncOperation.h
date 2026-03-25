#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ActionClosure_1.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ClosureEvent_1.h"
#include "unitysdk/UnityEngine/YieldInstruction.h"

namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_ASYNCOPERATION_ADDCOMPLETIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x189F1280)
#define UNITYENGINE_ASYNCOPERATION_ADD_COMPLETED_OFFSET UNITYSDK_OFFSET(0x189F1580)
#define UNITYENGINE_ASYNCOPERATION_FINALIZE_OFFSET UNITYSDK_OFFSET(0x189F1120)
#define UNITYENGINE_ASYNCOPERATION_GET_ALLOWSCENEACTIVATION_OFFSET UNITYSDK_OFFSET(0x189F1100)
#define UNITYENGINE_ASYNCOPERATION_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x189F10C0)
#define UNITYENGINE_ASYNCOPERATION_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x189F10E0)
#define UNITYENGINE_ASYNCOPERATION_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x189F10D0)
#define UNITYENGINE_ASYNCOPERATION_INTERNALDESTROY_OFFSET UNITYSDK_OFFSET(0x189F10B0)
#define UNITYENGINE_ASYNCOPERATION_INVOKECOMPLETIONEVENT_OFFSET UNITYSDK_OFFSET(0x189F11A0)
#define UNITYENGINE_ASYNCOPERATION_REMOVECOMPLETIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x189F1440)
#define UNITYENGINE_ASYNCOPERATION_REMOVE_COMPLETED_OFFSET UNITYSDK_OFFSET(0x189F1620)
#define UNITYENGINE_ASYNCOPERATION_RESETCOMPLETIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x189F1680)
#define UNITYENGINE_ASYNCOPERATION_SET_ALLOWSCENEACTIVATION_OFFSET UNITYSDK_OFFSET(0x189F1110)
#define UNITYENGINE_ASYNCOPERATION_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x189F10F0)
#define UNITYENGINE_ASYNCOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x189F1690)

namespace UnityEngine
{
	inline static constexpr unsigned int AsyncOperation_TypeDefinitionIndex = 4106;

	class AsyncOperation : public ::UnityEngine::YieldInstruction
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::UnityEngine::GCFreeClosure::ClosureEvent_1<::UnityEngine::AsyncOperation*> m_completeCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION__CTOR_OFFSET))(this);
		}

		static ::System::Void InternalDestroy(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_INTERNALDESTROY_OFFSET))(ptr);
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

		::System::Void set_priority(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_SET_PRIORITY_OFFSET))(this, value);
		}

		::System::Boolean get_allowSceneActivation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_GET_ALLOWSCENEACTIVATION_OFFSET))(this);
		}

		::System::Void set_allowSceneActivation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_SET_ALLOWSCENEACTIVATION_OFFSET))(this, value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_FINALIZE_OFFSET))(this);
		}

		::System::Void InvokeCompletionEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_INVOKECOMPLETIONEVENT_OFFSET))(this);
		}

		::System::Void AddCompletionCallback(::UnityEngine::GCFreeClosure::ActionClosure_1<::UnityEngine::AsyncOperation*> callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GCFreeClosure::ActionClosure_1<::UnityEngine::AsyncOperation*>))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_ADDCOMPLETIONCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RemoveCompletionCallback(::UnityEngine::GCFreeClosure::ActionClosure_1<::UnityEngine::AsyncOperation*> callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GCFreeClosure::ActionClosure_1<::UnityEngine::AsyncOperation*>))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_REMOVECOMPLETIONCALLBACK_OFFSET))(this, callback);
		}

		::System::Void add_completed(::System::Action_1<::UnityEngine::AsyncOperation*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::AsyncOperation*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_ADD_COMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_completed(::System::Action_1<::UnityEngine::AsyncOperation*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::AsyncOperation*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_REMOVE_COMPLETED_OFFSET))(this, value);
		}

		::System::Void ResetCompletionCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_RESETCOMPLETIONCALLBACK_OFFSET))(this);
		}
	};
}
