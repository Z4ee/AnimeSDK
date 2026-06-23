#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class ConnectionPool; }
namespace System::Net { class PooledStream; }

#define SYSTEM_NET_CREATECONNECTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C2E5B40)
#define SYSTEM_NET_CREATECONNECTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C2E5B70)
#define SYSTEM_NET_CREATECONNECTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C2E5600)
#define SYSTEM_NET_CREATECONNECTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E55E0)

namespace System::Net
{
	inline static constexpr unsigned int CreateConnectionDelegate_TypeDefinitionIndex = 3407;

	class CreateConnectionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREATECONNECTIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Net::PooledStream* Invoke(::System::Net::ConnectionPool* pool)
		{
			return ((::System::Net::PooledStream*(*)(::PVOID, ::System::Net::ConnectionPool*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREATECONNECTIONDELEGATE_INVOKE_OFFSET))(this, pool);
		}

		::System::IAsyncResult* BeginInvoke(::System::Net::ConnectionPool* pool, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::ConnectionPool*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREATECONNECTIONDELEGATE_BEGININVOKE_OFFSET))(this, pool, callback, object);
		}

		::System::Net::PooledStream* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Net::PooledStream*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREATECONNECTIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
