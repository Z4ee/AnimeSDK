#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_VERSIONING_BINARYCOMPATIBILITY_GET_TARGETSATLEAST_DESKTOP_V4_5_2_OFFSET UNITYSDK_OFFSET(0x1AC9C120)
#define SYSTEM_RUNTIME_VERSIONING_BINARYCOMPATIBILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC9C130)

namespace System::Runtime::Versioning
{
	inline static constexpr unsigned int BinaryCompatibility_TypeDefinitionIndex = 1133;

	class BinaryCompatibility : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_TargetsAtLeast_Desktop_V4_5_1()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BinaryCompatibility_TypeDefinitionIndex)->GetStaticField(0x380);
		}
		static ::System::Boolean* StaticGet_TargetsAtLeast_Desktop_V4_5()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BinaryCompatibility_TypeDefinitionIndex)->GetStaticField(0x381);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_BINARYCOMPATIBILITY__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_TargetsAtLeast_Desktop_V4_5_2()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_BINARYCOMPATIBILITY_GET_TARGETSATLEAST_DESKTOP_V4_5_2_OFFSET))();
		}
	};
}
