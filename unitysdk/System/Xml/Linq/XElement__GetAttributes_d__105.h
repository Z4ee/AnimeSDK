#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Xml::Linq { class XAttribute; }
namespace System::Xml::Linq { class XElement; }
namespace System::Xml::Linq { class XName; }

#define SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E7C5690)
#define SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_XML_LINQ_XATTRIBUTE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E7C57A0)
#define SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_XML_LINQ_XATTRIBUTE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E7C5730)
#define SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E7C5820)
#define SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E7C5790)
#define SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E7C5740)
#define SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E7C5680)
#define SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C51E0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XElement__GetAttributes_d__105_TypeDefinitionIndex = 3896;

	class XElement__GetAttributes_d__105 : public ::System::Object
	{
	public:
		::System::Xml::Linq::XName* __3__name; // 0x10
		::System::Xml::Linq::XElement* __4__this; // 0x18
		::System::Xml::Linq::XAttribute* _a_5__1; // 0x20
		::System::Xml::Linq::XName* name; // 0x28
		::System::Xml::Linq::XAttribute* __2__current; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_MOVENEXT_OFFSET))(this);
		}

		::System::Xml::Linq::XAttribute* System_Collections_Generic_IEnumerator_System_Xml_Linq_XAttribute__get_Current()
		{
			return ((::System::Xml::Linq::XAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_XML_LINQ_XATTRIBUTE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XAttribute*>* System_Collections_Generic_IEnumerable_System_Xml_Linq_XAttribute__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_XML_LINQ_XATTRIBUTE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
