#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class MethodBase; }

#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETFILELINENUMBER_OFFSET UNITYSDK_OFFSET(0x1BCC6280)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x1BCC6290)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETILOFFSET_OFFSET UNITYSDK_OFFSET(0x1BCC63A0)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETINTERNALMETHODNAME_OFFSET UNITYSDK_OFFSET(0x1BCC63F0)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETMETHODADDRESS_OFFSET UNITYSDK_OFFSET(0x1BCC63D0)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETMETHODINDEX_OFFSET UNITYSDK_OFFSET(0x1BCC63E0)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x1BCC63B0)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETNATIVEOFFSET_OFFSET UNITYSDK_OFFSET(0x1BCC63C0)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETSECUREFILENAME_OFFSET UNITYSDK_OFFSET(0x1BCC62A0)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GET_FRAME_INFO_OFFSET UNITYSDK_OFFSET(0x1BCC5FE0)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BCC6400)
#define SYSTEM_DIAGNOSTICS_STACKFRAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BCC61B0)
#define SYSTEM_DIAGNOSTICS_STACKFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC60D0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int StackFrame_TypeDefinitionIndex = 1583;

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

		::System::Void _ctor_1(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean get_frame_info(::System::Int32 a1, ::System::Boolean a2, ::System::Reflection::MethodBase*& a3, ::System::Int32& a4, ::System::Int32& a5, ::System::String*& a6, ::System::Int32& a7, ::System::Int32& a8)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Boolean, ::System::Reflection::MethodBase*&, ::System::Int32&, ::System::Int32&, ::System::String*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GET_FRAME_INFO_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
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

		::System::Int32 GetILOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETILOFFSET_OFFSET))(this);
		}

		::System::Reflection::MethodBase* GetMethod()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETMETHOD_OFFSET))(this);
		}

		::System::Int32 GetNativeOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETNATIVEOFFSET_OFFSET))(this);
		}

		::System::Int64 GetMethodAddress()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETMETHODADDRESS_OFFSET))(this);
		}

		::System::UInt32 GetMethodIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETMETHODINDEX_OFFSET))(this);
		}

		::System::String* GetInternalMethodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETINTERNALMETHODNAME_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_TOSTRING_OFFSET))(this);
		}
	};
}
