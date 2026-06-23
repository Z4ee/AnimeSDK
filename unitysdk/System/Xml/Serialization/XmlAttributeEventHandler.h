#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml::Serialization { class XmlAttributeEventArgs; }

#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D93D210)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D93D250)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D93CC90)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D93CC70)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAttributeEventHandler_TypeDefinitionIndex = 1853;

	class XmlAttributeEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Xml::Serialization::XmlAttributeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlAttributeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Xml::Serialization::XmlAttributeEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlAttributeEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
