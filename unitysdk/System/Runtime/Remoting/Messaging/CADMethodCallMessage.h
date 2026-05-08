#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Messaging/CADMessageBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMethodCallMessage; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A9822F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GETARGS_OFFSET UNITYSDK_OFFSET(0x1A9826E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GETARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1A982610)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A982360)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CADMethodCallMessage_TypeDefinitionIndex = 1337;

	class CADMethodCallMessage : public ::System::Runtime::Remoting::Messaging::CADMessageBase
	{
	public:
		::System::String* _uri; // 0x38

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage* callMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE__CTOR_OFFSET))(this, callMsg);
		}

		static ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* Create(::System::Runtime::Remoting::Messaging::IMessage* callMsg)
		{
			return ((::System::Runtime::Remoting::Messaging::CADMethodCallMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_CREATE_OFFSET))(callMsg);
		}

		::System::Collections::ArrayList* GetArguments()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GETARGUMENTS_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetArgs(::System::Collections::ArrayList* args)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GETARGS_OFFSET))(this, args);
		}
	};
}
