#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AggregateException; }
namespace System { class EventArgs; }
namespace System { class EventHandler; }
namespace System { class Exception; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ADDFAULTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AC9F530)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ADD_OFFSET UNITYSDK_OFFSET(0x1AC9F3D0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_APPDOMAINUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AC9ED90)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_CREATEEXCEPTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x1AC9FEA0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ENSUREADUNLOADCALLBACKREGISTERED_OFFSET UNITYSDK_OFFSET(0x1AC9EB80)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AC9EDF0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GETEXCEPTIONDISPATCHINFOS_OFFSET UNITYSDK_OFFSET(0x1ACA01E0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GET_CONTAINSFAULTLIST_OFFSET UNITYSDK_OFFSET(0x1AC9F3C0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_MARKASHANDLED_OFFSET UNITYSDK_OFFSET(0x1AC9FD30)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_MARKASUNHANDLED_OFFSET UNITYSDK_OFFSET(0x1AC9FDF0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_SETCANCELLATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AC9F3E0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_SHOULDFAILFASTONUNOBSERVEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AC9ED80)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACA0310)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC9EB20)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskExceptionHolder_TypeDefinitionIndex = 931;

	class TaskExceptionHolder : public ::System::Object
	{
	public:
		static ::System::EventHandler** StaticGet_s_adUnloadEventHandler()
		{
			return (::System::EventHandler**)Il2CppClass::FromTypeDefinitionIndex(TaskExceptionHolder_TypeDefinitionIndex)->GetStaticField(0x1010);
		}
		static ::System::Boolean* StaticGet_s_domainUnloadStarted()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TaskExceptionHolder_TypeDefinitionIndex)->GetStaticField(0x530);
		}
		static ::System::Boolean* StaticGet_s_failFastOnUnobservedException()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TaskExceptionHolder_TypeDefinitionIndex)->GetStaticField(0x531);
		}
		::System::Threading::Tasks::Task* m_task; // 0x10
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* m_cancellationException; // 0x18
		::System::Collections::Generic::List_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* m_faultExceptions; // 0x20
		::System::Boolean m_isHandled; // 0x28

		::System::Void _ctor(::System::Threading::Tasks::Task* task)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER__CTOR_OFFSET))(this, task);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER__CCTOR_OFFSET))();
		}

		static ::System::Boolean ShouldFailFastOnUnobservedException()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_SHOULDFAILFASTONUNOBSERVEDEXCEPTION_OFFSET))();
		}

		static ::System::Void EnsureADUnloadCallbackRegistered()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ENSUREADUNLOADCALLBACKREGISTERED_OFFSET))();
		}

		static ::System::Void AppDomainUnloadCallback(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_APPDOMAINUNLOADCALLBACK_OFFSET))(sender, e);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_FINALIZE_OFFSET))(this);
		}

		::System::Boolean get_ContainsFaultList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GET_CONTAINSFAULTLIST_OFFSET))(this);
		}

		::System::Void Add(::System::Object* exceptionObject, ::System::Boolean representsCancellation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ADD_OFFSET))(this, exceptionObject, representsCancellation);
		}

		::System::Void SetCancellationException(::System::Object* exceptionObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_SETCANCELLATIONEXCEPTION_OFFSET))(this, exceptionObject);
		}

		::System::Void AddFaultException(::System::Object* exceptionObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ADDFAULTEXCEPTION_OFFSET))(this, exceptionObject);
		}

		::System::Void MarkAsUnhandled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_MARKASUNHANDLED_OFFSET))(this);
		}

		::System::Void MarkAsHandled(::System::Boolean calledFromFinalizer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_MARKASHANDLED_OFFSET))(this, calledFromFinalizer);
		}

		::System::AggregateException* CreateExceptionObject(::System::Boolean calledFromFinalizer, ::System::Exception* includeThisException)
		{
			return ((::System::AggregateException*(*)(::PVOID, ::System::Boolean, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_CREATEEXCEPTIONOBJECT_OFFSET))(this, calledFromFinalizer, includeThisException);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* GetExceptionDispatchInfos()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GETEXCEPTIONDISPATCHINFOS_OFFSET))(this);
		}
	};
}
