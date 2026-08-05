#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Assembly.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"

namespace System { class String; }
namespace System::Reflection { class AssemblyName; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Policy { class Evidence; }

#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_2_379280A38E37F143_OFFSET UNITYSDK_OFFSET(0x1DC00A60)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_2_69036EC56CE795CA_OFFSET UNITYSDK_OFFSET(0x1DC00880)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_2_6EC4C62FBABFFB12_OFFSET UNITYSDK_OFFSET(0x1DC00940)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1DC00A70)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_2_F30452B5723A18ED_OFFSET UNITYSDK_OFFSET(0x1DC007F0)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeAssembly_TypeDefinitionIndex = 583;

	class RuntimeAssembly : public ::System::Reflection::Assembly
	{
	public:
		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_F30452B5723A18ED(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_2_F30452B5723A18ED_OFFSET))(this, info, context);
		}

		static ::System::Reflection::RuntimeAssembly* Method_2_69036EC56CE795CA(::System::String* partialName, ::System::Security::Policy::Evidence* securityEvidence, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::System::String*, ::System::Security::Policy::Evidence*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_2_69036EC56CE795CA_OFFSET))(partialName, securityEvidence, stackMark);
		}

		static ::System::Reflection::RuntimeAssembly* Method_2_6EC4C62FBABFFB12(::System::Reflection::AssemblyName* an, ::System::Security::Policy::Evidence* securityEvidence, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::System::Reflection::AssemblyName*, ::System::Security::Policy::Evidence*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_2_6EC4C62FBABFFB12_OFFSET))(an, securityEvidence, stackMark);
		}

		::System::Reflection::AssemblyName* Method_2_379280A38E37F143(::System::Boolean copiedName)
		{
			return ((::System::Reflection::AssemblyName*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_2_379280A38E37F143_OFFSET))(this, copiedName);
		}
	};
}
