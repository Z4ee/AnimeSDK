#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_DIAGNOSTICS_ORDINALCASEINSENSITIVECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D3F9620)
#define SYSTEM_DIAGNOSTICS_ORDINALCASEINSENSITIVECOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3F9700)
#define SYSTEM_DIAGNOSTICS_ORDINALCASEINSENSITIVECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F96F0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int OrdinalCaseInsensitiveComparer_TypeDefinitionIndex = 2784;

	class OrdinalCaseInsensitiveComparer : public ::System::Object
	{
	public:
		static ::System::Diagnostics::OrdinalCaseInsensitiveComparer** StaticGet_Default()
		{
			return (::System::Diagnostics::OrdinalCaseInsensitiveComparer**)Il2CppClass::FromTypeDefinitionIndex(OrdinalCaseInsensitiveComparer_TypeDefinitionIndex)->GetStaticField(0x2C00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ORDINALCASEINSENSITIVECOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ORDINALCASEINSENSITIVECOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::System::Object* a, ::System::Object* b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ORDINALCASEINSENSITIVECOMPARER_COMPARE_OFFSET))(this, a, b);
		}
	};
}
