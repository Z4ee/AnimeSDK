#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLERARGUMENTEXPRESSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CEF6C0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CallerArgumentExpressionAttribute_TypeDefinitionIndex = 6460;

	class CallerArgumentExpressionAttribute : public ::System::Attribute
	{
	public:
		::System::String* _ParameterName_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* parameterName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLERARGUMENTEXPRESSIONATTRIBUTE__CTOR_OFFSET))(this, parameterName);
		}
	};
}
