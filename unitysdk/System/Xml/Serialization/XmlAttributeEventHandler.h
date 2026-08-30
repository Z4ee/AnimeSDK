#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml::Serialization { class XmlAttributeEventArgs; }

#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B095DC0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B095E00)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B095DB0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B095CC0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAttributeEventHandler_TypeDefinitionIndex = 1981;

	class XmlAttributeEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Xml::Serialization::XmlAttributeEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlAttributeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Xml::Serialization::XmlAttributeEventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlAttributeEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
