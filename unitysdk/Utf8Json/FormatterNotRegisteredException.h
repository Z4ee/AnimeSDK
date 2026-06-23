#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define UTF8JSON_FORMATTERNOTREGISTEREDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E855620)

namespace Utf8Json
{
	inline static constexpr unsigned int FormatterNotRegisteredException_TypeDefinitionIndex = 91077;

	class FormatterNotRegisteredException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERNOTREGISTEREDEXCEPTION__CTOR_OFFSET))(this, message);
		}
	};
}
