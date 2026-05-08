#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class ExceptionHandlingClause; }
namespace System::Reflection { class LocalVariableInfo; }

#define SYSTEM_REFLECTION_METHODBODY_METHOD_1_6A64CBFD634AF3E4_OFFSET UNITYSDK_OFFSET(0x1A3A9370)
#define SYSTEM_REFLECTION_METHODBODY_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A3A9360)

namespace System::Reflection
{
	inline static constexpr unsigned int MethodBody_TypeDefinitionIndex = 581;

	class MethodBody : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Reflection::ExceptionHandlingClause*>* Field_1_0; // 0x10
		::Il2CppArray<::System::Reflection::LocalVariableInfo*>* Field_1_1; // 0x18
		::Il2CppArray<::System::Byte>* Field_1_2; // 0x20
		::System::Boolean Field_1_3; // 0x28
		::System::Int32 Field_1_4; // 0x2C
		::System::Int32 Field_1_5; // 0x30

		::System::Void Method_1_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBODY_METHOD_1_832295EC279E5994_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* Method_1_6A64CBFD634AF3E4()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBODY_METHOD_1_6A64CBFD634AF3E4_OFFSET))(this);
		}
	};
}
