#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_REF_EQUAL_OFFSET UNITYSDK_OFFSET(0x19F92400)

namespace System::Xml
{
	inline static constexpr unsigned int Ref_TypeDefinitionIndex = 1923;

	class Ref : public ::System::Object
	{
	public:
		static ::System::Boolean Equal(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_REF_EQUAL_OFFSET))(a1, a2);
		}
	};
}
