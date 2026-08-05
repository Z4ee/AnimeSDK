#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class AsyncOperation; }
namespace System::IO { class Stream; }
namespace System::Net { class CompletionDelegate; }
namespace System::Net { class ScatterGatherBuffers; }
namespace System::Net { class WebClient; }
namespace System::Net { class WebClient_ProgressData; }
namespace System::Net { class WebRequest; }
namespace System::Net { class WebResponse; }

#define SYSTEM_NET_WEBCLIENT_DOWNLOADBITSSTATE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C7164E0)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADBITSSTATE_GET_ASYNC_OFFSET UNITYSDK_OFFSET(0x1C715F40)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADBITSSTATE_RETRIEVEBYTES_OFFSET UNITYSDK_OFFSET(0x1C716200)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADBITSSTATE_SETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1C715F50)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADBITSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C715F10)

namespace System::Net
{
	inline static constexpr unsigned int WebClient_DownloadBitsState_TypeDefinitionIndex = 3443;

	class WebClient_DownloadBitsState : public ::System::Object
	{
	public:
		// static const ::System::Int32 Offset = 0x0; // 0x0
		::Il2CppArray<::System::Byte>* InnerBuffer; // 0x10
		::System::IO::Stream* WriteStream; // 0x18
		::System::Net::WebRequest* Request; // 0x20
		::System::Net::ScatterGatherBuffers* SgBuffers; // 0x28
		::System::Net::CompletionDelegate* CompletionDelegate; // 0x30
		::System::Net::WebClient* WebClient; // 0x38
		::System::ComponentModel::AsyncOperation* AsyncOp; // 0x40
		::System::IO::Stream* ReadStream; // 0x48
		::System::Net::WebClient_ProgressData* Progress; // 0x50
		::System::Int64 Length; // 0x58
		::System::Int64 ContentLength; // 0x60

		::System::Void _ctor(::System::Net::WebRequest* request, ::System::IO::Stream* writeStream, ::System::Net::CompletionDelegate* completionDelegate, ::System::ComponentModel::AsyncOperation* asyncOp, ::System::Net::WebClient_ProgressData* progress, ::System::Net::WebClient* webClient)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebRequest*, ::System::IO::Stream*, ::System::Net::CompletionDelegate*, ::System::ComponentModel::AsyncOperation*, ::System::Net::WebClient_ProgressData*, ::System::Net::WebClient*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADBITSSTATE__CTOR_OFFSET))(this, request, writeStream, completionDelegate, asyncOp, progress, webClient);
		}

		::System::Boolean get_Async()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADBITSSTATE_GET_ASYNC_OFFSET))(this);
		}

		::System::Int32 SetResponse(::System::Net::WebResponse* response)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::WebResponse*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADBITSSTATE_SETRESPONSE_OFFSET))(this, response);
		}

		::System::Boolean RetrieveBytes(::System::Int32& bytesRetrieved)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADBITSSTATE_RETRIEVEBYTES_OFFSET))(this, bytesRetrieved);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADBITSSTATE_CLOSE_OFFSET))(this);
		}
	};
}
