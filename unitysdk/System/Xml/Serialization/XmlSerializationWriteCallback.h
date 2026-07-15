#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1629D9C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1629D9F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1629D9B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1629D8C0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationWriteCallback_TypeDefinitionIndex = 2028;

	class XmlSerializationWriteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
