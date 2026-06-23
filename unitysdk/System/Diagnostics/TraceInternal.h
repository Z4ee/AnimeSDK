#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TraceEventType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class TraceListenerCollection; }

#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_ASSERT_1_OFFSET UNITYSDK_OFFSET(0x1B755EF0)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_ASSERT_2_OFFSET UNITYSDK_OFFSET(0x1B755F00)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_ASSERT_OFFSET UNITYSDK_OFFSET(0x1B755680)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B7552E0)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_FAIL_1_OFFSET UNITYSDK_OFFSET(0x1B755F10)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_FAIL_OFFSET UNITYSDK_OFFSET(0x1B7556A0)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_FLUSH_OFFSET UNITYSDK_OFFSET(0x1B754AD0)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_APPNAME_OFFSET UNITYSDK_OFFSET(0x1B753720)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_AUTOFLUSH_OFFSET UNITYSDK_OFFSET(0x1B7537A0)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_INDENTLEVEL_OFFSET UNITYSDK_OFFSET(0x1B7537E0)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_INDENTSIZE_OFFSET UNITYSDK_OFFSET(0x1B753D00)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_LISTENERS_OFFSET UNITYSDK_OFFSET(0x1B7532D0)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_USEGLOBALLOCK_OFFSET UNITYSDK_OFFSET(0x1B7537C0)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_INDENT_OFFSET UNITYSDK_OFFSET(0x1B754190)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_INITIALIZESETTINGS_OFFSET UNITYSDK_OFFSET(0x1B756770)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_REFRESH_OFFSET UNITYSDK_OFFSET(0x1B756780)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_SETINDENTSIZE_OFFSET UNITYSDK_OFFSET(0x1B753D20)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_SET_AUTOFLUSH_OFFSET UNITYSDK_OFFSET(0x1B7537B0)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_SET_INDENTLEVEL_OFFSET UNITYSDK_OFFSET(0x1B753830)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_SET_INDENTSIZE_OFFSET UNITYSDK_OFFSET(0x1B753D10)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_SET_USEGLOBALLOCK_OFFSET UNITYSDK_OFFSET(0x1B7537D0)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_TRACEEVENT_OFFSET UNITYSDK_OFFSET(0x1B756840)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_UNINDENT_OFFSET UNITYSDK_OFFSET(0x1B754630)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITEIF_1_OFFSET UNITYSDK_OFFSET(0x1B75C230)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITEIF_2_OFFSET UNITYSDK_OFFSET(0x1B75C240)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITEIF_3_OFFSET UNITYSDK_OFFSET(0x1B75C250)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITEIF_OFFSET UNITYSDK_OFFSET(0x1B75C220)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINEIF_1_OFFSET UNITYSDK_OFFSET(0x1B75C270)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINEIF_2_OFFSET UNITYSDK_OFFSET(0x1B75C280)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINEIF_3_OFFSET UNITYSDK_OFFSET(0x1B75C290)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINEIF_OFFSET UNITYSDK_OFFSET(0x1B75C260)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x1B75A910)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINE_2_OFFSET UNITYSDK_OFFSET(0x1B75B160)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINE_3_OFFSET UNITYSDK_OFFSET(0x1B75B9C0)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1B75A0C0)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1B7587B0)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITE_2_OFFSET UNITYSDK_OFFSET(0x1B759000)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITE_3_OFFSET UNITYSDK_OFFSET(0x1B759860)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITE_OFFSET UNITYSDK_OFFSET(0x1B757F60)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B75C2A0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceInternal_TypeDefinitionIndex = 2768;

	class TraceInternal : public ::System::Object
	{
	public:
		static ::System::Diagnostics::TraceListenerCollection** StaticGet_listeners()
		{
			return (::System::Diagnostics::TraceListenerCollection**)Il2CppClass::FromTypeDefinitionIndex(TraceInternal_TypeDefinitionIndex)->GetStaticField(0x26F0);
		}
		static ::System::String** StaticGet_appName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TraceInternal_TypeDefinitionIndex)->GetStaticField(0x26F8);
		}
		static ::System::Object** StaticGet_critSec()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TraceInternal_TypeDefinitionIndex)->GetStaticField(0x2700);
		}
		static ::System::Int32* StaticGet_indentSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TraceInternal_TypeDefinitionIndex)->GetStaticField(0x1000);
		}
		static ::System::Boolean* StaticGet_autoFlush()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TraceInternal_TypeDefinitionIndex)->GetStaticField(0x1004);
		}
		static ::System::Boolean* StaticGet_useGlobalLock()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TraceInternal_TypeDefinitionIndex)->GetStaticField(0x1005);
		}
		static ::System::Int32* StaticGet_indentLevel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TraceInternal_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL__CCTOR_OFFSET))();
		}

		static ::System::Diagnostics::TraceListenerCollection* get_Listeners()
		{
			return ((::System::Diagnostics::TraceListenerCollection*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_LISTENERS_OFFSET))();
		}

		static ::System::String* get_AppName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_APPNAME_OFFSET))();
		}

		static ::System::Boolean get_AutoFlush()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_AUTOFLUSH_OFFSET))();
		}

		static ::System::Void set_AutoFlush(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_SET_AUTOFLUSH_OFFSET))(value);
		}

		static ::System::Boolean get_UseGlobalLock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_USEGLOBALLOCK_OFFSET))();
		}

		static ::System::Void set_UseGlobalLock(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_SET_USEGLOBALLOCK_OFFSET))(value);
		}

		static ::System::Int32 get_IndentLevel()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_INDENTLEVEL_OFFSET))();
		}

		static ::System::Void set_IndentLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_SET_INDENTLEVEL_OFFSET))(value);
		}

		static ::System::Int32 get_IndentSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_INDENTSIZE_OFFSET))();
		}

		static ::System::Void set_IndentSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_SET_INDENTSIZE_OFFSET))(value);
		}

		static ::System::Void SetIndentSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_SETINDENTSIZE_OFFSET))(value);
		}

		static ::System::Void Indent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_INDENT_OFFSET))();
		}

		static ::System::Void Unindent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_UNINDENT_OFFSET))();
		}

		static ::System::Void Flush()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_FLUSH_OFFSET))();
		}

		static ::System::Void Close()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_CLOSE_OFFSET))();
		}

		static ::System::Void Assert(::System::Boolean condition)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_ASSERT_OFFSET))(condition);
		}

		static ::System::Void Assert_1(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_ASSERT_1_OFFSET))(condition, message);
		}

		static ::System::Void Assert_2(::System::Boolean condition, ::System::String* message, ::System::String* detailMessage)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_ASSERT_2_OFFSET))(condition, message, detailMessage);
		}

		static ::System::Void Fail(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_FAIL_OFFSET))(message);
		}

		static ::System::Void Fail_1(::System::String* message, ::System::String* detailMessage)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_FAIL_1_OFFSET))(message, detailMessage);
		}

		static ::System::Void InitializeSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_INITIALIZESETTINGS_OFFSET))();
		}

		static ::System::Void Refresh()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_REFRESH_OFFSET))();
		}

		static ::System::Void TraceEvent(::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Diagnostics::TraceEventType, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_TRACEEVENT_OFFSET))(eventType, id, format, args);
		}

		static ::System::Void Write(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITE_OFFSET))(message);
		}

		static ::System::Void Write_1(::System::Object* value)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITE_1_OFFSET))(value);
		}

		static ::System::Void Write_2(::System::String* message, ::System::String* category)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITE_2_OFFSET))(message, category);
		}

		static ::System::Void Write_3(::System::Object* value, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITE_3_OFFSET))(value, category);
		}

		static ::System::Void WriteLine(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINE_OFFSET))(message);
		}

		static ::System::Void WriteLine_1(::System::Object* value)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINE_1_OFFSET))(value);
		}

		static ::System::Void WriteLine_2(::System::String* message, ::System::String* category)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINE_2_OFFSET))(message, category);
		}

		static ::System::Void WriteLine_3(::System::Object* value, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINE_3_OFFSET))(value, category);
		}

		static ::System::Void WriteIf(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITEIF_OFFSET))(condition, message);
		}

		static ::System::Void WriteIf_1(::System::Boolean condition, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITEIF_1_OFFSET))(condition, value);
		}

		static ::System::Void WriteIf_2(::System::Boolean condition, ::System::String* message, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITEIF_2_OFFSET))(condition, message, category);
		}

		static ::System::Void WriteIf_3(::System::Boolean condition, ::System::Object* value, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITEIF_3_OFFSET))(condition, value, category);
		}

		static ::System::Void WriteLineIf(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINEIF_OFFSET))(condition, message);
		}

		static ::System::Void WriteLineIf_1(::System::Boolean condition, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINEIF_1_OFFSET))(condition, value);
		}

		static ::System::Void WriteLineIf_2(::System::Boolean condition, ::System::String* message, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINEIF_2_OFFSET))(condition, message, category);
		}

		static ::System::Void WriteLineIf_3(::System::Boolean condition, ::System::Object* value, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINEIF_3_OFFSET))(condition, value, category);
		}
	};
}
