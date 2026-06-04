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

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_CREATE_OFFSET UNITYSDK_OFFSET(0x187880F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETARGS_OFFSET UNITYSDK_OFFSET(0x18788730)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETARGUMENTS_OFFSET UNITYSDK_OFFSET(0x18788660)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18788750)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x18788740)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GET_PROPERTIESCOUNT_OFFSET UNITYSDK_OFFSET(0x187887D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18788160)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CADMethodReturnMessage_TypeDefinitionIndex = 1295;

	class CADMethodReturnMessage : public ::System::Runtime::Remoting::Messaging::CADMessageBase
	{
	public:
		::System::Runtime::Remoting::Messaging::CADArgHolder* _exception; // 0x38
		::System::Object* _returnValue; // 0x40
		::Il2CppArray<::System::Type*>* _sig; // 0x48

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* Create(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_CREATE_OFFSET))(a1);
		}

		::System::Collections::ArrayList* GetArguments()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETARGUMENTS_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetArgs(::System::Collections::ArrayList* a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETARGS_OFFSET))(this, a1);
		}

		::System::Object* GetReturnValue(::System::Collections::ArrayList* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETRETURNVALUE_OFFSET))(this, a1);
		}

		::System::Exception* GetException(::System::Collections::ArrayList* a1)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETEXCEPTION_OFFSET))(this, a1);
		}

		::System::Int32 get_PropertiesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GET_PROPERTIESCOUNT_OFFSET))(this);
		}
	};
}
