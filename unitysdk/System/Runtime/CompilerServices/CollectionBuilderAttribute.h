#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_COLLECTIONBUILDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F010530)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CollectionBuilderAttribute_TypeDefinitionIndex = 6576;

	class CollectionBuilderAttribute : public ::System::Attribute
	{
	public:
		::System::String* _MethodName_k__BackingField; // 0x10
		::System::Type* _BuilderType_k__BackingField; // 0x18

		::System::Void _ctor(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_COLLECTIONBUILDERATTRIBUTE__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
