#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Runtime/InteropServices/DllImportSearchPath.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_DEFAULTDLLIMPORTSEARCHPATHSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x179BFE70)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int DefaultDllImportSearchPathsAttribute_TypeDefinitionIndex = 1410;

	class DefaultDllImportSearchPathsAttribute : public ::System::Attribute
	{
	public:
		::System::Runtime::InteropServices::DllImportSearchPath _paths; // 0x10

		::System::Void _ctor(::System::Runtime::InteropServices::DllImportSearchPath paths)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::DllImportSearchPath))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DEFAULTDLLIMPORTSEARCHPATHSATTRIBUTE__CTOR_OFFSET))(this, paths);
		}
	};
}
