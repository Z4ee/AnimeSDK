#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml::Serialization { class XmlElementEventArgs; }

#define SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B098D30)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B098D70)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B098D20)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B098C30)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlElementEventHandler_TypeDefinitionIndex = 1983;

	class XmlElementEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Xml::Serialization::XmlElementEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlElementEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Xml::Serialization::XmlElementEventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlElementEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
