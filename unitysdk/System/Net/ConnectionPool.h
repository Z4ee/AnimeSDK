#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/ConnectionPool_State.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Queue; }
namespace System::Net { class ConnectionPool_AsyncConnectionPoolRequest; }
namespace System::Net { class CreateConnectionDelegate; }
namespace System::Net { class GeneralAsyncDelegate; }
namespace System::Net { class InterlockedStack; }
namespace System::Net { class PooledStream; }
namespace System::Net { class Semaphore; }
namespace System::Net { class ServicePoint; }
namespace System::Net { class TimerThread_Callback; }
namespace System::Net { class TimerThread_Queue; }
namespace System::Net { class TimerThread_Timer; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class Mutex; }
namespace System::Threading { class Thread; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_NET_CONNECTIONPOOL_ABORT_OFFSET UNITYSDK_OFFSET(0x19BB42D0)
#define SYSTEM_NET_CONNECTIONPOOL_ASYNCTHREAD_OFFSET UNITYSDK_OFFSET(0x19BB27A0)
#define SYSTEM_NET_CONNECTIONPOOL_CANCELERRORCALLBACKWRAPPER_OFFSET UNITYSDK_OFFSET(0x19BB4540)
#define SYSTEM_NET_CONNECTIONPOOL_CANCELERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x19BB45B0)
#define SYSTEM_NET_CONNECTIONPOOL_CLEANUPCALLBACKWRAPPER_OFFSET UNITYSDK_OFFSET(0x19BB37F0)
#define SYSTEM_NET_CONNECTIONPOOL_CLEANUPCALLBACK_OFFSET UNITYSDK_OFFSET(0x19BB3930)
#define SYSTEM_NET_CONNECTIONPOOL_CREATE_OFFSET UNITYSDK_OFFSET(0x19BB4050)
#define SYSTEM_NET_CONNECTIONPOOL_DESTROY_OFFSET UNITYSDK_OFFSET(0x19BB3EE0)
#define SYSTEM_NET_CONNECTIONPOOL_FORCECLEANUP_OFFSET UNITYSDK_OFFSET(0x19BB3D60)
#define SYSTEM_NET_CONNECTIONPOOL_GETCONNECTION_OFFSET UNITYSDK_OFFSET(0x19BB4B20)
#define SYSTEM_NET_CONNECTIONPOOL_GETFROMPOOL_OFFSET UNITYSDK_OFFSET(0x19BB46C0)
#define SYSTEM_NET_CONNECTIONPOOL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19BB37A0)
#define SYSTEM_NET_CONNECTIONPOOL_GET_CREATIONMUTEX_OFFSET UNITYSDK_OFFSET(0x19BB1F00)
#define SYSTEM_NET_CONNECTIONPOOL_GET_ERROREVENT_OFFSET UNITYSDK_OFFSET(0x19BB1F80)
#define SYSTEM_NET_CONNECTIONPOOL_GET_ERROROCCURRED_OFFSET UNITYSDK_OFFSET(0x19BB37E0)
#define SYSTEM_NET_CONNECTIONPOOL_GET_MAXPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x19BB37C0)
#define SYSTEM_NET_CONNECTIONPOOL_GET_MINPOOLSIZE_OFFSET UNITYSDK_OFFSET(0x19BB37D0)
#define SYSTEM_NET_CONNECTIONPOOL_GET_OFFSET UNITYSDK_OFFSET(0x19BB2C40)
#define SYSTEM_NET_CONNECTIONPOOL_GET_SEMAPHORE_OFFSET UNITYSDK_OFFSET(0x19BB2000)
#define SYSTEM_NET_CONNECTIONPOOL_GET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x19BB37B0)
#define SYSTEM_NET_CONNECTIONPOOL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19BB2180)
#define SYSTEM_NET_CONNECTIONPOOL_PUTCONNECTION_1_OFFSET UNITYSDK_OFFSET(0x19BB3260)
#define SYSTEM_NET_CONNECTIONPOOL_PUTCONNECTION_OFFSET UNITYSDK_OFFSET(0x19BB4D40)
#define SYSTEM_NET_CONNECTIONPOOL_PUTNEW_OFFSET UNITYSDK_OFFSET(0x19BB4D60)
#define SYSTEM_NET_CONNECTIONPOOL_QUEUEREQUEST_OFFSET UNITYSDK_OFFSET(0x19BB25B0)
#define SYSTEM_NET_CONNECTIONPOOL_RECLAIMEMANCIPATEDOBJECTS_OFFSET UNITYSDK_OFFSET(0x19BB47C0)
#define SYSTEM_NET_CONNECTIONPOOL_USERCREATEREQUEST_OFFSET UNITYSDK_OFFSET(0x19BB4770)
#define SYSTEM_NET_CONNECTIONPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BB4E60)
#define SYSTEM_NET_CONNECTIONPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB2080)

namespace System::Net
{
	inline static constexpr unsigned int ConnectionPool_TypeDefinitionIndex = 3409;

