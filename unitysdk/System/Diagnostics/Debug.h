#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class TraceListenerCollection; }

#define SYSTEM_DIAGNOSTICS_DEBUG_ASSERT_1_OFFSET UNITYSDK_OFFSET(0x19A4F8C0)
#define SYSTEM_DIAGNOSTICS_DEBUG_ASSERT_2_OFFSET UNITYSDK_OFFSET(0x19A4F8D0)
#define SYSTEM_DIAGNOSTICS_DEBUG_ASSERT_3_OFFSET UNITYSDK_OFFSET(0x19A4F8E0)
#define SYSTEM_DIAGNOSTICS_DEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0x19A4F8A0)
#define SYSTEM_DIAGNOSTICS_DEBUG_CLOSE_OFFSET UNITYSDK_OFFSET(0x19A4F890)
#define SYSTEM_DIAGNOSTICS_DEBUG_FAIL_1_OFFSET UNITYSDK_OFFSET(0x19A4F930)
#define SYSTEM_DIAGNOSTICS_DEBUG_FAIL_OFFSET UNITYSDK_OFFSET(0x19A4F920)
#define SYSTEM_DIAGNOSTICS_DEBUG_FLUSH_OFFSET UNITYSDK_OFFSET(0x19A4F880)
#define SYSTEM_DIAGNOSTICS_DEBUG_GET_AUTOFLUSH_OFFSET UNITYSDK_OFFSET(0x19A4F7E0)
#define SYSTEM_DIAGNOSTICS_DEBUG_GET_INDENTLEVEL_OFFSET UNITYSDK_OFFSET(0x19A4F800)
#define SYSTEM_DIAGNOSTICS_DEBUG_GET_INDENTSIZE_OFFSET UNITYSDK_OFFSET(0x19A4F860)
#define SYSTEM_DIAGNOSTICS_DEBUG_GET_LISTENERS_OFFSET UNITYSDK_OFFSET(0x19A4F7D0)
#define SYSTEM_DIAGNOSTICS_DEBUG_INDENT_OFFSET UNITYSDK_OFFSET(0x19A4FAB0)
#define SYSTEM_DIAGNOSTICS_DEBUG_PRINT_1_OFFSET UNITYSDK_OFFSET(0x19A4F950)
#define SYSTEM_DIAGNOSTICS_DEBUG_PRINT_OFFSET UNITYSDK_OFFSET(0x19A4F940)
#define SYSTEM_DIAGNOSTICS_DEBUG_SET_AUTOFLUSH_OFFSET UNITYSDK_OFFSET(0x19A4F7F0)
#define SYSTEM_DIAGNOSTICS_DEBUG_SET_INDENTLEVEL_OFFSET UNITYSDK_OFFSET(0x19A4F850)
#define SYSTEM_DIAGNOSTICS_DEBUG_SET_INDENTSIZE_OFFSET UNITYSDK_OFFSET(0x19A4F870)
#define SYSTEM_DIAGNOSTICS_DEBUG_UNINDENT_OFFSET UNITYSDK_OFFSET(0x19A4FAC0)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITEIF_1_OFFSET UNITYSDK_OFFSET(0x19A4FA40)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITEIF_2_OFFSET UNITYSDK_OFFSET(0x19A4FA50)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITEIF_3_OFFSET UNITYSDK_OFFSET(0x19A4FA60)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITEIF_OFFSET UNITYSDK_OFFSET(0x19A4FA30)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITELINEIF_1_OFFSET UNITYSDK_OFFSET(0x19A4FA80)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITELINEIF_2_OFFSET UNITYSDK_OFFSET(0x19A4FA90)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITELINEIF_3_OFFSET UNITYSDK_OFFSET(0x19A4FAA0)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITELINEIF_OFFSET UNITYSDK_OFFSET(0x19A4FA70)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x19A4F9D0)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITELINE_2_OFFSET UNITYSDK_OFFSET(0x19A4F9E0)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITELINE_3_OFFSET UNITYSDK_OFFSET(0x19A4F9F0)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITELINE_4_OFFSET UNITYSDK_OFFSET(0x19A4FA00)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITELINE_OFFSET UNITYSDK_OFFSET(0x19A4F9C0)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITE_1_OFFSET UNITYSDK_OFFSET(0x19A4F990)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITE_2_OFFSET UNITYSDK_OFFSET(0x19A4F9A0)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITE_3_OFFSET UNITYSDK_OFFSET(0x19A4F9B0)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITE_OFFSET UNITYSDK_OFFSET(0x19A4F980)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Debug_TypeDefinitionIndex = 2755;

	class Debug : public ::System::Object
	{
	public:
		static ::System::Diagnostics::TraceListenerCollection* get_Listeners()
		{
			return ((::System::Diagnostics::TraceListenerCollection*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_GET_LISTENERS_OFFSET))();
		}

		static ::System::Boolean get_AutoFlush()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_GET_AUTOFLUSH_OFFSET))();
		}

		static ::System::Void set_AutoFlush(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_SET_AUTOFLUSH_OFFSET))(value);
		}

		static ::System::Int32 get_IndentLevel()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_GET_INDENTLEVEL_OFFSET))();
		}

		static ::System::Void set_IndentLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_SET_INDENTLEVEL_OFFSET))(value);
		}

		static ::System::Int32 get_IndentSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_GET_INDENTSIZE_OFFSET))();
		}

		static ::System::Void set_IndentSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_SET_INDENTSIZE_OFFSET))(value);
		}

		static ::System::Void Flush()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_FLUSH_OFFSET))();
		}

		static ::System::Void Close()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_CLOSE_OFFSET))();
		}

		static ::System::Void Assert(::System::Boolean condition)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_ASSERT_OFFSET))(condition);
		}

		static ::System::Void Assert_1(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_ASSERT_1_OFFSET))(condition, message);
		}

		static ::System::Void Assert_2(::System::Boolean condition, ::System::String* message, ::System::String* detailMessage)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_ASSERT_2_OFFSET))(condition, message, detailMessage);
		}

		static ::System::Void Assert_3(::System::Boolean condition, ::System::String* message, ::System::String* detailMessageFormat, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_ASSERT_3_OFFSET))(condition, message, detailMessageFormat, args);
		}

		static ::System::Void Fail(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_FAIL_OFFSET))(message);
		}

		static ::System::Void Fail_1(::System::String* message, ::System::String* detailMessage)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_FAIL_1_OFFSET))(message, detailMessage);
		}

		static ::System::Void Print(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_PRINT_OFFSET))(message);
		}

		static ::System::Void Print_1(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_PRINT_1_OFFSET))(format, args);
		}

		static ::System::Void Write(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITE_OFFSET))(message);
		}

		static ::System::Void Write_1(::System::Object* value)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITE_1_OFFSET))(value);
		}

		static ::System::Void Write_2(::System::String* message, ::System::String* category)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITE_2_OFFSET))(message, category);
		}

		static ::System::Void Write_3(::System::Object* value, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITE_3_OFFSET))(value, category);
		}

		static ::System::Void WriteLine(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITELINE_OFFSET))(message);
		}

		static ::System::Void WriteLine_1(::System::Object* value)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITELINE_1_OFFSET))(value);
		}

		static ::System::Void WriteLine_2(::System::String* message, ::System::String* category)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITELINE_2_OFFSET))(message, category);
		}

		static ::System::Void WriteLine_3(::System::Object* value, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITELINE_3_OFFSET))(value, category);
		}

		static ::System::Void WriteLine_4(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITELINE_4_OFFSET))(format, args);
		}

		static ::System::Void WriteIf(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITEIF_OFFSET))(condition, message);
		}

		static ::System::Void WriteIf_1(::System::Boolean condition, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITEIF_1_OFFSET))(condition, value);
		}

		static ::System::Void WriteIf_2(::System::Boolean condition, ::System::String* message, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITEIF_2_OFFSET))(condition, message, category);
		}

		static ::System::Void WriteIf_3(::System::Boolean condition, ::System::Object* value, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITEIF_3_OFFSET))(condition, value, category);
		}

		static ::System::Void WriteLineIf(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITELINEIF_OFFSET))(condition, message);
		}

		static ::System::Void WriteLineIf_1(::System::Boolean condition, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITELINEIF_1_OFFSET))(condition, value);
		}

		static ::System::Void WriteLineIf_2(::System::Boolean condition, ::System::String* message, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITELINEIF_2_OFFSET))(condition, message, category);
		}

		static ::System::Void WriteLineIf_3(::System::Boolean condition, ::System::Object* value, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITELINEIF_3_OFFSET))(condition, value, category);
		}

		static ::System::Void Indent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_INDENT_OFFSET))();
		}

		static ::System::Void Unindent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_UNINDENT_OFFSET))();
		}
	};
}
