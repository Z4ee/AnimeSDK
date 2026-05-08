#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/StackTrace_TraceFormat.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Diagnostics { class StackFrame; }
namespace System::Reflection { class MethodBase; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_DIAGNOSTICS_STACKTRACE_ADDFRAMES_OFFSET UNITYSDK_OFFSET(0x1A6B5220)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GETAOTID_OFFSET UNITYSDK_OFFSET(0x1A6B50D0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GETFRAMES_OFFSET UNITYSDK_OFFSET(0x1A6B50C0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GETFRAME_OFFSET UNITYSDK_OFFSET(0x1A6B5060)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GETFULLNAMEFORSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1A6B5820)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1A6B5050)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GET_TRACE_OFFSET UNITYSDK_OFFSET(0x1A6B4EF0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_INIT_FRAMES_OFFSET UNITYSDK_OFFSET(0x1A6B4D10)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1A6B5F70)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A6B5D50)
#define SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6B4ED0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A6B4EE0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A6B4F00)
#define SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A6B4F90)
#define SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6B4D00)

namespace System::Diagnostics
{
	inline static constexpr unsigned int StackTrace_TypeDefinitionIndex = 1564;

	class StackTrace : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_aotid()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(StackTrace_TypeDefinitionIndex)->GetStaticField(0x9B0);
		}
		static ::System::Boolean* StaticGet_isAotidSet()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StackTrace_TypeDefinitionIndex)->GetStaticField(0x220);
		}
		// static const ::System::Int32 METHODS_TO_SKIP = 0x0; // 0x0
		::Il2CppArray<::System::Diagnostics::StackFrame*>* frames; // 0x10
		::Il2CppArray<::System::Diagnostics::StackTrace*>* captured_traces; // 0x18
		::System::Boolean debug_info; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean fNeedFileInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_1_OFFSET))(this, fNeedFileInfo);
		}

		::System::Void _ctor_2(::System::Int32 skipFrames, ::System::Boolean fNeedFileInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_2_OFFSET))(this, skipFrames, fNeedFileInfo);
		}

		::System::Void _ctor_3(::System::Exception* e, ::System::Boolean fNeedFileInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_3_OFFSET))(this, e, fNeedFileInfo);
		}

		::System::Void _ctor_4(::System::Exception* e, ::System::Int32 skipFrames, ::System::Boolean fNeedFileInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE__CTOR_4_OFFSET))(this, e, skipFrames, fNeedFileInfo);
		}

		::System::Void init_frames(::System::Int32 skipFrames, ::System::Boolean fNeedFileInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_INIT_FRAMES_OFFSET))(this, skipFrames, fNeedFileInfo);
		}

		static ::Il2CppArray<::System::Diagnostics::StackFrame*>* get_trace(::System::Exception* e, ::System::Int32 skipFrames, ::System::Boolean fNeedFileInfo)
		{
			return ((::Il2CppArray<::System::Diagnostics::StackFrame*>*(*)(::System::Exception*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GET_TRACE_OFFSET))(e, skipFrames, fNeedFileInfo);
		}

		::System::Int32 get_FrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Diagnostics::StackFrame* GetFrame(::System::Int32 index)
		{
			return ((::System::Diagnostics::StackFrame*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GETFRAME_OFFSET))(this, index);
		}

		::Il2CppArray<::System::Diagnostics::StackFrame*>* GetFrames()
		{
			return ((::Il2CppArray<::System::Diagnostics::StackFrame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GETFRAMES_OFFSET))(this);
		}

		static ::System::String* GetAotId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GETAOTID_OFFSET))();
		}

		::System::Boolean AddFrames(::System::Text::StringBuilder* sb)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_ADDFRAMES_OFFSET))(this, sb);
		}

		::System::Void GetFullNameForStackTrace(::System::Text::StringBuilder* sb, ::System::Reflection::MethodBase* mi)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GETFULLNAMEFORSTACKTRACE_OFFSET))(this, sb, mi);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Diagnostics::StackTrace_TraceFormat traceFormat)
		{
			return ((::System::String*(*)(::PVOID, ::System::Diagnostics::StackTrace_TraceFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_TOSTRING_1_OFFSET))(this, traceFormat);
		}
	};
}
