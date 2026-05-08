#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Component.h"

namespace System { class Object; }
namespace System::ComponentModel { class AsyncOperation; }
namespace System::ComponentModel { class BackgroundWorker_WorkerThreadStartDelegate; }
namespace System::ComponentModel { class DoWorkEventArgs; }
namespace System::ComponentModel { class DoWorkEventHandler; }
namespace System::ComponentModel { class ProgressChangedEventArgs; }
namespace System::ComponentModel { class ProgressChangedEventHandler; }
namespace System::ComponentModel { class RunWorkerCompletedEventArgs; }
namespace System::ComponentModel { class RunWorkerCompletedEventHandler; }
namespace System::Threading { class SendOrPostCallback; }

#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ADD_DOWORK_OFFSET UNITYSDK_OFFSET(0x19391C50)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ADD_PROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x193922B0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ADD_RUNWORKERCOMPLETED_OFFSET UNITYSDK_OFFSET(0x193927B0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ASYNCOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x19391B40)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_CANCELASYNC_OFFSET UNITYSDK_OFFSET(0x19391BE0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_GET_CANCELLATIONPENDING_OFFSET UNITYSDK_OFFSET(0x19391BD0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_GET_ISBUSY_OFFSET UNITYSDK_OFFSET(0x19391EE0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_GET_WORKERREPORTSPROGRESS_OFFSET UNITYSDK_OFFSET(0x19392A40)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_GET_WORKERSUPPORTSCANCELLATION_OFFSET UNITYSDK_OFFSET(0x19392A60)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ONDOWORK_OFFSET UNITYSDK_OFFSET(0x19391EF0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ONPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x19392170)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ONRUNWORKERCOMPLETED_OFFSET UNITYSDK_OFFSET(0x19392030)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_PROGRESSREPORTER_OFFSET UNITYSDK_OFFSET(0x19392540)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REMOVE_DOWORK_OFFSET UNITYSDK_OFFSET(0x19391DD0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REMOVE_PROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x19392430)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REMOVE_RUNWORKERCOMPLETED_OFFSET UNITYSDK_OFFSET(0x19392930)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REPORTPROGRESS_1_OFFSET UNITYSDK_OFFSET(0x193925D0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REPORTPROGRESS_OFFSET UNITYSDK_OFFSET(0x193925C0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_RUNWORKERASYNC_1_OFFSET UNITYSDK_OFFSET(0x19392700)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_RUNWORKERASYNC_OFFSET UNITYSDK_OFFSET(0x193926F0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_SET_WORKERREPORTSPROGRESS_OFFSET UNITYSDK_OFFSET(0x19392A50)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_SET_WORKERSUPPORTSCANCELLATION_OFFSET UNITYSDK_OFFSET(0x19392A70)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_WORKERTHREADSTART_OFFSET UNITYSDK_OFFSET(0x19392A80)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19392CC0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER__CTOR_OFFSET UNITYSDK_OFFSET(0x19391A70)

namespace System::ComponentModel
{
	inline static constexpr unsigned int BackgroundWorker_TypeDefinitionIndex = 2819;

	class BackgroundWorker : public ::System::ComponentModel::Component
	{
	public:
		static ::System::Object** StaticGet_runWorkerCompletedKey()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BackgroundWorker_TypeDefinitionIndex)->GetStaticField(0x3290);
		}
		static ::System::Object** StaticGet_doWorkKey()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BackgroundWorker_TypeDefinitionIndex)->GetStaticField(0x3298);
		}
		static ::System::Object** StaticGet_progressChangedKey()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BackgroundWorker_TypeDefinitionIndex)->GetStaticField(0x32A0);
		}
		::System::ComponentModel::BackgroundWorker_WorkerThreadStartDelegate* threadStart; // 0x28
		::System::ComponentModel::AsyncOperation* asyncOperation; // 0x30
		::System::Threading::SendOrPostCallback* operationCompleted; // 0x38
		::System::Threading::SendOrPostCallback* progressReporter; // 0x40
		::System::Boolean workerReportsProgress; // 0x48
		::System::Boolean canCancelWorker; // 0x49
		::System::Boolean cancellationPending; // 0x4A
		::System::Boolean isRunning; // 0x4B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER__CCTOR_OFFSET))();
		}

		::System::Void AsyncOperationCompleted(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ASYNCOPERATIONCOMPLETED_OFFSET))(this, arg);
		}

		::System::Boolean get_CancellationPending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_GET_CANCELLATIONPENDING_OFFSET))(this);
		}

		::System::Void CancelAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_CANCELASYNC_OFFSET))(this);
		}

		::System::Void add_DoWork(::System::ComponentModel::DoWorkEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::DoWorkEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ADD_DOWORK_OFFSET))(this, value);
		}

		::System::Void remove_DoWork(::System::ComponentModel::DoWorkEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::DoWorkEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REMOVE_DOWORK_OFFSET))(this, value);
		}

		::System::Boolean get_IsBusy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_GET_ISBUSY_OFFSET))(this);
		}

		::System::Void OnDoWork(::System::ComponentModel::DoWorkEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::DoWorkEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ONDOWORK_OFFSET))(this, e);
		}

		::System::Void OnRunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::RunWorkerCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ONRUNWORKERCOMPLETED_OFFSET))(this, e);
		}

		::System::Void OnProgressChanged(::System::ComponentModel::ProgressChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ProgressChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ONPROGRESSCHANGED_OFFSET))(this, e);
		}

		::System::Void add_ProgressChanged(::System::ComponentModel::ProgressChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ProgressChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ADD_PROGRESSCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_ProgressChanged(::System::ComponentModel::ProgressChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ProgressChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REMOVE_PROGRESSCHANGED_OFFSET))(this, value);
		}

		::System::Void ProgressReporter(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_PROGRESSREPORTER_OFFSET))(this, arg);
		}

		::System::Void ReportProgress(::System::Int32 percentProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REPORTPROGRESS_OFFSET))(this, percentProgress);
		}

		::System::Void ReportProgress_1(::System::Int32 percentProgress, ::System::Object* userState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REPORTPROGRESS_1_OFFSET))(this, percentProgress, userState);
		}

		::System::Void RunWorkerAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_RUNWORKERASYNC_OFFSET))(this);
		}

		::System::Void RunWorkerAsync_1(::System::Object* argument)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_RUNWORKERASYNC_1_OFFSET))(this, argument);
		}

		::System::Void add_RunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::RunWorkerCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ADD_RUNWORKERCOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_RunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::RunWorkerCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REMOVE_RUNWORKERCOMPLETED_OFFSET))(this, value);
		}

		::System::Boolean get_WorkerReportsProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_GET_WORKERREPORTSPROGRESS_OFFSET))(this);
		}

		::System::Void set_WorkerReportsProgress(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_SET_WORKERREPORTSPROGRESS_OFFSET))(this, value);
		}

		::System::Boolean get_WorkerSupportsCancellation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_GET_WORKERSUPPORTSCANCELLATION_OFFSET))(this);
		}

		::System::Void set_WorkerSupportsCancellation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_SET_WORKERSUPPORTSCANCELLATION_OFFSET))(this, value);
		}

		::System::Void WorkerThreadStart(::System::Object* argument)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_WORKERTHREADSTART_OFFSET))(this, argument);
		}
	};
}
