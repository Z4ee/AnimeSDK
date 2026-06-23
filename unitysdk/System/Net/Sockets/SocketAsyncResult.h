#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/IOAsyncResult.h"
#include "unitysdk/System/Net/Sockets/SocketError.h"
#include "unitysdk/System/Net/Sockets/SocketFlags.h"
#include "unitysdk/System/Net/Sockets/SocketOperation.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Net { class EndPoint; }
namespace System::Net { class IPAddress; }
namespace System::Net::Sockets { class Socket; }

#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_CHECKIFTHROWDELAYEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C4A3640)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETEDISPOSED_OFFSET UNITYSDK_OFFSET(0x1C4A36E0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1C4A39A0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_2_OFFSET UNITYSDK_OFFSET(0x1C4A39B0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_3_OFFSET UNITYSDK_OFFSET(0x1C4A39C0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_4_OFFSET UNITYSDK_OFFSET(0x1C4A39D0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_5_OFFSET UNITYSDK_OFFSET(0x1C4A39E0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_6_OFFSET UNITYSDK_OFFSET(0x1C4A39F0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1C4A36F0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x1C4A35C0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1C4A3490)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_INIT_OFFSET UNITYSDK_OFFSET(0x1C4A34D0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4A35A0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A34C0)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketAsyncResult_TypeDefinitionIndex = 3684;

	class SocketAsyncResult : public ::System::IOAsyncResult
	{
	public:
		::System::Net::Sockets::Socket* socket; // 0x30
		::System::Net::Sockets::SocketOperation operation; // 0x38
		::System::Exception* DelayedException; // 0x40
		::System::Net::EndPoint* EndPoint; // 0x48
		::Il2CppArray<::System::Byte>* Buffer; // 0x50
		::System::Int32 Offset; // 0x58
		::System::Int32 Size; // 0x5C
		::System::Net::Sockets::SocketFlags SockFlags; // 0x60
		::System::Net::Sockets::Socket* AcceptSocket; // 0x68
		::Il2CppArray<::System::Net::IPAddress*>* Addresses; // 0x70
		::System::Int32 Port; // 0x78
		::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* Buffers; // 0x80
		::System::Boolean ReuseSocket; // 0x88
		::System::Int32 CurrentAddress; // 0x8C
		::System::Net::Sockets::Socket* AcceptedSocket; // 0x90
		::System::Int32 Total; // 0x98
		::System::Int32 error; // 0x9C
		::System::Int32 EndCalled; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::Sockets::Socket* socket, ::System::AsyncCallback* callback, ::System::Object* state, ::System::Net::Sockets::SocketOperation operation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::AsyncCallback*, ::System::Object*, ::System::Net::Sockets::SocketOperation))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT__CTOR_1_OFFSET))(this, socket, callback, state, operation);
		}

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_GET_HANDLE_OFFSET))(this);
		}

		::System::Void Init(::System::Net::Sockets::Socket* socket, ::System::AsyncCallback* callback, ::System::Object* state, ::System::Net::Sockets::SocketOperation operation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::AsyncCallback*, ::System::Object*, ::System::Net::Sockets::SocketOperation))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_INIT_OFFSET))(this, socket, callback, state, operation);
		}

		::System::Net::Sockets::SocketError get_ErrorCode()
		{
			return ((::System::Net::Sockets::SocketError(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_GET_ERRORCODE_OFFSET))(this);
		}

		::System::Void CheckIfThrowDelayedException()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_CHECKIFTHROWDELAYEDEXCEPTION_OFFSET))(this);
		}

		::System::Void CompleteDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETEDISPOSED_OFFSET))(this);
		}

		::System::Void Complete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET))(this);
		}

		::System::Void Complete_1(::System::Boolean synch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_1_OFFSET))(this, synch);
		}

		::System::Void Complete_2(::System::Int32 total)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_2_OFFSET))(this, total);
		}

		::System::Void Complete_3(::System::Exception* e, ::System::Boolean synch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_3_OFFSET))(this, e, synch);
		}

		::System::Void Complete_4(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_4_OFFSET))(this, e);
		}

		::System::Void Complete_5(::System::Net::Sockets::Socket* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_5_OFFSET))(this, s);
		}

		::System::Void Complete_6(::System::Net::Sockets::Socket* s, ::System::Int32 total)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_6_OFFSET))(this, s, total);
		}
	};
}
