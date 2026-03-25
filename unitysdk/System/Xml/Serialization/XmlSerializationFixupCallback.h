#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONFIXUPCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x185D4F20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONFIXUPCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x185D4F50)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONFIXUPCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x185D49D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONFIXUPCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x185D49B0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationFixupCallback_TypeDefinitionIndex = 2012;

	class XmlSerializationFixupCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONFIXUPCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* fixup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONFIXUPCALLBACK_INVOKE_OFFSET))(this, fixup);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* fixup, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONFIXUPCALLBACK_BEGININVOKE_OFFSET))(this, fixup, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONFIXUPCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
