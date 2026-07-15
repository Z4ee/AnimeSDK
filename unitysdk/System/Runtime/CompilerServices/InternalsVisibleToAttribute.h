#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_GET_ALLINTERNALSVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A8242C0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_GET_ASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x1A8242B0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_SET_ALLINTERNALSVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A8242D0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8242A0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int InternalsVisibleToAttribute_TypeDefinitionIndex = 1380;

	class InternalsVisibleToAttribute : public ::System::Attribute
	{
	public:
		::System::String* _assemblyName; // 0x10
		::System::Boolean _allInternalsVisible; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_AssemblyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_GET_ASSEMBLYNAME_OFFSET))(this);
		}

		::System::Boolean get_AllInternalsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_GET_ALLINTERNALSVISIBLE_OFFSET))(this);
		}

		::System::Void set_AllInternalsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_SET_ALLINTERNALSVISIBLE_OFFSET))(this, a1);
		}
	};
}
