#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/YieldInstruction.h"

namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_ASYNCOPERATION_ADD_COMPLETED_OFFSET UNITYSDK_OFFSET(0x1AE6ACD0)
#define UNITYENGINE_ASYNCOPERATION_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1AE6AC50)
#define UNITYENGINE_ASYNCOPERATION_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AE6ABE0)
#define UNITYENGINE_ASYNCOPERATION_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1AE6ABB0)
#define UNITYENGINE_ASYNCOPERATION_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1AE6ABC0)
#define UNITYENGINE_ASYNCOPERATION_INTERNALDESTROY_OFFSET UNITYSDK_OFFSET(0x1AE6ABA0)
#define UNITYENGINE_ASYNCOPERATION_INVOKECOMPLETIONEVENT_OFFSET UNITYSDK_OFFSET(0x1AE6AC70)
#define UNITYENGINE_ASYNCOPERATION_REMOVE_COMPLETED_OFFSET UNITYSDK_OFFSET(0x1AE6AD80)
#define UNITYENGINE_ASYNCOPERATION_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1AE6ABD0)
#define UNITYENGINE_ASYNCOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE6ADF0)

namespace UnityEngine
{
	inline static constexpr unsigned int AsyncOperation_TypeDefinitionIndex = 5323;

	class AsyncOperation : public ::UnityEngine::YieldInstruction
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::System::Action_1<::UnityEngine::AsyncOperation*>* m_completeCallback; // 0x18

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

		::System::Void set_priority(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_SET_PRIORITY_OFFSET))(this, value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_FINALIZE_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_CLEANUP_OFFSET))(this);
		}

		::System::Void InvokeCompletionEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_INVOKECOMPLETIONEVENT_OFFSET))(this);
		}

		::System::Void add_completed(::System::Action_1<::UnityEngine::AsyncOperation*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::AsyncOperation*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_ADD_COMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_completed(::System::Action_1<::UnityEngine::AsyncOperation*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::AsyncOperation*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_REMOVE_COMPLETED_OFFSET))(this, value);
		}
	};
}
