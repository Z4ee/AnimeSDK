#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZLINQ_ARGUMENTNULLEXCEPTION_THROWIFNULL_OFFSET UNITYSDK_OFFSET(0x18CEF840)
#define ZLINQ_ARGUMENTNULLEXCEPTION_THROW_OFFSET UNITYSDK_OFFSET(0x18CEF8A0)

namespace ZLinq
{
	inline static constexpr unsigned int ArgumentNullException_TypeDefinitionIndex = 6468;

	class ArgumentNullException : public ::System::Object
	{
	public:
		static ::System::Void ThrowIfNull(::System::Object* argument, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + ZLINQ_ARGUMENTNULLEXCEPTION_THROWIFNULL_OFFSET))(argument, paramName);
		}

		static ::System::Void Throw(::System::String* paramName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZLINQ_ARGUMENTNULLEXCEPTION_THROW_OFFSET))(paramName);
		}
	};
}
