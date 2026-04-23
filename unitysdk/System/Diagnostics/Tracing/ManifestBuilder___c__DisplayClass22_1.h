#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class ManifestBuilder___c__DisplayClass22_0; }

#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER___C__DISPLAYCLASS22_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17907FD0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER___C__DISPLAYCLASS22_1__TRANSLATETOMANIFESTCONVENTION_B__0_OFFSET UNITYSDK_OFFSET(0x17908190)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ManifestBuilder___c__DisplayClass22_1_TypeDefinitionIndex = 1699;

	class ManifestBuilder___c__DisplayClass22_1 : public ::System::Object
	{
	public:
		::System::Diagnostics::Tracing::ManifestBuilder___c__DisplayClass22_0* CS___8__locals1; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER___C__DISPLAYCLASS22_1__CTOR_OFFSET))(this);
		}

		::System::Void _TranslateToManifestConvention_b__0(::System::Char ch, ::System::String* escape)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER___C__DISPLAYCLASS22_1__TRANSLATETOMANIFESTCONVENTION_B__0_OFFSET))(this, ch, escape);
		}
	};
}
