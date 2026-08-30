#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Remoting/Messaging/ArgInfoType.h"

namespace System::Reflection { class MethodBase; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ARGINFO_GETINOUTARGS_OFFSET UNITYSDK_OFFSET(0x19433B70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ARGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19433720)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ArgInfo_TypeDefinitionIndex = 1297;

	class ArgInfo : public ::System::Object
	{
	public:
		::System::Reflection::MethodBase* _method; // 0x10
		::Il2CppArray<::System::Int32>* _paramMap; // 0x18
		::System::Int32 _inoutArgCount; // 0x20

		::System::Void _ctor(::System::Reflection::MethodBase* a1, ::System::Runtime::Remoting::Messaging::ArgInfoType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodBase*, ::System::Runtime::Remoting::Messaging::ArgInfoType))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ARGINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* GetInOutArgs(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ARGINFO_GETINOUTARGS_OFFSET))(this, a1);
		}
	};
}
