#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml { class IDtdDefaultAttributeInfo; }
namespace System::Xml { class XmlTextReaderImpl; }

#define SYSTEM_XML_XMLTEXTREADERIMPL_ONDEFAULTATTRIBUTEUSEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A07B880)
#define SYSTEM_XML_XMLTEXTREADERIMPL_ONDEFAULTATTRIBUTEUSEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A07B8C0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_ONDEFAULTATTRIBUTEUSEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A079DC0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_ONDEFAULTATTRIBUTEUSEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07B860)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_OnDefaultAttributeUseDelegate_TypeDefinitionIndex = 1849;

	class XmlTextReaderImpl_OnDefaultAttributeUseDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_ONDEFAULTATTRIBUTEUSEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Xml::IDtdDefaultAttributeInfo* defaultAttribute, ::System::Xml::XmlTextReaderImpl* coreReader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IDtdDefaultAttributeInfo*, ::System::Xml::XmlTextReaderImpl*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_ONDEFAULTATTRIBUTEUSEDELEGATE_INVOKE_OFFSET))(this, defaultAttribute, coreReader);
		}

		::System::IAsyncResult* BeginInvoke(::System::Xml::IDtdDefaultAttributeInfo* defaultAttribute, ::System::Xml::XmlTextReaderImpl* coreReader, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Xml::IDtdDefaultAttributeInfo*, ::System::Xml::XmlTextReaderImpl*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_ONDEFAULTATTRIBUTEUSEDELEGATE_BEGININVOKE_OFFSET))(this, defaultAttribute, coreReader, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_ONDEFAULTATTRIBUTEUSEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
