#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Messaging/CADMessageBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMethodCallMessage; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_CREATE_OFFSET UNITYSDK_OFFSET(0x18787AA0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GETARGS_OFFSET UNITYSDK_OFFSET(0x18787EB0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GETARGUMENTS_OFFSET UNITYSDK_OFFSET(0x18787DE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GET_PROPERTIESCOUNT_OFFSET UNITYSDK_OFFSET(0x18787EC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GET_URI_OFFSET UNITYSDK_OFFSET(0x18787A90)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18787B10)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CADMethodCallMessage_TypeDefinitionIndex = 1294;

	class CADMethodCallMessage : public ::System::Runtime::Remoting::Messaging::CADMessageBase
	{
	public:
		::System::String* _uri; // 0x38

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Uri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GET_URI_OFFSET))(this);
		}

		static ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* Create(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::CADMethodCallMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_CREATE_OFFSET))(a1);
		}

		::System::Collections::ArrayList* GetArguments()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GETARGUMENTS_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetArgs(::System::Collections::ArrayList* a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GETARGS_OFFSET))(this, a1);
		}

		::System::Int32 get_PropertiesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GET_PROPERTIESCOUNT_OFFSET))(this);
		}
	};
}
