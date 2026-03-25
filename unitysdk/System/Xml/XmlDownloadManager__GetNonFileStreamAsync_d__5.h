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

#define SYSTEM_XML_XMLDOWNLOADMANAGER__GETNONFILESTREAMASYNC_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20FF860)
#define SYSTEM_XML_XMLDOWNLOADMANAGER__GETNONFILESTREAMASYNC_D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x7EF60)

namespace System::Xml
{
	inline static constexpr unsigned int XmlDownloadManager__GetNonFileStreamAsync_d__5_TypeDefinitionIndex = 1934;

	struct alignas(8) XmlDownloadManager__GetNonFileStreamAsync_d__5
	{
		::System::Xml::XmlDownloadManager* __4__this; // 0x10
		::System::Net::WebRequest* _req_5__1; // 0x18
		::System::Uri* uri; // 0x20
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> __t__builder; // 0x28
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*> __u__1; // 0x40
		::System::Net::IWebProxy* proxy; // 0x50
		::System::Net::Cache::RequestCachePolicy* cachePolicy; // 0x58
		::System::Net::ICredentials* credentials; // 0x60
		::System::Int32 __1__state; // 0x68

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER__GETNONFILESTREAMASYNC_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER__GETNONFILESTREAMASYNC_D__5_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
