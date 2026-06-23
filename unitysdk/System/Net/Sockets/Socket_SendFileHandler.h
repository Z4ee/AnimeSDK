#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Net/Sockets/TransmitFileOptions.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NET_SOCKETS_SOCKET_SENDFILEHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CED2680)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDFILEHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CED2720)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDFILEHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CED1FE0)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDFILEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED1FC0)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int Socket_SendFileHandler_TypeDefinitionIndex = 3653;

	class Socket_SendFileHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDFILEHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* fileName, ::Il2CppArray<::System::Byte>* preBuffer, ::Il2CppArray<::System::Byte>* postBuffer, ::System::Net::Sockets::TransmitFileOptions flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Net::Sockets::TransmitFileOptions))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDFILEHANDLER_INVOKE_OFFSET))(this, fileName, preBuffer, postBuffer, flags);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* fileName, ::Il2CppArray<::System::Byte>* preBuffer, ::Il2CppArray<::System::Byte>* postBuffer, ::System::Net::Sockets::TransmitFileOptions flags, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Net::Sockets::TransmitFileOptions, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDFILEHANDLER_BEGININVOKE_OFFSET))(this, fileName, preBuffer, postBuffer, flags, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDFILEHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
