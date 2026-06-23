#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebSockets/WebSocketCloseStatus.h"
#include "unitysdk/System/Net/WebSockets/WebSocketMessageType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETRECEIVERESULT_GET_CLOSESTATUSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D461270)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETRECEIVERESULT_GET_CLOSESTATUS_OFFSET UNITYSDK_OFFSET(0x1D461260)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETRECEIVERESULT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D461230)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETRECEIVERESULT_GET_ENDOFMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D461240)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETRECEIVERESULT_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x1D461250)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETRECEIVERESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D4611A0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETRECEIVERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D461120)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketReceiveResult_TypeDefinitionIndex = 3904;

	class WebSocketReceiveResult : public ::System::Object
	{
	public:
		::System::String* _CloseStatusDescription_k__BackingField; // 0x10
		::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> _CloseStatus_k__BackingField; // 0x18
		::System::Net::WebSockets::WebSocketMessageType _MessageType_k__BackingField; // 0x20
		::System::Int32 _Count_k__BackingField; // 0x24
		::System::Boolean _EndOfMessage_k__BackingField; // 0x28

		::System::Void _ctor(::System::Int32 count, ::System::Net::WebSockets::WebSocketMessageType messageType, ::System::Boolean endOfMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::WebSockets::WebSocketMessageType, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETRECEIVERESULT__CTOR_OFFSET))(this, count, messageType, endOfMessage);
		}

		::System::Void _ctor_1(::System::Int32 count, ::System::Net::WebSockets::WebSocketMessageType messageType, ::System::Boolean endOfMessage, ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> closeStatus, ::System::String* closeStatusDescription)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::WebSockets::WebSocketMessageType, ::System::Boolean, ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETRECEIVERESULT__CTOR_1_OFFSET))(this, count, messageType, endOfMessage, closeStatus, closeStatusDescription);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETRECEIVERESULT_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_EndOfMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETRECEIVERESULT_GET_ENDOFMESSAGE_OFFSET))(this);
		}

		::System::Net::WebSockets::WebSocketMessageType get_MessageType()
		{
			return ((::System::Net::WebSockets::WebSocketMessageType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETRECEIVERESULT_GET_MESSAGETYPE_OFFSET))(this);
		}

		::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> get_CloseStatus()
		{
			return ((::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETRECEIVERESULT_GET_CLOSESTATUS_OFFSET))(this);
		}

		::System::String* get_CloseStatusDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETRECEIVERESULT_GET_CLOSESTATUSDESCRIPTION_OFFSET))(this);
		}
	};
}
