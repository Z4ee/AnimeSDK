#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_GET_ALLINTERNALSVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C4F6420)
#define SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_GET_ASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x1C4F6410)
#define SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_SET_ALLINTERNALSVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C4F6430)
#define SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F6400)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int InternalsVisibleToAttribute_TypeDefinitionIndex = 1403;

	class InternalsVisibleToAttribute : public ::System::Attribute
	{
	public:
		::System::String* _assemblyName; // 0x10
		::System::Boolean _allInternalsVisible; // 0x18

		::System::Void _ctor(::System::String* assemblyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE__CTOR_OFFSET))(this, assemblyName);
		}

		::System::String* get_AssemblyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_GET_ASSEMBLYNAME_OFFSET))(this);
		}

		::System::Boolean get_AllInternalsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_GET_ALLINTERNALSVISIBLE_OFFSET))(this);
		}

		::System::Void set_AllInternalsVisible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_SET_ALLINTERNALSVISIBLE_OFFSET))(this, value);
		}
	};
}