	class ConnectionPool : public ::System::Object
	{
	public:
		static ::System::Net::TimerThread_Callback** StaticGet_s_CancelErrorCallback()
		{
			return (::System::Net::TimerThread_Callback**)Il2CppClass::FromTypeDefinitionIndex(ConnectionPool_TypeDefinitionIndex)->GetStaticField(0x3A10);
		}
		static ::System::Net::TimerThread_Queue** StaticGet_s_CancelErrorQueue()
		{
			return (::System::Net::TimerThread_Queue**)Il2CppClass::FromTypeDefinitionIndex(ConnectionPool_TypeDefinitionIndex)->GetStaticField(0x3A18);
		}
		static ::System::Net::TimerThread_Callback** StaticGet_s_CleanupCallback()
		{
			return (::System::Net::TimerThread_Callback**)Il2CppClass::FromTypeDefinitionIndex(ConnectionPool_TypeDefinitionIndex)->GetStaticField(0x3A20);
		}
		// static const ::System::Int32 MaxQueueSize = 0x100000; // 0x0
		// static const ::System::Int32 SemaphoreHandleIndex = 0x0; // 0x0
		// static const ::System::Int32 ErrorHandleIndex = 0x1; // 0x0
		// static const ::System::Int32 CreationHandleIndex = 0x2; // 0x0
		// static const ::System::Int32 WaitTimeout = 0x102; // 0x0
		// static const ::System::Int32 WaitAbandoned = 0x80; // 0x0
		// static const ::System::Int32 ErrorWait = 0x1388; // 0x0
		::System::Exception* m_ResError; // 0x10
		::System::Net::ServicePoint* m_ServicePoint; // 0x18
		::System::Net::TimerThread_Timer* m_ErrorTimer; // 0x20
		::System::Collections::Queue* m_QueuedRequests; // 0x28
		::System::Collections::ArrayList* m_ObjectList; // 0x30
		::System::Net::TimerThread_Queue* m_CleanupQueue; // 0x38
		::System::Net::InterlockedStack* m_StackOld; // 0x40
		::System::Net::CreateConnectionDelegate* m_CreateConnectionCallback; // 0x48
		::System::Threading::Thread* m_AsyncThread; // 0x50
		::Il2CppArray<::System::Threading::WaitHandle*>* m_WaitHandles; // 0x58
		::System::Net::InterlockedStack* m_StackNew; // 0x60
		::System::Int32 m_MinPoolSize; // 0x68
		::System::Net::ConnectionPool_State m_State; // 0x6C
		::System::Int32 m_MaxPoolSize; // 0x70
		::System::Boolean m_ErrorOccured; // 0x74
		::System::Int32 m_WaitCount; // 0x78
		::System::Int32 m_TotalObjects; // 0x7C

