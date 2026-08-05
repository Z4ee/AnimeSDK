#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml::Schema { class DatatypeImplementation; }

#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1EA20A30)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1EA20A10)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA20A00)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA209F0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DatatypeImplementation_SchemaDatatypeMap_TypeDefinitionIndex = 1987;

	class DatatypeImplementation_SchemaDatatypeMap : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Xml::Schema::DatatypeImplementation* type; // 0x18
		::System::Int32 parentIndex; // 0x20

		::System::Void _ctor(::System::String* name, ::System::Xml::Schema::DatatypeImplementation* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::DatatypeImplementation*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP__CTOR_OFFSET))(this, name, type);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Xml::Schema::DatatypeImplementation* type, ::System::Int32 parentIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::DatatypeImplementation*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP__CTOR_1_OFFSET))(this, name, type, parentIndex);
		}

		static ::System::Xml::Schema::DatatypeImplementation* op_Explicit(::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap* sdm)
		{
			return ((::System::Xml::Schema::DatatypeImplementation*(*)(::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP_OP_EXPLICIT_OFFSET))(sdm);
		}

		::System::Int32 CompareTo(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_SCHEMADATATYPEMAP_COMPARETO_OFFSET))(this, obj);
		}
	};
}
