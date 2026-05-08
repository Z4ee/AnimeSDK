#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Net/WebSockets/ManagedWebSocket_MessageHeader.h"
#include "unitysdk/System/Net/WebSockets/ManagedWebSocket_MessageOpcode.h"
#include "unitysdk/System/Net/WebSockets/WebSocket.h"
#include "unitysdk/System/Net/WebSockets/WebSocketCloseStatus.h"
#include "unitysdk/System/Net/WebSockets/WebSocketError.h"
#include "unitysdk/System/Net/WebSockets/WebSocketMessageType.h"
#include "unitysdk/System/Net/WebSockets/WebSocketState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net::WebSockets { class ManagedWebSocket_Utf8MessageState; }
namespace System::Net::WebSockets { class WebSocketReceiveResult; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }
namespace System::Text { class UTF8Encoding; }
namespace System::Threading { class CancellationTokenSource; }
namespace System::Threading { class SemaphoreSlim; }
namespace System::Threading { class Timer; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_ABORT_OFFSET UNITYSDK_OFFSET(0x19E3DD10)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_ALLOCATESENDBUFFER_OFFSET UNITYSDK_OFFSET(0x19E3E8D0)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_APPLYMASK_1_OFFSET UNITYSDK_OFFSET(0x19E3F8F0)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_APPLYMASK_OFFSET UNITYSDK_OFFSET(0x19E3EBC0)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_CLOSEASYNCPRIVATE_OFFSET UNITYSDK_OFFSET(0x19E3D680)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_CLOSEASYNC_OFFSET UNITYSDK_OFFSET(0x19E3D3D0)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_CLOSEOUTPUTASYNC_OFFSET UNITYSDK_OFFSET(0x19E3D880)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_CLOSEWITHRECEIVEERRORANDTHROWASYNC_OFFSET UNITYSDK_OFFSET(0x19E3F330)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_COMBINEMASKBYTES_OFFSET UNITYSDK_OFFSET(0x19E3F760)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_CONSUMEFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x19E3F750)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_CREATEFROMCONNECTEDSTREAM_OFFSET UNITYSDK_OFFSET(0x19E3C280)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_CREATEOPERATIONCANCELEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x19E3E690)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_DISPOSECORE_OFFSET UNITYSDK_OFFSET(0x19E3C820)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19E3C770)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_ENSUREBUFFERCONTAINSASYNC_OFFSET UNITYSDK_OFFSET(0x19E3F770)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_GET_CLOSESTATUSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19E3C970)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_GET_CLOSESTATUS_OFFSET UNITYSDK_OFFSET(0x19E3C960)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_GET_RECEIVEASYNCLOCK_OFFSET UNITYSDK_OFFSET(0x19E3C760)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_GET_STATEUPDATELOCK_OFFSET UNITYSDK_OFFSET(0x19E3C750)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_GET_STATE_OFFSET UNITYSDK_OFFSET(0x19E3C980)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_GET_SUBPROTOCOL_OFFSET UNITYSDK_OFFSET(0x19E3C990)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_HANDLERECEIVEDCLOSEASYNC_OFFSET UNITYSDK_OFFSET(0x19E3F040)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_HANDLERECEIVEDPINGPONGASYNC_OFFSET UNITYSDK_OFFSET(0x19E3F120)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_ISVALIDCLOSESTATUS_OFFSET UNITYSDK_OFFSET(0x19E3F2F0)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_RECEIVEASYNCPRIVATE_OFFSET UNITYSDK_OFFSET(0x19E3D2D0)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_RECEIVEASYNC_OFFSET UNITYSDK_OFFSET(0x19E3CF80)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_RELEASESENDBUFFER_OFFSET UNITYSDK_OFFSET(0x19E3E850)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x19E3C9A0)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_SENDCLOSEFRAMEASYNC_OFFSET UNITYSDK_OFFSET(0x19E3DB20)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_SENDFRAMEASYNC_OFFSET UNITYSDK_OFFSET(0x19E3CD00)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_SENDFRAMEFALLBACKASYNC_OFFSET UNITYSDK_OFFSET(0x19E3E260)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_SENDFRAMELOCKACQUIREDNONCANCELABLEASYNC_OFFSET UNITYSDK_OFFSET(0x19E3DDE0)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_SENDKEEPALIVEFRAMEASYNC_OFFSET UNITYSDK_OFFSET(0x19E3ED60)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_THROWIFOPERATIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0x19E3CC30)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_TRYPARSEMESSAGEHEADERFROMRECEIVEBUFFER_OFFSET UNITYSDK_OFFSET(0x19E3F4C0)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_TRYVALIDATEUTF8_OFFSET UNITYSDK_OFFSET(0x19E3FA30)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_WRITEFRAMETOSENDBUFFER_OFFSET UNITYSDK_OFFSET(0x19E3E480)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_WRITEHEADER_OFFSET UNITYSDK_OFFSET(0x19E3E940)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_WRITERANDOMMASK_OFFSET UNITYSDK_OFFSET(0x19E3EFA0)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E3FC90)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__CTOR_OFFSET UNITYSDK_OFFSET(0x19E3C320)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ManagedWebSocket_TypeDefinitionIndex = 3873;

	class ManagedWebSocket : public ::System::Net::WebSockets::WebSocket
	{
	public:
		static ::Il2CppArray<::System::Net::WebSockets::WebSocketState>** StaticGet_s_validReceiveStates()
		{
			return (::Il2CppArray<::System::Net::WebSockets::WebSocketState>**)Il2CppClass::FromTypeDefinitionIndex(ManagedWebSocket_TypeDefinitionIndex)->GetStaticField(0x2A40);
		}
		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet_s_random()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)Il2CppClass::FromTypeDefinitionIndex(ManagedWebSocket_TypeDefinitionIndex)->GetStaticField(0x2A48);
		}
		static ::Il2CppArray<::System::Net::WebSockets::WebSocketState>** StaticGet_s_validCloseStates()
		{
			return (::Il2CppArray<::System::Net::WebSockets::WebSocketState>**)Il2CppClass::FromTypeDefinitionIndex(ManagedWebSocket_TypeDefinitionIndex)->GetStaticField(0x2A50);
		}
		static ::Il2CppArray<::System::Net::WebSockets::WebSocketState>** StaticGet_s_validSendStates()
		{
			return (::Il2CppArray<::System::Net::WebSockets::WebSocketState>**)Il2CppClass::FromTypeDefinitionIndex(ManagedWebSocket_TypeDefinitionIndex)->GetStaticField(0x2A58);
		}
		static ::System::Text::UTF8Encoding** StaticGet_s_textEncoding()
		{
			return (::System::Text::UTF8Encoding**)Il2CppClass::FromTypeDefinitionIndex(ManagedWebSocket_TypeDefinitionIndex)->GetStaticField(0x2A60);
		}
		static ::Il2CppArray<::System::Net::WebSockets::WebSocketState>** StaticGet_s_validCloseOutputStates()
		{
			return (::Il2CppArray<::System::Net::WebSockets::WebSocketState>**)Il2CppClass::FromTypeDefinitionIndex(ManagedWebSocket_TypeDefinitionIndex)->GetStaticField(0x2A68);
		}
		// static const ::System::Int32 MaxMessageHeaderLength = 0xE; // 0x0
		// static const ::System::Int32 MaxControlPayloadLength = 0x7D; // 0x0
		// static const ::System::Int32 MaskLength = 0x4; // 0x0
		::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* _lastReceiveAsync; // 0x10
		::System::Threading::Timer* _keepAliveTimer; // 0x18
		::System::String* _closeStatusDescription; // 0x20
		::System::Threading::CancellationTokenSource* _abortSource; // 0x28
		::System::Threading::Tasks::Task* _lastSendAsync; // 0x30
		::System::IO::Stream* _stream; // 0x38
		::System::String* _subprotocol; // 0x40
		::System::Threading::SemaphoreSlim* _sendFrameAsyncLock; // 0x48
		::Il2CppArray<::System::Byte>* _sendBuffer; // 0x50
		::Il2CppArray<::System::Byte>* _receiveBuffer; // 0x58
		::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState* _utf8TextState; // 0x60
		::System::Boolean _disposed; // 0x68
		::System::Boolean _receivedCloseFrame; // 0x69
		::System::Boolean _isServer; // 0x6A
		::System::Boolean _receiveBufferFromPool; // 0x6B
		::System::Net::WebSockets::ManagedWebSocket_MessageHeader _lastReceiveHeader; // 0x70
		::System::Net::WebSockets::WebSocketState _state; // 0x80
		::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> _closeStatus; // 0x84
		::System::Boolean _lastSendWasFragment; // 0x8C
		::System::Boolean _sentCloseFrame; // 0x8D
		::System::Int32 _receiveBufferOffset; // 0x90
		::System::Int32 _receivedMaskOffsetOffset; // 0x94
		::System::Int32 _receiveBufferCount; // 0x98

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Boolean isServer, ::System::String* subprotocol, ::System::TimeSpan keepAliveInterval, ::System::Int32 receiveBufferSize, ::System::Nullable_1<::System::ArraySegment_1<::System::Byte>> receiveBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::System::String*, ::System::TimeSpan, ::System::Int32, ::System::Nullable_1<::System::ArraySegment_1<::System::Byte>>))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__CTOR_OFFSET))(this, stream, isServer, subprotocol, keepAliveInterval, receiveBufferSize, receiveBuffer);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET__CCTOR_OFFSET))();
		}

		static ::System::Net::WebSockets::ManagedWebSocket* CreateFromConnectedStream(::System::IO::Stream* stream, ::System::Boolean isServer, ::System::String* subprotocol, ::System::TimeSpan keepAliveInterval, ::System::Int32 receiveBufferSize, ::System::Nullable_1<::System::ArraySegment_1<::System::Byte>> receiveBuffer)
		{
			return ((::System::Net::WebSockets::ManagedWebSocket*(*)(::System::IO::Stream*, ::System::Boolean, ::System::String*, ::System::TimeSpan, ::System::Int32, ::System::Nullable_1<::System::ArraySegment_1<::System::Byte>>))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_CREATEFROMCONNECTEDSTREAM_OFFSET))(stream, isServer, subprotocol, keepAliveInterval, receiveBufferSize, receiveBuffer);
		}

		::System::Object* get_StateUpdateLock()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_GET_STATEUPDATELOCK_OFFSET))(this);
		}

		::System::Object* get_ReceiveAsyncLock()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_GET_RECEIVEASYNCLOCK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_DISPOSE_OFFSET))(this);
		}

		::System::Void DisposeCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_DISPOSECORE_OFFSET))(this);
		}

		::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> get_CloseStatus()
		{
			return ((::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_GET_CLOSESTATUS_OFFSET))(this);
		}

		::System::String* get_CloseStatusDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_GET_CLOSESTATUSDESCRIPTION_OFFSET))(this);
		}

		::System::Net::WebSockets::WebSocketState get_State()
		{
			return ((::System::Net::WebSockets::WebSocketState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_GET_STATE_OFFSET))(this);
		}

		::System::String* get_SubProtocol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_GET_SUBPROTOCOL_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* SendAsync(::System::ArraySegment_1<::System::Byte> buffer, ::System::Net::WebSockets::WebSocketMessageType messageType, ::System::Boolean endOfMessage, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::System::Net::WebSockets::WebSocketMessageType, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_SENDASYNC_OFFSET))(this, buffer, messageType, endOfMessage, cancellationToken);
		}

		::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* ReceiveAsync(::System::ArraySegment_1<::System::Byte> buffer, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_RECEIVEASYNC_OFFSET))(this, buffer, cancellationToken);
		}

		::System::Threading::Tasks::Task* CloseAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::System::String* statusDescription, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::WebSockets::WebSocketCloseStatus, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_CLOSEASYNC_OFFSET))(this, closeStatus, statusDescription, cancellationToken);
		}

		::System::Threading::Tasks::Task* CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::System::String* statusDescription, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::WebSockets::WebSocketCloseStatus, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_CLOSEOUTPUTASYNC_OFFSET))(this, closeStatus, statusDescription, cancellationToken);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_ABORT_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* SendFrameAsync(::System::Net::WebSockets::ManagedWebSocket_MessageOpcode opcode, ::System::Boolean endOfMessage, ::System::ArraySegment_1<::System::Byte> payloadBuffer, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::WebSockets::ManagedWebSocket_MessageOpcode, ::System::Boolean, ::System::ArraySegment_1<::System::Byte>, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_SENDFRAMEASYNC_OFFSET))(this, opcode, endOfMessage, payloadBuffer, cancellationToken);
		}

		::System::Threading::Tasks::Task* SendFrameLockAcquiredNonCancelableAsync(::System::Net::WebSockets::ManagedWebSocket_MessageOpcode opcode, ::System::Boolean endOfMessage, ::System::ArraySegment_1<::System::Byte> payloadBuffer)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::WebSockets::ManagedWebSocket_MessageOpcode, ::System::Boolean, ::System::ArraySegment_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_SENDFRAMELOCKACQUIREDNONCANCELABLEASYNC_OFFSET))(this, opcode, endOfMessage, payloadBuffer);
		}

		::System::Threading::Tasks::Task* SendFrameFallbackAsync(::System::Net::WebSockets::ManagedWebSocket_MessageOpcode opcode, ::System::Boolean endOfMessage, ::System::ArraySegment_1<::System::Byte> payloadBuffer, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::WebSockets::ManagedWebSocket_MessageOpcode, ::System::Boolean, ::System::ArraySegment_1<::System::Byte>, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_SENDFRAMEFALLBACKASYNC_OFFSET))(this, opcode, endOfMessage, payloadBuffer, cancellationToken);
		}

		::System::Int32 WriteFrameToSendBuffer(::System::Net::WebSockets::ManagedWebSocket_MessageOpcode opcode, ::System::Boolean endOfMessage, ::System::ArraySegment_1<::System::Byte> payloadBuffer)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::WebSockets::ManagedWebSocket_MessageOpcode, ::System::Boolean, ::System::ArraySegment_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_WRITEFRAMETOSENDBUFFER_OFFSET))(this, opcode, endOfMessage, payloadBuffer);
		}

		::System::Void SendKeepAliveFrameAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_SENDKEEPALIVEFRAMEASYNC_OFFSET))(this);
		}

		static ::System::Int32 WriteHeader(::System::Net::WebSockets::ManagedWebSocket_MessageOpcode opcode, ::Il2CppArray<::System::Byte>* sendBuffer, ::System::ArraySegment_1<::System::Byte> payload, ::System::Boolean endOfMessage, ::System::Boolean useMask)
		{
			return ((::System::Int32(*)(::System::Net::WebSockets::ManagedWebSocket_MessageOpcode, ::Il2CppArray<::System::Byte>*, ::System::ArraySegment_1<::System::Byte>, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_WRITEHEADER_OFFSET))(opcode, sendBuffer, payload, endOfMessage, useMask);
		}

		static ::System::Void WriteRandomMask(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_WRITERANDOMMASK_OFFSET))(buffer, offset);
		}

		::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* ReceiveAsyncPrivate(::System::ArraySegment_1<::System::Byte> payloadBuffer, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_RECEIVEASYNCPRIVATE_OFFSET))(this, payloadBuffer, cancellationToken);
		}

		::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* HandleReceivedCloseAsync(::System::Net::WebSockets::ManagedWebSocket_MessageHeader header, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*(*)(::PVOID, ::System::Net::WebSockets::ManagedWebSocket_MessageHeader, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_HANDLERECEIVEDCLOSEASYNC_OFFSET))(this, header, cancellationToken);
		}

		::System::Threading::Tasks::Task* HandleReceivedPingPongAsync(::System::Net::WebSockets::ManagedWebSocket_MessageHeader header, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::WebSockets::ManagedWebSocket_MessageHeader, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_HANDLERECEIVEDPINGPONGASYNC_OFFSET))(this, header, cancellationToken);
		}

		static ::System::Boolean IsValidCloseStatus(::System::Net::WebSockets::WebSocketCloseStatus closeStatus)
		{
			return ((::System::Boolean(*)(::System::Net::WebSockets::WebSocketCloseStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_ISVALIDCLOSESTATUS_OFFSET))(closeStatus);
		}

		::System::Threading::Tasks::Task* CloseWithReceiveErrorAndThrowAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::System::Net::WebSockets::WebSocketError error, ::System::Threading::CancellationToken cancellationToken, ::System::Exception* innerException)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::WebSockets::WebSocketCloseStatus, ::System::Net::WebSockets::WebSocketError, ::System::Threading::CancellationToken, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_CLOSEWITHRECEIVEERRORANDTHROWASYNC_OFFSET))(this, closeStatus, error, cancellationToken, innerException);
		}

		::System::Boolean TryParseMessageHeaderFromReceiveBuffer(::System::Net::WebSockets::ManagedWebSocket_MessageHeader& resultHeader)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::WebSockets::ManagedWebSocket_MessageHeader&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_TRYPARSEMESSAGEHEADERFROMRECEIVEBUFFER_OFFSET))(this, resultHeader);
		}

		::System::Threading::Tasks::Task* CloseAsyncPrivate(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::System::String* statusDescription, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::WebSockets::WebSocketCloseStatus, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_CLOSEASYNCPRIVATE_OFFSET))(this, closeStatus, statusDescription, cancellationToken);
		}

		::System::Threading::Tasks::Task* SendCloseFrameAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::System::String* closeStatusDescription, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::WebSockets::WebSocketCloseStatus, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_SENDCLOSEFRAMEASYNC_OFFSET))(this, closeStatus, closeStatusDescription, cancellationToken);
		}

		::System::Void ConsumeFromBuffer(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_CONSUMEFROMBUFFER_OFFSET))(this, count);
		}

		::System::Threading::Tasks::Task* EnsureBufferContainsAsync(::System::Int32 minimumRequiredBytes, ::System::Threading::CancellationToken cancellationToken, ::System::Boolean throwOnPrematureClosure)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_ENSUREBUFFERCONTAINSASYNC_OFFSET))(this, minimumRequiredBytes, cancellationToken, throwOnPrematureClosure);
		}

		::System::Void AllocateSendBuffer(::System::Int32 minLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_ALLOCATESENDBUFFER_OFFSET))(this, minLength);
		}

		::System::Void ReleaseSendBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_RELEASESENDBUFFER_OFFSET))(this);
		}

		static ::System::Int32 CombineMaskBytes(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 maskOffset)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_COMBINEMASKBYTES_OFFSET))(buffer, maskOffset);
		}

		static ::System::Int32 ApplyMask(::Il2CppArray<::System::Byte>* toMask, ::System::Int32 toMaskOffset, ::Il2CppArray<::System::Byte>* mask, ::System::Int32 maskOffset, ::System::Int32 maskOffsetIndex, ::System::Int64 count)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_APPLYMASK_OFFSET))(toMask, toMaskOffset, mask, maskOffset, maskOffsetIndex, count);
		}

		static ::System::Int32 ApplyMask_1(::Il2CppArray<::System::Byte>* toMask, ::System::Int32 toMaskOffset, ::System::Int32 mask, ::System::Int32 maskIndex, ::System::Int64 count)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_APPLYMASK_1_OFFSET))(toMask, toMaskOffset, mask, maskIndex, count);
		}

		::System::Void ThrowIfOperationInProgress(::System::Threading::Tasks::Task* operationTask, ::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_THROWIFOPERATIONINPROGRESS_OFFSET))(this, operationTask, methodName);
		}

		static ::System::Exception* CreateOperationCanceledException(::System::Exception* innerException, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Exception*(*)(::System::Exception*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_CREATEOPERATIONCANCELEDEXCEPTION_OFFSET))(innerException, cancellationToken);
		}

		static ::System::Boolean TryValidateUtf8(::System::ArraySegment_1<::System::Byte> arraySegment, ::System::Boolean endOfMessage, ::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState* state)
		{
			return ((::System::Boolean(*)(::System::ArraySegment_1<::System::Byte>, ::System::Boolean, ::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET_TRYVALIDATEUTF8_OFFSET))(arraySegment, endOfMessage, state);
		}
	};
}
