#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml { class IDtdDefaultAttributeInfo; }
namespace System::Xml { class XmlTextReaderImpl; }

#define SYSTEM_XML_XMLTEXTREADERIMPL_ONDEFAULTATTRIBUTEUSEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E3C4370)
#define SYSTEM_XML_XMLTEXTREADERIMPL_ONDEFAULTATTRIBUTEUSEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E3C43B0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_ONDEFAULTATTRIBUTEUSEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E3C2D30)
#define SYSTEM_XML_XMLTEXTREADERIMPL_ONDEFAULTATTRIBUTEUSEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C4280)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_OnDefaultAttributeUseDelegate_TypeDefinitionIndex = 1860;

	class XmlTextReaderImpl_OnDefaultAttributeUseDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_ONDEFAULTATTRIBUTEUSEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Xml::IDtdDefaultAttributeInfo* a1, ::System::Xml::XmlTextReaderImpl* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IDtdDefaultAttributeInfo*, ::System::Xml::XmlTextReaderImpl*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_ONDEFAULTATTRIBUTEUSEDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Xml::IDtdDefaultAttributeInfo* a1, ::System::Xml::XmlTextReaderImpl* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Xml::IDtdDefaultAttributeInfo*, ::System::Xml::XmlTextReaderImpl*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_ONDEFAULTATTRIBUTEUSEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_ONDEFAULTATTRIBUTEUSEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
