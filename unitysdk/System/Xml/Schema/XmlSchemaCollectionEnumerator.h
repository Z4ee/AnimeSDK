#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Hashtable; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaCollectionNode; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_GET_CURRENTNODE_OFFSET UNITYSDK_OFFSET(0x1C16FF90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C16FE80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C16FD90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C16FE70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C16FCB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C16FBD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C170090)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C16FBA0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaCollectionEnumerator_TypeDefinitionIndex = 2126;

	class XmlSchemaCollectionEnumerator : public ::System::Object
	{
	public:
		::System::Collections::IDictionaryEnumerator* enumerator; // 0x10

		::System::Void _ctor(::System::Collections::Hashtable* collection)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR__CTOR_OFFSET))(this, collection);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR__CTOR_1_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Boolean System_Collections_IEnumerator_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* get_Current()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaCollectionNode* get_CurrentNode()
		{
			return ((::System::Xml::Schema::XmlSchemaCollectionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_GET_CURRENTNODE_OFFSET))(this);
		}
	};
}
