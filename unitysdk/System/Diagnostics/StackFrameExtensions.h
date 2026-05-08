#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Diagnostics { class StackFrame; }

#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_GETNATIVEIMAGEBASE_OFFSET UNITYSDK_OFFSET(0x1A570A10)
#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_GETNATIVEIP_OFFSET UNITYSDK_OFFSET(0x1A570A50)
#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASILOFFSET_OFFSET UNITYSDK_OFFSET(0x1A570A90)
#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASMETHOD_OFFSET UNITYSDK_OFFSET(0x1A570AD0)
#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASNATIVEIMAGE_OFFSET UNITYSDK_OFFSET(0x1A570B10)
#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASSOURCE_OFFSET UNITYSDK_OFFSET(0x1A570B50)

namespace System::Diagnostics
{
	inline static constexpr unsigned int StackFrameExtensions_TypeDefinitionIndex = 4189;

	class StackFrameExtensions : public ::System::Object
	{
	public:
		static ::System::IntPtr GetNativeImageBase(::System::Diagnostics::StackFrame* stackFrame)
		{
			return ((::System::IntPtr(*)(::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_GETNATIVEIMAGEBASE_OFFSET))(stackFrame);
		}

		static ::System::IntPtr GetNativeIP(::System::Diagnostics::StackFrame* stackFrame)
		{
			return ((::System::IntPtr(*)(::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_GETNATIVEIP_OFFSET))(stackFrame);
		}

		static ::System::Boolean HasILOffset(::System::Diagnostics::StackFrame* stackFrame)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASILOFFSET_OFFSET))(stackFrame);
		}

		static ::System::Boolean HasMethod(::System::Diagnostics::StackFrame* stackFrame)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASMETHOD_OFFSET))(stackFrame);
		}

		static ::System::Boolean HasNativeImage(::System::Diagnostics::StackFrame* stackFrame)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASNATIVEIMAGE_OFFSET))(stackFrame);
		}

		static ::System::Boolean HasSource(::System::Diagnostics::StackFrame* stackFrame)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASSOURCE_OFFSET))(stackFrame);
		}
	};
}
