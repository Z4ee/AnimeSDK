#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Net/WebSockets/WebSocketCloseStatus.h"
#include "unitysdk/System/Net/WebSockets/WebSocketState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETVALIDATE_THROWIFINVALIDSTATE_OFFSET UNITYSDK_OFFSET(0x193C79A0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETVALIDATE_THROWPLATFORMNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x193C7FD0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETVALIDATE_VALIDATEARRAYSEGMENT_OFFSET UNITYSDK_OFFSET(0x193C8020)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETVALIDATE_VALIDATEBUFFER_OFFSET UNITYSDK_OFFSET(0x193C8140)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETVALIDATE_VALIDATECLOSESTATUS_OFFSET UNITYSDK_OFFSET(0x193C7D50)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETVALIDATE_VALIDATESUBPROTOCOL_OFFSET UNITYSDK_OFFSET(0x193C7AD0)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketValidate_TypeDefinitionIndex = 3886;

	class WebSocketValidate : public ::System::Object
	{
	public:
		// static const ::System::Int32 MaxControlFramePayloadLength = 0x7B; // 0x0
		// static const ::System::Int32 CloseStatusCodeAbort = 0x3EE; // 0x0
		// static const ::System::Int32 CloseStatusCodeFailedTLSHandshake = 0x3F7; // 0x0
		// static const ::System::Int32 InvalidCloseStatusCodesFrom = 0x0; // 0x0
		// static const ::System::Int32 InvalidCloseStatusCodesTo = 0x3E7; // 0x0
		// static const ::System::String* Separators; // 0x0

		static ::System::Void ThrowIfInvalidState(::System::Net::WebSockets::WebSocketState currentState, ::System::Boolean isDisposed, ::Il2CppArray<::System::Net::WebSockets::WebSocketState>* validStates)
		{
			return ((::System::Void(*)(::System::Net::WebSockets::WebSocketState, ::System::Boolean, ::Il2CppArray<::System::Net::WebSockets::WebSocketState>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETVALIDATE_THROWIFINVALIDSTATE_OFFSET))(currentState, isDisposed, validStates);
		}

		static ::System::Void ValidateSubprotocol(::System::String* subProtocol)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETVALIDATE_VALIDATESUBPROTOCOL_OFFSET))(subProtocol);
		}

		static ::System::Void ValidateCloseStatus(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::System::String* statusDescription)
		{
			return ((::System::Void(*)(::System::Net::WebSockets::WebSocketCloseStatus, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETVALIDATE_VALIDATECLOSESTATUS_OFFSET))(closeStatus, statusDescription);
		}

		static ::System::Void ThrowPlatformNotSupportedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETVALIDATE_THROWPLATFORMNOTSUPPORTEDEXCEPTION_OFFSET))();
		}

		static ::System::Void ValidateArraySegment(::System::ArraySegment_1<::System::Byte> arraySegment, ::System::String* parameterName)
		{
			return ((::System::Void(*)(::System::ArraySegment_1<::System::Byte>, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETVALIDATE_VALIDATEARRAYSEGMENT_OFFSET))(arraySegment, parameterName);
		}

		static ::System::Void ValidateBuffer(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETVALIDATE_VALIDATEBUFFER_OFFSET))(buffer, offset, count);
		}
	};
}
