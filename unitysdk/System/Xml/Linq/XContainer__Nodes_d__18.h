#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Xml::Linq { class XContainer; }
namespace System::Xml::Linq { class XNode; }

#define SYSTEM_XML_LINQ_XCONTAINER__NODES_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D1A1970)
#define SYSTEM_XML_LINQ_XCONTAINER__NODES_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_XML_LINQ_XNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D1A1A70)
#define SYSTEM_XML_LINQ_XCONTAINER__NODES_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_XML_LINQ_XNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D1A1A00)
#define SYSTEM_XML_LINQ_XCONTAINER__NODES_D__18_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D1A1AF0)
#define SYSTEM_XML_LINQ_XCONTAINER__NODES_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D1A1A60)
#define SYSTEM_XML_LINQ_XCONTAINER__NODES_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D1A1A10)
#define SYSTEM_XML_LINQ_XCONTAINER__NODES_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D1A1960)
#define SYSTEM_XML_LINQ_XCONTAINER__NODES_D__18__CTOR_OFFSET UNITYSDK_OFFSET(0x1D19C930)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XContainer__Nodes_d__18_TypeDefinitionIndex = 3885;

	class XContainer__Nodes_d__18 : public ::System::Object
	{
	public:
		::System::Xml::Linq::XContainer* __4__this; // 0x10
		::System::Xml::Linq::XNode* __2__current; // 0x18
		::System::Xml::Linq::XNode* _n_5__1; // 0x20
		::System::Int32 __l__initialThreadId; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER__NODES_D__18__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER__NODES_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER__NODES_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Xml::Linq::XNode* System_Collections_Generic_IEnumerator_System_Xml_Linq_XNode__get_Current()
		{
			return ((::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER__NODES_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_XML_LINQ_XNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER__NODES_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER__NODES_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>* System_Collections_Generic_IEnumerable_System_Xml_Linq_XNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER__NODES_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_XML_LINQ_XNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER__NODES_D__18_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