		::System::Void _ctor(::System::Net::ServicePoint* servicePoint, ::System::Int32 maxPoolSize, ::System::Int32 minPoolSize, ::System::Int32 idleTimeout, ::System::Net::CreateConnectionDelegate* createConnectionCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ServicePoint*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Net::CreateConnectionDelegate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL__CTOR_OFFSET))(this, servicePoint, maxPoolSize, minPoolSize, idleTimeout, createConnectionCallback);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL__CCTOR_OFFSET))();
		}

		::System::Threading::Mutex* get_CreationMutex()
		{
			return ((::System::Threading::Mutex*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_GET_CREATIONMUTEX_OFFSET))(this);
		}

		::System::Threading::ManualResetEvent* get_ErrorEvent()
		{
			return ((::System::Threading::ManualResetEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_GET_ERROREVENT_OFFSET))(this);
		}

		::System::Net::Semaphore* get_Semaphore()
		{
			return ((::System::Net::Semaphore*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_GET_SEMAPHORE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_INITIALIZE_OFFSET))(this);
		}

		::System::Void QueueRequest(::System::Net::ConnectionPool_AsyncConnectionPoolRequest* asyncRequest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ConnectionPool_AsyncConnectionPoolRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_QUEUEREQUEST_OFFSET))(this, asyncRequest);
		}

		::System::Void AsyncThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_ASYNCTHREAD_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_GET_COUNT_OFFSET))(this);
		}

		::System::Net::ServicePoint* get_ServicePoint()
		{
			return ((::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_GET_SERVICEPOINT_OFFSET))(this);
		}

		::System::Int32 get_MaxPoolSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_GET_MAXPOOLSIZE_OFFSET))(this);
		}

		::System::Int32 get_MinPoolSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_GET_MINPOOLSIZE_OFFSET))(this);
		}

		::System::Boolean get_ErrorOccurred()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_GET_ERROROCCURRED_OFFSET))(this);
		}

		static ::System::Void CleanupCallbackWrapper(::System::Net::TimerThread_Timer* timer, ::System::Int32 timeNoticed, ::System::Object* context)
		{
			return ((::System::Void(*)(::System::Net::TimerThread_Timer*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_CLEANUPCALLBACKWRAPPER_OFFSET))(timer, timeNoticed, context);
		}

		::System::Void ForceCleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_FORCECLEANUP_OFFSET))(this);
		}

		::System::Void CleanupCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_CLEANUPCALLBACK_OFFSET))(this);
		}

		::System::Net::PooledStream* Create(::System::Net::CreateConnectionDelegate* createConnectionCallback)
		{
			return ((::System::Net::PooledStream*(*)(::PVOID, ::System::Net::CreateConnectionDelegate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_CREATE_OFFSET))(this, createConnectionCallback);
		}

		::System::Void Destroy(::System::Net::PooledStream* pooledStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::PooledStream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_DESTROY_OFFSET))(this, pooledStream);
		}

		static ::System::Void CancelErrorCallbackWrapper(::System::Net::TimerThread_Timer* timer, ::System::Int32 timeNoticed, ::System::Object* context)
		{
			return ((::System::Void(*)(::System::Net::TimerThread_Timer*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_CANCELERRORCALLBACKWRAPPER_OFFSET))(timer, timeNoticed, context);
		}

		::System::Void CancelErrorCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_CANCELERRORCALLBACK_OFFSET))(this);
		}

		::System::Net::PooledStream* GetFromPool(::System::Object* owningObject)
		{
			return ((::System::Net::PooledStream*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_GETFROMPOOL_OFFSET))(this, owningObject);
		}

		::System::Net::PooledStream* Get(::System::Object* owningObject, ::System::Int32 result, ::System::Boolean& continueLoop, ::Il2CppArray<::System::Threading::WaitHandle*>*& waitHandles)
		{
			return ((::System::Net::PooledStream*(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Boolean&, ::Il2CppArray<::System::Threading::WaitHandle*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_GET_OFFSET))(this, owningObject, result, continueLoop, waitHandles);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_ABORT_OFFSET))(this);
		}

		::System::Net::PooledStream* GetConnection(::System::Object* owningObject, ::System::Net::GeneralAsyncDelegate* asyncCallback, ::System::Int32 creationTimeout)
		{
			return ((::System::Net::PooledStream*(*)(::PVOID, ::System::Object*, ::System::Net::GeneralAsyncDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_GETCONNECTION_OFFSET))(this, owningObject, asyncCallback, creationTimeout);
		}

		::System::Void PutConnection(::System::Net::PooledStream* pooledStream, ::System::Object* owningObject, ::System::Int32 creationTimeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::PooledStream*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_PUTCONNECTION_OFFSET))(this, pooledStream, owningObject, creationTimeout);
		}

		::System::Void PutConnection_1(::System::Net::PooledStream* pooledStream, ::System::Object* owningObject, ::System::Int32 creationTimeout, ::System::Boolean canReuse)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::PooledStream*, ::System::Object*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_PUTCONNECTION_1_OFFSET))(this, pooledStream, owningObject, creationTimeout, canReuse);
		}

		::System::Void PutNew(::System::Net::PooledStream* pooledStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::PooledStream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_PUTNEW_OFFSET))(this, pooledStream);
		}

		::System::Boolean ReclaimEmancipatedObjects()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_RECLAIMEMANCIPATEDOBJECTS_OFFSET))(this);
		}

		::System::Net::PooledStream* UserCreateRequest()
		{
			return ((::System::Net::PooledStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_USERCREATEREQUEST_OFFSET))(this);
		}
	};
}
