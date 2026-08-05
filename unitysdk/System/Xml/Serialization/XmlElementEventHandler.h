#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml::Serialization { class XmlElementEventArgs; }

#define SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D5677A0)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D5677E0)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D567210)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5671F0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlElementEventHandler_TypeDefinitionIndex = 1855;

	class XmlElementEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Xml::Serialization::XmlElementEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlElementEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Xml::Serialization::XmlElementEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlElementEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
