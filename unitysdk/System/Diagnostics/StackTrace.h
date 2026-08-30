#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/StackTrace_TraceFormat.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Diagnostics { class StackFrame; }
namespace System::Reflection { class MethodBase; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_DIAGNOSTICS_STACKTRACE_ADDFRAMES_OFFSET UNITYSDK_OFFSET(0x1AB52260)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GETAOTID_OFFSET UNITYSDK_OFFSET(0x1AB52230)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GETFRAMES_OFFSET UNITYSDK_OFFSET(0x1AB52220)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GETFRAME_OFFSET UNITYSDK_OFFSET(0x1AB52160)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GETFULLNAMEFORSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1AB52DD0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1AB52150)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GET_TRACE_OFFSET UNITYSDK_OFFSET(0x1AB52040)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_INIT_FRAMES_OFFSET UNITYSDK_OFFSET(0x1AB51DB0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AB53B80)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB53990)
#define SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB52020)
#define SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AB52030)
#define SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AB52050)
#define SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1AB520B0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB51DA0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int StackTrace_TypeDefinitionIndex = 1584;

	class StackTrace : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_aotid()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(StackTrace_TypeDefinitionIndex)->GetStaticField(0xAB50);
		}
		static ::System::Boolean* StaticGet_isAotidSet()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StackTrace_TypeDefinitionIndex)->GetStaticField(0x2580);
		}
		// static const ::System::Int32 METHODS_TO_SKIP = 0x0; // 0x0
		::Il2CppArray<::System::Diagnostics::StackFrame*>* frames; // 0x10
		::Il2CppArray<::System::Diagnostics::StackTrace*>* captured_traces; // 0x18
		::System::Boolean debug_info; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Exception* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::System::Exception* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void init_frames(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_INIT_FRAMES_OFFSET))(this, a1, a2);
		}

		static ::Il2CppArray<::System::Diagnostics::StackFrame*>* get_trace(::System::Exception* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Diagnostics::StackFrame*>*(*)(::System::Exception*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GET_TRACE_OFFSET))(a1, a2, a3);
		}

		::System::Int32 get_FrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Diagnostics::StackFrame* GetFrame(::System::Int32 a1)
		{
			return ((::System::Diagnostics::StackFrame*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GETFRAME_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Diagnostics::StackFrame*>* GetFrames()
		{
			return ((::Il2CppArray<::System::Diagnostics::StackFrame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GETFRAMES_OFFSET))(this);
		}

		static ::System::String* GetAotId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GETAOTID_OFFSET))();
		}

		::System::Boolean AddFrames(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_ADDFRAMES_OFFSET))(this, a1);
		}

		::System::Void GetFullNameForStackTrace(::System::Text::StringBuilder* a1, ::System::Reflection::MethodBase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GETFULLNAMEFORSTACKTRACE_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Diagnostics::StackTrace_TraceFormat a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Diagnostics::StackTrace_TraceFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_TOSTRING_1_OFFSET))(this, a1);
		}
	};
}
