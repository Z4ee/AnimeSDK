#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class Object; }

#define SYSTEM_XML_SCHEMA_UPAEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1965AAB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int UpaException_TypeDefinitionIndex = 2057;

	class UpaException : public ::System::Exception
	{
	public:
		::System::Object* particle1; // 0x88
		::System::Object* particle2; // 0x90

		::System::Void _ctor(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_UPAEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
