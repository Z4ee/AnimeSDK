#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Xml::Schema { class XmlSchemaObject; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D565300)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D565220)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D5655E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D565500)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D565420)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D5656C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D564CD0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaObjectEnumerator_TypeDefinitionIndex = 2172;

	class XmlSchemaObjectEnumerator : public ::System::Object
	{
	public:
		::System::Collections::IEnumerator* enumerator; // 0x10

		::System::Void _ctor(::System::Collections::IEnumerator* enumerator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR__CTOR_OFFSET))(this, enumerator);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR__CTOR_1_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObject* get_Current()
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Boolean System_Collections_IEnumerator_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
