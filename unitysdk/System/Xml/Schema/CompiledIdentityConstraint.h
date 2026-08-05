#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/CompiledIdentityConstraint_ConstraintRole.h"

namespace System::Xml { class XmlNamespaceManager; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class Asttree; }
namespace System::Xml::Schema { class XmlSchemaIdentityConstraint; }

#define SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F104120)
#define SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F103C70)
#define SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F103C00)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int CompiledIdentityConstraint_TypeDefinitionIndex = 1950;

	class CompiledIdentityConstraint : public ::System::Object
	{
	public:
		static ::System::Xml::Schema::CompiledIdentityConstraint** StaticGet_Empty()
		{
			return (::System::Xml::Schema::CompiledIdentityConstraint**)Il2CppClass::FromTypeDefinitionIndex(CompiledIdentityConstraint_TypeDefinitionIndex)->GetStaticField(0x18B0);
		}
		::Il2CppArray<::System::Xml::Schema::Asttree*>* fields; // 0x10
		::System::Xml::XmlQualifiedName* refer; // 0x18
		::System::Xml::XmlQualifiedName* name; // 0x20
		::System::Xml::Schema::Asttree* selector; // 0x28
		::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole role; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint, ::System::Xml::XmlNamespaceManager* nsmgr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaIdentityConstraint*, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT__CTOR_1_OFFSET))(this, constraint, nsmgr);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT__CCTOR_OFFSET))();
		}
	};
}
