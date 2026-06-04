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

#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ADDFAULTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1862F1C0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ADD_OFFSET UNITYSDK_OFFSET(0x186265A0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_APPDOMAINUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1862E810)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_CREATEEXCEPTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x18626680)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ENSUREADUNLOADCALLBACKREGISTERED_OFFSET UNITYSDK_OFFSET(0x1862E610)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1862E870)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GETCANCELLATIONEXCEPTIONDISPATCHINFO_OFFSET UNITYSDK_OFFSET(0x1862FBC0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GETEXCEPTIONDISPATCHINFOS_OFFSET UNITYSDK_OFFSET(0x18626A50)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GET_CONTAINSFAULTLIST_OFFSET UNITYSDK_OFFSET(0x18625B50)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_MARKASHANDLED_OFFSET UNITYSDK_OFFSET(0x18626240)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_MARKASUNHANDLED_OFFSET UNITYSDK_OFFSET(0x1862FB10)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_SETCANCELLATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1862F0C0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_SHOULDFAILFASTONUNOBSERVEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1862E800)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1862FBD0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18626540)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskExceptionHolder_TypeDefinitionIndex = 922;

	class TaskExceptionHolder : public ::System::Object
	{
	public:
		static ::System::EventHandler** StaticGet_s_adUnloadEventHandler()
		{
			return (::System::EventHandler**)Il2CppClass::FromTypeDefinitionIndex(TaskExceptionHolder_TypeDefinitionIndex)->GetStaticField(0x12560);
		}
		static ::System::Boolean* StaticGet_s_domainUnloadStarted()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TaskExceptionHolder_TypeDefinitionIndex)->GetStaticField(0x5630);
		}
		static ::System::Boolean* StaticGet_s_failFastOnUnobservedException()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TaskExceptionHolder_TypeDefinitionIndex)->GetStaticField(0x5631);
		}
		::System::Threading::Tasks::Task* m_task; // 0x10
		::System::Collections::Generic::List_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* m_faultExceptions; // 0x18
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* m_cancellationException; // 0x20
		::System::Boolean m_isHandled; // 0x28

		::System::Void _ctor(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER__CTOR_OFFSET))(this, a1);
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

		static ::System::Void AppDomainUnloadCallback(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_APPDOMAINUNLOADCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_FINALIZE_OFFSET))(this);
		}

		::System::Boolean get_ContainsFaultList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GET_CONTAINSFAULTLIST_OFFSET))(this);
		}

		::System::Void Add(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ADD_OFFSET))(this, a1, a2);
		}

		::System::Void SetCancellationException(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_SETCANCELLATIONEXCEPTION_OFFSET))(this, a1);
		}

		::System::Void AddFaultException(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ADDFAULTEXCEPTION_OFFSET))(this, a1);
		}

		::System::Void MarkAsUnhandled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_MARKASUNHANDLED_OFFSET))(this);
		}

		::System::Void MarkAsHandled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_MARKASHANDLED_OFFSET))(this, a1);
		}

		::System::AggregateException* CreateExceptionObject(::System::Boolean a1, ::System::Exception* a2)
		{
			return ((::System::AggregateException*(*)(::PVOID, ::System::Boolean, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_CREATEEXCEPTIONOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* GetExceptionDispatchInfos()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GETEXCEPTIONDISPATCHINFOS_OFFSET))(this);
		}

		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* GetCancellationExceptionDispatchInfo()
		{
			return ((::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GETCANCELLATIONEXCEPTIONDISPATCHINFO_OFFSET))(this);
		}
	};
}
