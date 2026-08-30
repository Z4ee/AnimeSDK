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

#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_CHECKIFTHROWDELAYEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B96D200)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETEDISPOSED_OFFSET UNITYSDK_OFFSET(0x1B973840)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1B96E860)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_2_OFFSET UNITYSDK_OFFSET(0x1B96FB70)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_3_OFFSET UNITYSDK_OFFSET(0x1B96E850)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_4_OFFSET UNITYSDK_OFFSET(0x1B96FB60)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_5_OFFSET UNITYSDK_OFFSET(0x1B9713D0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_6_OFFSET UNITYSDK_OFFSET(0x1B971660)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1B971D70)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x1B96F0C0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1B96CCC0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_INIT_OFFSET UNITYSDK_OFFSET(0x1B970690)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B96CFB0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B973770)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketAsyncResult_TypeDefinitionIndex = 2919;

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

		::System::Void _ctor_1(::System::Net::Sockets::Socket* a1, ::System::AsyncCallback* a2, ::System::Object* a3, ::System::Net::Sockets::SocketOperation a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::AsyncCallback*, ::System::Object*, ::System::Net::Sockets::SocketOperation))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_GET_HANDLE_OFFSET))(this);
		}

		::System::Void Init(::System::Net::Sockets::Socket* a1, ::System::AsyncCallback* a2, ::System::Object* a3, ::System::Net::Sockets::SocketOperation a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::AsyncCallback*, ::System::Object*, ::System::Net::Sockets::SocketOperation))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_INIT_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Void Complete_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_1_OFFSET))(this, a1);
		}

		::System::Void Complete_2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_2_OFFSET))(this, a1);
		}

		::System::Void Complete_3(::System::Exception* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_3_OFFSET))(this, a1, a2);
		}

		::System::Void Complete_4(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_4_OFFSET))(this, a1);
		}

		::System::Void Complete_5(::System::Net::Sockets::Socket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_5_OFFSET))(this, a1);
		}

		::System::Void Complete_6(::System::Net::Sockets::Socket* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT_COMPLETE_6_OFFSET))(this, a1, a2);
		}
	};
}
