#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml::Serialization { class XmlNodeEventArgs; }

#define SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F0718A0)
#define SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F0718E0)
#define SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F071310)
#define SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0712F0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlNodeEventHandler_TypeDefinitionIndex = 1857;

	class XmlNodeEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Xml::Serialization::XmlNodeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlNodeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Xml::Serialization::XmlNodeEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlNodeEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
