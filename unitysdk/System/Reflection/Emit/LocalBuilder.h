#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/LocalVariableInfo.h"

namespace System { class String; }
namespace System::Reflection::Emit { class ILGenerator; }

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int LocalBuilder_TypeDefinitionIndex = 649;

	class LocalBuilder : public ::System::Reflection::LocalVariableInfo
	{
	public:
		::System::String* name; // 0x20
		::System::Reflection::Emit::ILGenerator* ilgen; // 0x28
		::System::Int32 startOffset; // 0x30
		::System::Int32 endOffset; // 0x34
	};
}
