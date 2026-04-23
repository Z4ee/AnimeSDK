#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }

#define SYSTEM_XML_SCHEMA_XMLVALUECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FD9290)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlValueConverter_TypeDefinitionIndex = 2210;

	class XmlValueConverter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLVALUECONVERTER__CTOR_OFFSET))(this);
		}
	};
}
