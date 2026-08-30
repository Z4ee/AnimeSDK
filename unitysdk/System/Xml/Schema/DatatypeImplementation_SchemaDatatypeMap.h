#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml::Schema { class DatatypeImplementation; }

#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1BADAD00)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BADACE0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP_GET_PARENTINDEX_OFFSET UNITYSDK_OFFSET(0x1BADACF0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1BADACC0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BAD8DB0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD8DA0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DatatypeImplementation_SchemaDatatypeMap_TypeDefinitionIndex = 2090;

	class DatatypeImplementation_SchemaDatatypeMap : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Xml::Schema::DatatypeImplementation* type; // 0x18
		::System::Int32 parentIndex; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::Xml::Schema::DatatypeImplementation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::DatatypeImplementation*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Xml::Schema::DatatypeImplementation* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::DatatypeImplementation*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Xml::Schema::DatatypeImplementation* op_Explicit(::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap* a1)
		{
			return ((::System::Xml::Schema::DatatypeImplementation*(*)(::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP_OP_EXPLICIT_OFFSET))(a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_ParentIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP_GET_PARENTINDEX_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP_COMPARETO_OFFSET))(this, a1);
		}
	};
}
