#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml::Serialization { class XmlNodeEventArgs; }

#define SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17C3AF50)
#define SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17C3AF90)
#define SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x17C3AF40)
#define SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17C3AE50)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlNodeEventHandler_TypeDefinitionIndex = 1985;

	class XmlNodeEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Xml::Serialization::XmlNodeEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlNodeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Xml::Serialization::XmlNodeEventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlNodeEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
