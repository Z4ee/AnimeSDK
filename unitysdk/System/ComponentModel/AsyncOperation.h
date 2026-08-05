#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class SendOrPostCallback; }
namespace System::Threading { class SynchronizationContext; }

#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_CREATEOPERATION_OFFSET UNITYSDK_OFFSET(0x1DD10A50)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DD10620)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_GET_SYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1DD106B0)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_GET_USERSUPPLIEDSTATE_OFFSET UNITYSDK_OFFSET(0x1DD106A0)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_OPERATIONCOMPLETEDCORE_OFFSET UNITYSDK_OFFSET(0x1DD108C0)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_OPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1DD109E0)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_POSTOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1DD108A0)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_POST_OFFSET UNITYSDK_OFFSET(0x1DD106C0)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_VERIFYDELEGATENOTNULL_OFFSET UNITYSDK_OFFSET(0x1DD10830)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_VERIFYNOTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1DD107C0)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD10AC0)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD105E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AsyncOperation_TypeDefinitionIndex = 2813;

	class AsyncOperation : public ::System::Object
	{
	public:
		::System::Object* userSuppliedState; // 0x10
		::System::Threading::SynchronizationContext* syncContext; // 0x18
		::System::Boolean alreadyCompleted; // 0x20

		::System::Void _ctor(::System::Object* userSuppliedState, ::System::Threading::SynchronizationContext* syncContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Threading::SynchronizationContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION__CTOR_OFFSET))(this, userSuppliedState, syncContext);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION__CTOR_1_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_FINALIZE_OFFSET))(this);
		}

		::System::Object* get_UserSuppliedState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_GET_USERSUPPLIEDSTATE_OFFSET))(this);
		}

		::System::Threading::SynchronizationContext* get_SynchronizationContext()
		{
			return ((::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_GET_SYNCHRONIZATIONCONTEXT_OFFSET))(this);
		}

		::System::Void Post(::System::Threading::SendOrPostCallback* d, ::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_POST_OFFSET))(this, d, arg);
		}

		::System::Void PostOperationCompleted(::System::Threading::SendOrPostCallback* d, ::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_POSTOPERATIONCOMPLETED_OFFSET))(this, d, arg);
		}

		::System::Void OperationCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_OPERATIONCOMPLETED_OFFSET))(this);
		}

		::System::Void OperationCompletedCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_OPERATIONCOMPLETEDCORE_OFFSET))(this);
		}

		::System::Void VerifyNotCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_VERIFYNOTCOMPLETED_OFFSET))(this);
		}

		::System::Void VerifyDelegateNotNull(::System::Threading::SendOrPostCallback* d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_VERIFYDELEGATENOTNULL_OFFSET))(this, d);
		}

		static ::System::ComponentModel::AsyncOperation* CreateOperation(::System::Object* userSuppliedState, ::System::Threading::SynchronizationContext* syncContext)
		{
			return ((::System::ComponentModel::AsyncOperation*(*)(::System::Object*, ::System::Threading::SynchronizationContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_CREATEOPERATION_OFFSET))(userSuppliedState, syncContext);
		}
	};
}
