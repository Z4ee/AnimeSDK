#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_LINQ_RES_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x19F90910)
#define SYSTEM_XML_LINQ_RES_GETSTRING_OFFSET UNITYSDK_OFFSET(0x19F90280)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int Res_TypeDefinitionIndex = 4930;

	class Res : public ::System::Object
	{
	public:
		static ::System::String* GetString(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_RES_GETSTRING_OFFSET))(name);
		}

		static ::System::String* GetString_1(::System::String* name, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_RES_GETSTRING_1_OFFSET))(name, args);
		}
	};
}
