#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting { class ObjRef; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADOBJREF__CTOR_OFFSET UNITYSDK_OFFSET(0x178E87B0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CADObjRef_TypeDefinitionIndex = 1293;

	class CADObjRef : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* TypeInfo; // 0x10
		::System::Runtime::Remoting::ObjRef* objref; // 0x18
		::System::Int32 SourceDomain; // 0x20

		::System::Void _ctor(::System::Runtime::Remoting::ObjRef* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::ObjRef*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADOBJREF__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
