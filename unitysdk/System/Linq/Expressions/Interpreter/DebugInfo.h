#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class DebugInfo_DebugInfoComparer; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_GETMATCHINGDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x184BF4F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x184BF5E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x184BF910)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x184BF5D0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DebugInfo_TypeDefinitionIndex = 3466;

	class DebugInfo : public ::System::Object
	{
	public:
		static ::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer** StaticGet_s_debugComparer()
		{
			return (::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer**)Il2CppClass::FromTypeDefinitionIndex(DebugInfo_TypeDefinitionIndex)->GetStaticField(0xF4A0);
		}
		::System::String* FileName; // 0x10
		::System::Int32 Index; // 0x18
		::System::Int32 EndLine; // 0x1C
		::System::Boolean IsClear; // 0x20
		::System::Int32 StartLine; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO__CCTOR_OFFSET))();
		}

		static ::System::Linq::Expressions::Interpreter::DebugInfo* GetMatchingDebugInfo(::Il2CppArray<::System::Linq::Expressions::Interpreter::DebugInfo*>* debugInfos, ::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Interpreter::DebugInfo*(*)(::Il2CppArray<::System::Linq::Expressions::Interpreter::DebugInfo*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_GETMATCHINGDEBUGINFO_OFFSET))(debugInfos, index);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_TOSTRING_OFFSET))(this);
		}
	};
}
