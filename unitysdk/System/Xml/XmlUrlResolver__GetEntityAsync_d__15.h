#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Xml { class XmlUrlResolver; }

#define SYSTEM_XML_XMLURLRESOLVER__GETENTITYASYNC_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA394A0)
#define SYSTEM_XML_XMLURLRESOLVER__GETENTITYASYNC_D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5B0AE0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlUrlResolver__GetEntityAsync_d__15_TypeDefinitionIndex = 1841;

	struct alignas(8) XmlUrlResolver__GetEntityAsync_d__15
	{
		::System::Uri* absoluteUri; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder; // 0x18
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*> __u__1; // 0x30
		::System::Xml::XmlUrlResolver* __4__this; // 0x40
		::System::Type* ofObjectToReturn; // 0x48
		::System::Int32 __1__state; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLURLRESOLVER__GETENTITYASYNC_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLURLRESOLVER__GETENTITYASYNC_D__15_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
