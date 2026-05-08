#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }

#define SYSTEM_XML_XPATH_XPATHITEM_VALUEAS_OFFSET UNITYSDK_OFFSET(0x1AFFFB80)
#define SYSTEM_XML_XPATH_XPATHITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFFFBA0)

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathItem_TypeDefinitionIndex = 1847;

	class XPathItem : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM__CTOR_OFFSET))(this);
		}

		::System::Object* ValueAs(::System::Type* returnType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM_VALUEAS_OFFSET))(this, returnType);
		}
	};
}
