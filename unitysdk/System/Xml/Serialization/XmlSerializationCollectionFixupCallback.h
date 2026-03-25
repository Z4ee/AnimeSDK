#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x185D4960)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x185D49A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x185D43E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x185D43C0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationCollectionFixupCallback_TypeDefinitionIndex = 2011;

	class XmlSerializationCollectionFixupCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* collection, ::System::Object* collectionItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK_INVOKE_OFFSET))(this, collection, collectionItems);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* collection, ::System::Object* collectionItems, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK_BEGININVOKE_OFFSET))(this, collection, collectionItems, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
