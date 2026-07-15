#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Assembly.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"

namespace System { class String; }
namespace System::Reflection { class AssemblyName; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Policy { class Evidence; }

#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETNAME_OFFSET UNITYSDK_OFFSET(0x1A80C3E0)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1A80C180)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_LOADWITHPARTIALNAMEINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A80C2E0)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_LOADWITHPARTIALNAMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A80C210)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A80C3F0)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeAssembly_TypeDefinitionIndex = 609;

	class RuntimeAssembly : public ::System::Reflection::Assembly
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY__CTOR_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		static ::System::Reflection::RuntimeAssembly* LoadWithPartialNameInternal(::System::String* a1, ::System::Security::Policy::Evidence* a2, ::System::Threading::StackCrawlMark& a3)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::System::String*, ::System::Security::Policy::Evidence*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_LOADWITHPARTIALNAMEINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Reflection::RuntimeAssembly* LoadWithPartialNameInternal_1(::System::Reflection::AssemblyName* a1, ::System::Security::Policy::Evidence* a2, ::System::Threading::StackCrawlMark& a3)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::System::Reflection::AssemblyName*, ::System::Security::Policy::Evidence*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_LOADWITHPARTIALNAMEINTERNAL_1_OFFSET))(a1, a2, a3);
		}

		::System::Reflection::AssemblyName* GetName(::System::Boolean a1)
		{
			return ((::System::Reflection::AssemblyName*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_GETNAME_OFFSET))(this, a1);
		}
	};
}
