#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNodeReader.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml { class XmlDocument; }

#define SYSTEM_DATA_XMLIGNORENAMESPACEREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E1862E0)
#define SYSTEM_DATA_XMLIGNORENAMESPACEREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E186470)
#define SYSTEM_DATA_XMLIGNORENAMESPACEREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E186270)

namespace System::Data
{
	inline static constexpr unsigned int XmlIgnoreNamespaceReader_TypeDefinitionIndex = 38694;

	class XmlIgnoreNamespaceReader : public ::System::Xml::XmlNodeReader
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _namespacesToIgnore; // 0x30

		::System::Void _ctor(::System::Xml::XmlDocument* xdoc, ::Il2CppArray<::System::String*>* namespacesToIgnore)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLIGNORENAMESPACEREADER__CTOR_OFFSET))(this, xdoc, namespacesToIgnore);
		}

		::System::Boolean MoveToFirstAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLIGNORENAMESPACEREADER_MOVETOFIRSTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToNextAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLIGNORENAMESPACEREADER_MOVETONEXTATTRIBUTE_OFFSET))(this);
		}
	};
}
