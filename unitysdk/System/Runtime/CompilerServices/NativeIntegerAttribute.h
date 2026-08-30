#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NATIVEINTEGERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFCB650)
#define SYSTEM_RUNTIME_COMPILERSERVICES_NATIVEINTEGERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFCB610)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NativeIntegerAttribute_TypeDefinitionIndex = 34505;

	class NativeIntegerAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Boolean>* TransformFlags; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NATIVEINTEGERATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NATIVEINTEGERATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}
	};
}
