#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class StringDictionary; }

#define SYSTEM_DIAGNOSTICS_ENVIRONMENTBLOCK_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1C700480)

namespace System::Diagnostics
{
	inline static constexpr unsigned int EnvironmentBlock_TypeDefinitionIndex = 2783;

	class EnvironmentBlock : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* ToByteArray(::System::Collections::Specialized::StringDictionary* sd, ::System::Boolean unicode)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Collections::Specialized::StringDictionary*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ENVIRONMENTBLOCK_TOBYTEARRAY_OFFSET))(sd, unicode);
		}
	};
}
