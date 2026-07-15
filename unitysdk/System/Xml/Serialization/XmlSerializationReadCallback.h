#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16286B30)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16286B60)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x16286B20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x16286AB0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReadCallback_TypeDefinitionIndex = 2019;

	class XmlSerializationReadCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* Invoke()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
