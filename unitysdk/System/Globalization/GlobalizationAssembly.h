#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_GLOBALIZATION_GLOBALIZATIONASSEMBLY_GETGLOBALIZATIONRESOURCEBYTEPTR_OFFSET UNITYSDK_OFFSET(0x1A97DD20)
#define SYSTEM_GLOBALIZATION_GLOBALIZATIONASSEMBLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A97DDD0)

namespace System::Globalization
{
	inline static constexpr unsigned int GlobalizationAssembly_TypeDefinitionIndex = 723;

	class GlobalizationAssembly : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GLOBALIZATIONASSEMBLY__CTOR_OFFSET))(this);
		}

		static ::System::Byte* GetGlobalizationResourceBytePtr(::System::Reflection::Assembly* assembly, ::System::String* tableName)
		{
			return ((::System::Byte*(*)(::System::Reflection::Assembly*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GLOBALIZATIONASSEMBLY_GETGLOBALIZATIONRESOURCEBYTEPTR_OFFSET))(assembly, tableName);
		}
	};
}
