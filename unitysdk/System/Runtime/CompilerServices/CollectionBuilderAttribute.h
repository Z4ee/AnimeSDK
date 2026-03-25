#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_COLLECTIONBUILDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1847A990)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CollectionBuilderAttribute_TypeDefinitionIndex = 8897;

	class CollectionBuilderAttribute : public ::System::Attribute
	{
	public:
		::System::String* _MethodName_k__BackingField; // 0x10
		::System::Type* _BuilderType_k__BackingField; // 0x18

		::System::Void _ctor(::System::Type* builderType, ::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_COLLECTIONBUILDERATTRIBUTE__CTOR_OFFSET))(this, builderType, methodName);
		}
	};
}
