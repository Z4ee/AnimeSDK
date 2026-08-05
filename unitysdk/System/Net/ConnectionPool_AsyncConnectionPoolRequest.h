#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class ConnectionPool; }
namespace System::Net { class GeneralAsyncDelegate; }

#define SYSTEM_NET_CONNECTIONPOOL_ASYNCCONNECTIONPOOLREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB847F0)

namespace System::Net
{
	inline static constexpr unsigned int ConnectionPool_AsyncConnectionPoolRequest_TypeDefinitionIndex = 3410;

	class ConnectionPool_AsyncConnectionPoolRequest : public ::System::Object
	{
	public:
		::System::Net::GeneralAsyncDelegate* AsyncCallback; // 0x10
		::System::Object* OwningObject; // 0x18
		::System::Net::ConnectionPool* Pool; // 0x20
		::System::Int32 CreationTimeout; // 0x28

		::System::Void _ctor(::System::Net::ConnectionPool* pool, ::System::Object* owningObject, ::System::Net::GeneralAsyncDelegate* asyncCallback, ::System::Int32 creationTimeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ConnectionPool*, ::System::Object*, ::System::Net::GeneralAsyncDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONNECTIONPOOL_ASYNCCONNECTIONPOOLREQUEST__CTOR_OFFSET))(this, pool, owningObject, asyncCallback, creationTimeout);
		}
	};
}
