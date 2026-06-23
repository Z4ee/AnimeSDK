#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_BINARYCOMPATIBILITY_RUNNINGONCHECK_OFFSET UNITYSDK_OFFSET(0x1DC3ED80)
#define SYSTEM_XML_BINARYCOMPATIBILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC3EFE0)

namespace System::Xml
{
	inline static constexpr unsigned int BinaryCompatibility_TypeDefinitionIndex = 1679;

	class BinaryCompatibility : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__targetsAtLeast_Desktop_V4_5_2()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BinaryCompatibility_TypeDefinitionIndex)->GetStaticField(0xDF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_BINARYCOMPATIBILITY__CCTOR_OFFSET))();
		}

		static ::System::Boolean RunningOnCheck(::System::String* propertyName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINARYCOMPATIBILITY_RUNNINGONCHECK_OFFSET))(propertyName);
		}
	};
}
