#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/LocalVariableInfo.h"

namespace System { class String; }
namespace System::Reflection::Emit { class ILGenerator; }

#define SYSTEM_REFLECTION_EMIT_LOCALBUILDER_GET_LOCALINDEX_OFFSET UNITYSDK_OFFSET(0x19971E10)
#define SYSTEM_REFLECTION_EMIT_LOCALBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19971E20)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int LocalBuilder_TypeDefinitionIndex = 618;

	class LocalBuilder : public ::System::Reflection::LocalVariableInfo
	{
	public:
		::System::String* name; // 0x20
		::System::Reflection::Emit::ILGenerator* ilgen; // 0x28
		::System::Int32 startOffset; // 0x30
		::System::Int32 endOffset; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_LOCALBUILDER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_LocalIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_LOCALBUILDER_GET_LOCALINDEX_OFFSET))(this);
		}
	};
}
