#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x185D5240)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x185D5270)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x185D4F90)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x185D4F70)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReadCallback_TypeDefinitionIndex = 2014;

	class XmlSerializationReadCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
