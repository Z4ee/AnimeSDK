#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SCRIPTINGRUNTIMEHELPERS_GETPRIMITIVEDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1C1C2420)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SCRIPTINGRUNTIMEHELPERS_INT32TOOBJECT_OFFSET UNITYSDK_OFFSET(0x1C1B34E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ScriptingRuntimeHelpers_TypeDefinitionIndex = 3654;

	class ScriptingRuntimeHelpers : public ::System::Object
	{
	public:
		static ::System::Object* Int32ToObject(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SCRIPTINGRUNTIMEHELPERS_INT32TOOBJECT_OFFSET))(a1);
		}

		static ::System::Object* GetPrimitiveDefaultValue(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SCRIPTINGRUNTIMEHELPERS_GETPRIMITIVEDEFAULTVALUE_OFFSET))(a1);
		}
	};
}
