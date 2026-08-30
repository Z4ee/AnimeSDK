#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZLINQ_ARGUMENTNULLEXCEPTION_THROWIFNULL_OFFSET UNITYSDK_OFFSET(0x1EFC8EC0)
#define ZLINQ_ARGUMENTNULLEXCEPTION_THROW_OFFSET UNITYSDK_OFFSET(0x1EFC8F20)

namespace ZLinq
{
	inline static constexpr unsigned int ArgumentNullException_TypeDefinitionIndex = 6080;

	class ArgumentNullException : public ::System::Object
	{
	public:
		static ::System::Void ThrowIfNull(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + ZLINQ_ARGUMENTNULLEXCEPTION_THROWIFNULL_OFFSET))(a1, a2);
		}

		static ::System::Void Throw(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZLINQ_ARGUMENTNULLEXCEPTION_THROW_OFFSET))(a1);
		}
	};
}
