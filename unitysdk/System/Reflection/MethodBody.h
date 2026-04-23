#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class ExceptionHandlingClause; }
namespace System::Reflection { class LocalVariableInfo; }

#define SYSTEM_REFLECTION_METHODBODY_GETILASBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x179A3E60)
#define SYSTEM_REFLECTION_METHODBODY__CTOR_OFFSET UNITYSDK_OFFSET(0x179A3E50)

namespace System::Reflection
{
	inline static constexpr unsigned int MethodBody_TypeDefinitionIndex = 607;

	class MethodBody : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Reflection::ExceptionHandlingClause*>* clauses; // 0x10
		::Il2CppArray<::System::Reflection::LocalVariableInfo*>* locals; // 0x18
		::Il2CppArray<::System::Byte>* il; // 0x20
		::System::Boolean init_locals; // 0x28
		::System::Int32 sig_token; // 0x2C
		::System::Int32 max_stack; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBODY__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetILAsByteArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBODY_GETILASBYTEARRAY_OFFSET))(this);
		}
	};
}
