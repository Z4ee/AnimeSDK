#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::Net { class ICredentials; }
namespace System::Net { class IWebProxy; }
namespace System::Net { class WebRequest; }
namespace System::Net { class WebResponse; }
namespace System::Net::Cache { class RequestCachePolicy; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Xml { class XmlDownloadManager; }

#define SYSTEM_XML_XMLDOWNLOADMANAGER__GETNONFILESTREAMASYNC_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x386D5D0)
#define SYSTEM_XML_XMLDOWNLOADMANAGER__GETNONFILESTREAMASYNC_D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x386D5E0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlDownloadManager__GetNonFileStreamAsync_d__5_TypeDefinitionIndex = 1935;

	struct alignas(8) XmlDownloadManager__GetNonFileStreamAsync_d__5
	{
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*> __u__1; // 0x10
		::System::Net::Cache::RequestCachePolicy* cachePolicy; // 0x20
		::System::Net::ICredentials* credentials; // 0x28
		::System::Net::IWebProxy* proxy; // 0x30
		::System::Uri* uri; // 0x38
		::System::Xml::XmlDownloadManager* __4__this; // 0x40
		::System::Net::WebRequest* _req_5__1; // 0x48
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> __t__builder; // 0x50
		::System::Int32 __1__state; // 0x68

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER__GETNONFILESTREAMASYNC_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER__GETNONFILESTREAMASYNC_D__5_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
