#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Messaging/CADMessageBase.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class ArrayList; }
namespace System::Runtime::Remoting::Messaging { class CADArgHolder; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMethodReturnMessage; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_CREATE_OFFSET UNITYSDK_OFFSET(0x18C4FAA0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETARGS_OFFSET UNITYSDK_OFFSET(0x18C69ED0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETARGUMENTS_OFFSET UNITYSDK_OFFSET(0x18C69E00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18C69EF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x18C69EE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C698D0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CADMethodReturnMessage_TypeDefinitionIndex = 1338;

	class CADMethodReturnMessage : public ::System::Runtime::Remoting::Messaging::CADMessageBase
	{
	public:
		::System::Object* _returnValue; // 0x38
		::Il2CppArray<::System::Type*>* _sig; // 0x40
		::System::Runtime::Remoting::Messaging::CADArgHolder* _exception; // 0x48

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* retMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE__CTOR_OFFSET))(this, retMsg);
		}

		static ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* Create(::System::Runtime::Remoting::Messaging::IMessage* callMsg)
		{
			return ((::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_CREATE_OFFSET))(callMsg);
		}

		::System::Collections::ArrayList* GetArguments()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETARGUMENTS_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetArgs(::System::Collections::ArrayList* args)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETARGS_OFFSET))(this, args);
		}

		::System::Object* GetReturnValue(::System::Collections::ArrayList* args)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETRETURNVALUE_OFFSET))(this, args);
		}

		::System::Exception* GetException(::System::Collections::ArrayList* args)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETEXCEPTION_OFFSET))(this, args);
		}
	};
}
