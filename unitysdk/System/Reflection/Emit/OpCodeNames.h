#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_REFLECTION_EMIT_OPCODENAMES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1636F7B0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int OpCodeNames_TypeDefinitionIndex = 651;

	class OpCodeNames : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_names()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OpCodeNames_TypeDefinitionIndex)->GetStaticField(0x56F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODENAMES__CCTOR_OFFSET))();
		}
	};
}
