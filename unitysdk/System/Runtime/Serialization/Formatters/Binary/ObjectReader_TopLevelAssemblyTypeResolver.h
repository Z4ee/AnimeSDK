#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_TOPLEVELASSEMBLYTYPERESOLVER_RESOLVETYPE_OFFSET UNITYSDK_OFFSET(0x1BE15360)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_TOPLEVELASSEMBLYTYPERESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE15350)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectReader_TopLevelAssemblyTypeResolver_TypeDefinitionIndex = 1189;

	class ObjectReader_TopLevelAssemblyTypeResolver : public ::System::Object
	{
	public:
		::System::Reflection::Assembly* m_topLevelAssembly; // 0x10

		::System::Void _ctor(::System::Reflection::Assembly* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_TOPLEVELASSEMBLYTYPERESOLVER__CTOR_OFFSET))(this, a1);
		}

		::System::Type* ResolveType(::System::Reflection::Assembly* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::Assembly*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_TOPLEVELASSEMBLYTYPERESOLVER_RESOLVETYPE_OFFSET))(this, a1, a2, a3);
		}
	};
}
