#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_REFLECTION_ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_GET_INFORMATIONALVERSION_OFFSET UNITYSDK_OFFSET(0x163688D0)
#define SYSTEM_REFLECTION_ASSEMBLYINFORMATIONALVERSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x163688C0)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyInformationalVersionAttribute_TypeDefinitionIndex = 546;

	class AssemblyInformationalVersionAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_informationalVersion; // 0x10

		::System::Void _ctor(::System::String* informationalVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYINFORMATIONALVERSIONATTRIBUTE__CTOR_OFFSET))(this, informationalVersion);
		}

		::System::String* get_InformationalVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_GET_INFORMATIONALVERSION_OFFSET))(this);
		}
	};
}
