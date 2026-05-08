#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class MethodBase; }

#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETFILELINENUMBER_OFFSET UNITYSDK_OFFSET(0x1A597910)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x1A597920)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x1A597980)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETSECUREFILENAME_OFFSET UNITYSDK_OFFSET(0x1A597930)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GET_FRAME_INFO_OFFSET UNITYSDK_OFFSET(0x1A597660)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A597990)
#define SYSTEM_DIAGNOSTICS_STACKFRAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A597830)
#define SYSTEM_DIAGNOSTICS_STACKFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A597750)

namespace System::Diagnostics
{
	inline static constexpr unsigned int StackFrame_TypeDefinitionIndex = 1563;

	class StackFrame : public ::System::Object
	{
	public:
		// static const ::System::Int32 OFFSET_UNKNOWN = 0xFFFFFFFF; // 0x0
		::System::Int32 ilOffset; // 0x10
		::System::Int32 nativeOffset; // 0x14
		::System::Int64 methodAddress; // 0x18
		::System::UInt32 methodIndex; // 0x20
		::System::Reflection::MethodBase* methodBase; // 0x28
		::System::String* fileName; // 0x30
		::System::Int32 lineNumber; // 0x38
		::System::Int32 columnNumber; // 0x3C
		::System::String* internalMethodName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 skipFrames, ::System::Boolean fNeedFileInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME__CTOR_1_OFFSET))(this, skipFrames, fNeedFileInfo);
		}

		static ::System::Boolean get_frame_info(::System::Int32 skip, ::System::Boolean needFileInfo, ::System::Reflection::MethodBase*& method, ::System::Int32& iloffset, ::System::Int32& native_offset, ::System::String*& file, ::System::Int32& line, ::System::Int32& column)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Boolean, ::System::Reflection::MethodBase*&, ::System::Int32&, ::System::Int32&, ::System::String*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GET_FRAME_INFO_OFFSET))(skip, needFileInfo, method, iloffset, native_offset, file, line, column);
		}

		::System::Int32 GetFileLineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETFILELINENUMBER_OFFSET))(this);
		}

		::System::String* GetFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETFILENAME_OFFSET))(this);
		}

		::System::String* GetSecureFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETSECUREFILENAME_OFFSET))(this);
		}

		::System::Reflection::MethodBase* GetMethod()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETMETHOD_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_TOSTRING_OFFSET))(this);
		}
	};
}
