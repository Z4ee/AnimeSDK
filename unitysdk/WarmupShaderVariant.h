#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/VertexAttributeDescriptor.h"

class PassAndKeywords;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define WARMUPSHADERVARIANT__CTOR_OFFSET UNITYSDK_OFFSET(0xE9A2150)

inline static constexpr unsigned int WarmupShaderVariant_TypeDefinitionIndex = 47890;

class WarmupShaderVariant : public ::System::Object
{
public:
	::System::String* ShaderName; // 0x10
	::System::Int32 ShaderVariantCount; // 0x18
	::System::Collections::Generic::List_1<::PassAndKeywords*>* PassAndKeywordsStr; // 0x20
	::Il2CppArray<::UnityEngine::Rendering::VertexAttributeDescriptor>* VertexAttributes; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WARMUPSHADERVARIANT__CTOR_OFFSET))(this);
	}
};
