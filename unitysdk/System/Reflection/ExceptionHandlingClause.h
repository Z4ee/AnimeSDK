#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/ExceptionHandlingClauseOptions.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_REFLECTION_EXCEPTIONHANDLINGCLAUSE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AFCF0B0)
#define SYSTEM_REFLECTION_EXCEPTIONHANDLINGCLAUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFCF0A0)

namespace System::Reflection
{
	inline static constexpr unsigned int ExceptionHandlingClause_TypeDefinitionIndex = 603;

	class ExceptionHandlingClause : public ::System::Object
	{
	public:
		::System::Type* catch_type; // 0x10
		::System::Int32 filter_offset; // 0x18
		::System::Reflection::ExceptionHandlingClauseOptions flags; // 0x1C
		::System::Int32 try_offset; // 0x20
		::System::Int32 try_length; // 0x24
		::System::Int32 handler_offset; // 0x28
		::System::Int32 handler_length; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EXCEPTIONHANDLINGCLAUSE__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EXCEPTIONHANDLINGCLAUSE_TOSTRING_OFFSET))(this);
		}
	};
}
