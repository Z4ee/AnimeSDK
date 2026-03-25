#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_TOPLEVELASSEMBLYTYPERESOLVER_RESOLVETYPE_OFFSET UNITYSDK_OFFSET(0x163DAD30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_TOPLEVELASSEMBLYTYPERESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x163DAD20)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectReader_TopLevelAssemblyTypeResolver_TypeDefinitionIndex = 1179;

	class ObjectReader_TopLevelAssemblyTypeResolver : public ::System::Object
	{
	public:
		::System::Reflection::Assembly* m_topLevelAssembly; // 0x10

		::System::Void _ctor(::System::Reflection::Assembly* topLevelAssembly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_TOPLEVELASSEMBLYTYPERESOLVER__CTOR_OFFSET))(this, topLevelAssembly);
		}

		::System::Type* ResolveType(::System::Reflection::Assembly* assembly, ::System::String* simpleTypeName, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::Assembly*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_TOPLEVELASSEMBLYTYPERESOLVER_RESOLVETYPE_OFFSET))(this, assembly, simpleTypeName, ignoreCase);
		}
	};
}
