#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_RES_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x1E7DEC00)
#define SYSTEM_XML_RES_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1E7D8960)

namespace System::Xml
{
	inline static constexpr unsigned int Res_TypeDefinitionIndex = 1972;

	class Res : public ::System::Object
	{
	public:
		static ::System::String* GetString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_RES_GETSTRING_OFFSET))(a1);
		}

		static ::System::String* GetString_1(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_RES_GETSTRING_1_OFFSET))(a1, a2);
		}
	};
}
