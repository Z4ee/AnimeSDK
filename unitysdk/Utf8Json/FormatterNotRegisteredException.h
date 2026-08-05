#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define UTF8JSON_FORMATTERNOTREGISTEREDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC361B0)

namespace Utf8Json
{
	inline static constexpr unsigned int FormatterNotRegisteredException_TypeDefinitionIndex = 95010;

	class FormatterNotRegisteredException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERNOTREGISTEREDEXCEPTION__CTOR_OFFSET))(this, message);
		}
	};
}
