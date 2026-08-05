#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F071E40)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F071E70)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F071920)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F071900)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationWriteCallback_TypeDefinitionIndex = 1911;

	class XmlSerializationWriteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK_INVOKE_OFFSET))(this, o);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* o, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK_BEGININVOKE_OFFSET))(this, o, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
