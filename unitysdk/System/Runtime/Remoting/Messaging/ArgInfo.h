#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Remoting/Messaging/ArgInfoType.h"

namespace System::Reflection { class MethodBase; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ARGINFO_GETINOUTARGS_OFFSET UNITYSDK_OFFSET(0x1CB22850)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ARGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB22630)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ArgInfo_TypeDefinitionIndex = 1330;

	class ArgInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _paramMap; // 0x10
		::System::Reflection::MethodBase* _method; // 0x18
		::System::Int32 _inoutArgCount; // 0x20

		::System::Void _ctor(::System::Reflection::MethodBase* method, ::System::Runtime::Remoting::Messaging::ArgInfoType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodBase*, ::System::Runtime::Remoting::Messaging::ArgInfoType))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ARGINFO__CTOR_OFFSET))(this, method, type);
		}

		::Il2CppArray<::System::Object*>* GetInOutArgs(::Il2CppArray<::System::Object*>* args)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ARGINFO_GETINOUTARGS_OFFSET))(this, args);
		}
	};
}
