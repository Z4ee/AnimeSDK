#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Diagnostics { class StackFrame; }

#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_GETNATIVEIMAGEBASE_OFFSET UNITYSDK_OFFSET(0x1DD162B0)
#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_GETNATIVEIP_OFFSET UNITYSDK_OFFSET(0x1DD162F0)
#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASILOFFSET_OFFSET UNITYSDK_OFFSET(0x1DD16330)
#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASMETHOD_OFFSET UNITYSDK_OFFSET(0x1DD16370)
#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASNATIVEIMAGE_OFFSET UNITYSDK_OFFSET(0x1DD163B0)
#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASSOURCE_OFFSET UNITYSDK_OFFSET(0x1DD163F0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int StackFrameExtensions_TypeDefinitionIndex = 4188;

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
