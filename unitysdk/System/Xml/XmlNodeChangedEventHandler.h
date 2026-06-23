#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml { class XmlNodeChangedEventArgs; }

#define SYSTEM_XML_XMLNODECHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CA30FD0)
#define SYSTEM_XML_XMLNODECHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CA31010)
#define SYSTEM_XML_XMLNODECHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CA30A50)
#define SYSTEM_XML_XMLNODECHANGEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA30A30)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeChangedEventHandler_TypeDefinitionIndex = 1779;

	class XmlNodeChangedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODECHANGEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Xml::XmlNodeChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::XmlNodeChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODECHANGEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Xml::XmlNodeChangedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Xml::XmlNodeChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODECHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODECHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
