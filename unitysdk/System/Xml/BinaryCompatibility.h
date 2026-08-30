#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_BINARYCOMPATIBILITY_GET_TARGETSATLEAST_DESKTOP_V4_5_2_OFFSET UNITYSDK_OFFSET(0x1BABAEA0)
#define SYSTEM_XML_BINARYCOMPATIBILITY_RUNNINGONCHECK_OFFSET UNITYSDK_OFFSET(0x1BABAF00)
#define SYSTEM_XML_BINARYCOMPATIBILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BABB270)

namespace System::Xml
{
	inline static constexpr unsigned int BinaryCompatibility_TypeDefinitionIndex = 1795;

	class BinaryCompatibility : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__targetsAtLeast_Desktop_V4_5_2()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BinaryCompatibility_TypeDefinitionIndex)->GetStaticField(0x9180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_BINARYCOMPATIBILITY__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_TargetsAtLeast_Desktop_V4_5_2()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_BINARYCOMPATIBILITY_GET_TARGETSATLEAST_DESKTOP_V4_5_2_OFFSET))();
		}

		static ::System::Boolean RunningOnCheck(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINARYCOMPATIBILITY_RUNNINGONCHECK_OFFSET))(a1);
		}
	};
}
